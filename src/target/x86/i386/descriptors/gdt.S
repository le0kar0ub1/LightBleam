.code32

.global gdtptr
.global gdtptr_phys
.global gdt

.section .rodata

/*
** GDT virt ptr after pagination
*/
.align 16
gdtptr:
    .2byte gdt_end - gdt_start - 1
    .4byte gdt

/*
** GDT phys ptr before pagination
*/
.align 16
gdtptr_phys:
    .2byte gdt_end - gdt_start - 1
    .4byte gdt - 0xC0000000

.section .data

/*
** The original GDT 
*/
.align 16
gdt:
gdt_start:
    .4byte 0
    .4byte 0

    # Kernel Code Selector
    .2byte 0xFFFF       # limit 15:0
    .2byte 0x0000       # base 15:0
    .byte  0x00         # base 23:16
    .byte  0b10011010   # P(1) DPL(00) (1) C(1) D(0) R(1) A(0)
    .byte  0b11001111   # G(1) S(1) (0) (0) limit 19:16
    .byte  0x00         # base 31:24

    # Kernel Data Selector
    .2byte 0xFFFF       # limit 15:0
    .2byte 0x0000       # base 15:0
    .byte  0x00         # base 23:16
    .byte  0b10010010   # P(1) DPL(00) (1) C(0) E(0) W(1) A(0)
    .byte  0b11001111   # G(1) S(1) (0) (0) limit 19:16
    .byte  0x00         # base 31:24

    # User Code Selector
    .2byte 0xFFFF       # limit 15:0
    .2byte 0x0000       # base 15:0
    .byte  0x00         # base 23:16
    .byte  0b11111010   # P(1) DPL(11) (1) C(1) D(0) R(1) A(0)
    .byte  0b11001111   # G(1) S(1) (0) (0) limit 19:16
    .byte  0x00         # base 31:24

    # User Data Selector
    .2byte 0xFFFF       # limit 15:0
    .2byte 0x0000       # base 15:0
    .byte  0x00         # base 23:16
    .byte  0b11110010   # P(1) DPL(11) (1) C(0) E(0) W(1) A(0)
    .byte  0b11001111   # G(1) S(1) (0) (0) limit 19:16
    .byte  0x00         # base 31:24

     #
    # Space for TSS
     #

    .4byte 0
    .4byte 0
gdt_end:
