%include "io.inc"

section .data
num DD 4

section .text
global CMAIN
CMAIN:
    MOV EAX, [num]
    MOV ECX, [num]
    SUB ECX, 1
    factorialLoop:
        IMUL EAX, ECX
        LOOP factorialLoop
    PRINT_UDEC 4, EAX
    ret