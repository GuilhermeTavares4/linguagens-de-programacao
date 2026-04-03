%include "io.inc"

section .data
num DD 79
prime db "e primo", 0
notPrime db "nao e primo", 0

section .text
global CMAIN
CMAIN:
    MOV EAX, [num]
    CMP EAX, 2
    JE primeBlock
    CMP EAX, 1
    JE notPrimeBlock
    MOV ECX, [num]
    SUB ECX, 1

    divisionLoop:
        MOV EAX, [num]
        MOV EDX, 0
        MOV EBX, ECX
        DIV EBX
        SUB ECX, 1
        CMP EDX, 0
        JE notPrimeBlock
        CMP ECX, 1
        JG divisionLoop
        JMP primeBlock
    primeBlock:
        PRINT_STRING prime
        NEWLINE
        RET
    notPrimeBlock:
        PRINT_STRING notPrime
        NEWLINE
        RET
    ret