import sys

def convert_bin_to_mem(bin_filename, mem_filename):
    try:
        with open(bin_filename, 'rb') as bin_file:
            with open(mem_filename, 'w') as mem_file:
                while (byte := bin_file.read(1)):
                    # 將 byte 轉換成 8 位元的二進位字串
                    binary_string = f'{int.from_bytes(byte, "little"):08b}'
                    mem_file.write(f'{binary_string}\n')
        # print(f"Successfully converted '{bin_filename}' to '{mem_filename}'")
    except FileNotFoundError:
        print(f"Error: Input file '{bin_filename}' not found.")
    except Exception as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: python bin_to_mem.py <input.bin> <output.mem>")
        sys.exit(1)
    
    convert_bin_to_mem(sys.argv[1], sys.argv[2])