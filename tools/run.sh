#!/usr/bin/env bash
# Colors
GREEN="\033[1;32m"
RED="\033[1;31m"
YELLOW="\033[1;33m"
CYAN="\033[1;36m"
RESET="\033[0m"

# Check if a .mem file is provided as an argument
if [ $# -ne 1 ]; then
    echo -e "${RED}Error: Please provide a .mem file as an argument.${RESET}"
    echo -e "Usage: ./run.sh <test.mem>"
    exit 1
fi

file_name="$1"

# Check if the provided .mem file exists
if [ ! -f "../user/$file_name.mem" ]; then
    echo -e "${RED}Error: File '$file_name.mem' not found.${RESET}"
    exit 1
fi

cd ../riscv32-core-main
if ! make -q; then
    make
    build_exit_status=$?

    if [ $build_exit_status -ne 0 ]; then
        echo -e "${RED}Error: Build failed with exit status $build_exit_status.${RESET}"
        exit 1
    fi

    echo -e "${GREEN}Build complete.${RESET}"
else
    echo -e "${YELLOW}Build is already up-to-date. Skipping build.${RESET}"
fi
cd ../tools

stop_pc=$(grep '<_end>:' "../user/$file_name.dump" | tr -d '\0' | cut -c 2-8)
if [ -n "$stop_pc" ]; then
    stop_pc=$(printf "%d" "0x$stop_pc")
fi

output=$(./../riscv32-core-main/obj_dir/VComputer "../user/$file_name.mem" "$stop_pc")

echo -e "$output"