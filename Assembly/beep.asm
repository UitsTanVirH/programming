.model small
.stack 100h

code segment
    mov al, 182     ;prepare the speaker
    out 43h, al
    mov ax, 4560    ;frequency number in decimal for middle C
    out 42h, al     ;output low byte
    mov al, ah      ;output high byte
    in al, 61h      ;turn on note, get value from port 61h
    or al, 00000011b;set bits 1 and 0
    out 61h, al     ;send new value
    mov bx, 25      ;pause for duration of note
.pause1:
    mov cx, 65535
.pause2:
    dec cx
    jne .pause2
    dec bx
    jne .pause1
    in al, 61h
    and al, 11111100b
    out 61h, al
    
code ends




