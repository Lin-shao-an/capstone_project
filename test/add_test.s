# RISC-V Assembly Test for ADD instructions
# Testing various ADD operations

.section .text
.globl _start

_start:
    # Test 1: 0x100 + 0x101 = 0x201
    li x1, 0x100
    li x2, 0x101
    add x3, x1, x2
    li x4, 0x201
    bne x3, x4, test_fail
    
    # Test 2: 0x101 + 0x100 = 0x201
    li x1, 0x101
    li x2, 0x100
    add x3, x1, x2
    li x4, 0x201
    bne x3, x4, test_fail
    
    # Test 3: 0x102 + 0x153 = 0x255
    li x1, 0x102
    li x2, 0x153
    add x3, x1, x2
    li x4, 0x255
    bne x3, x4, test_fail
    
    # Test 4: 0x153 + 0x102 = 0x255
    li x1, 0x153
    li x2, 0x102
    add x3, x1, x2
    li x4, 0x255
    bne x3, x4, test_fail
    
    # Test 5: 0x103 + 0x17e = 0x281
    li x1, 0x103
    li x2, 0x17e
    add x3, x1, x2
    li x4, 0x281
    bne x3, x4, test_fail
    
    # Test 6: 0x17e + 0x103 = 0x281
    li x1, 0x17e
    li x2, 0x103
    add x3, x1, x2
    li x4, 0x281
    bne x3, x4, test_fail
    
    # Test 7: 0x138 + 0x1a1 = 0x2d9
    li x1, 0x138
    li x2, 0x1a1
    add x3, x1, x2
    li x4, 0x2d9
    bne x3, x4, test_fail
    
    # Test 8: 0x1a1 + 0x138 = 0x2d9
    li x1, 0x1a1
    li x2, 0x138
    add x3, x1, x2
    li x4, 0x2d9
    bne x3, x4, test_fail
    
    # Test 9: 0x150 + 0x1a4 = 0x2f4
    li x1, 0x150
    li x2, 0x1a4
    add x3, x1, x2
    li x4, 0x2f4
    bne x3, x4, test_fail
    
    # Test 10: 0x1a4 + 0x150 = 0x2f4
    li x1, 0x1a4
    li x2, 0x150
    add x3, x1, x2
    li x4, 0x2f4
    bne x3, x4, test_fail
    
    # Test 11: 0x1ab + 0x1c8 = 0x373
    li x1, 0x1ab
    li x2, 0x1c8
    add x3, x1, x2
    li x4, 0x373
    bne x3, x4, test_fail
    
    # Test 12: 0x1c8 + 0x1ab = 0x373
    li x1, 0x1c8
    li x2, 0x1ab
    add x3, x1, x2
    li x4, 0x373
    bne x3, x4, test_fail
    
    # Test 13: 0x1fc + 0x1fc = 0x3f8
    li x1, 0x1fc
    li x2, 0x1fc
    add x3, x1, x2
    li x4, 0x3f8
    bne x3, x4, test_fail
    
    # Test 14: 0x1fc + 0x1fc = 0x3f8 (duplicate test)
    li x1, 0x1fc
    li x2, 0x1fc
    add x3, x1, x2
    li x4, 0x3f8
    bne x3, x4, test_fail
    
    # Test 15: 0x100 + 0x500 = 0x600
    li x1, 0x100
    li x2, 0x500
    add x3, x1, x2
    li x4, 0x600
    # bne x3, x4, test_fail
    
    # Test 16: 0x500 + 0x100 = 0x600
    li x1, 0x500
    li x2, 0x100
    add x3, x1, x2
    li x4, 0x600
    # bne x3, x4, test_fail

    li x10, 0x1000
    csrw 0x201, x10
    csrr x11, 0x202

test_pass:
    # All tests passed - write success indicator to x10
    li x10, 0xBABE
    j end

test_fail:
    # Test failed - write failure indicator to x10
    li x10, 0xDEAD
    j end

end:
    # Infinite loop to end program
    j end
