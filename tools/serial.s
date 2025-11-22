.set CSR_SERIAL_IO_OUT,  0x202

.global csr_serial_write_io

csr_serial_write_io:
    csrw CSR_SERIAL_IO_OUT, a0
    ret
