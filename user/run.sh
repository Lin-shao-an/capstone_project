#!/bin/bash
# Colors
GREEN="\033[1;32m"
RED="\033[1;31m"
YELLOW="\033[1;33m"
CYAN="\033[1;36m"
RESET="\033[0m"

file_name="$1"
file_name=$(basename "$file_name" .c)

if [ $# -eq 0 ]; then
    echo -e "${RED}Error: No input file name provided.${RESET}"
    echo -e "${YELLOW}Usage: ./run.sh <filename>/<filename.c>${RESET}"
    exit 1
fi

if [[ ! -f "$file_name.c" ]]; then
    echo -e "${RED}Error: file '$file_name.c' does not exist.${RESET}"
    exit 1
fi

riscv32-unknown-elf-gcc \
    -Ttext=0x0 \
    -nostartfiles \
    -march=rv32im_zicsr \
    -mabi=ilp32 \
    -std=gnu89 \
    -ffreestanding \
    -Wreturn-type \
    -o $file_name.elf ../tools/start.s ../tools/utils.h ../tools/utils.c ../tools/serial.s $file_name.c

if [ $? -ne 0 ]; then
    echo -e "${RED}Error: Compilation failed for $file_name.c.${RESET}"
    exit 1
fi

riscv32-unknown-elf-objcopy -O binary $file_name.elf $file_name.bin

riscv32-unknown-elf-objdump -d $file_name.elf > $file_name.dump

rm $file_name.elf

python ../tools/bin2mem.py $file_name.bin $file_name.mem

rm $file_name.bin

chmod +x ../tools/run.sh

source ./../tools/run.sh $file_name

cd ../user

rm $file_name.mem