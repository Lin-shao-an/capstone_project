    .global _start
    .text
_start:
    jal main
    j _end

_end:
    j _end
