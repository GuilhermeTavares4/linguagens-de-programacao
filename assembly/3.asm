%include "io.inc"

section .data
max_number DD 50
odd_number DD 1

section .text
global CMAIN
CMAIN:
    MOV EAX, [max_number]
    MOV ECX, [odd_number]
    CMP EAX, 0
    JLE end_program
    main_loop:
        PRINT_UDEC 4, ECX
        NEWLINE
        ADD ECX, 2
        CMP ECX, EAX
        JLE main_loop
    end_program:
        ret
    ret