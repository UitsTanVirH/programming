.MODEL SMALL
.STACK 100H
.DATA
    MSG1 DB 10,13,'ENTER THE STRING : $'
    MSG2 DB 10,13,'LENGTH OF STRING IS : $'
    MSG3 DB 10,13,'RESELT - NOT PALINDROME $' 
    MSG4 DB 10,13,'RESELT - PALINDROME $'
    MSG5 DB 10,13,'REVERSE OF THE STRING IS : $' 
    P1 LABEL BYTE
    M1 DB 0FFH  ;assgin maximum length of the array
    L1 DB ?     ;length of the string
    P11 DB 0FFH DUP ('$')     ;n size of an array
    P22 DB 0FFH DUP ('$')     ;dup means duplicate
DATA ENDS 
SHOW MACRO MSG
    MOV AH,9
    LEA DX,MSG
    INT 21H
ENDM    ;used macro to reduce the work and code length
CODE SEGMENT
    ASSUME CS:CODE,DS:DATA  
        MOV AX,DATA
        MOV DS,AX                
               
        SHOW MSG1
       
        LEA DX,P1
        MOV AH,0AH    
        INT 21H
        
        SHOW MSG2
       
        MOV DL,L1
        ADD DL,30H
        MOV AH,2
        INT 21H
       
        SHOW MSG5
               
        LEA SI,P11
        LEA DI,P22
       
        MOV DL,L1
        DEC DL
        MOV DH,0
        ADD SI,DX
        MOV CL,L1
        MOV CH,0
       
REVERSE:
        MOV AL,[SI]
        MOV [DI],AL
        INC DI
        DEC SI
        LOOP REVERSE
       
        SHOW P22
                      
        LEA SI,P11
        LEA DI,P22   
       
        MOV CL,L1
        MOV CH,0
       
CHECK:
        MOV AL,[SI]
        CMP [DI],AL
        JNE NOTPALIN
        INC DI
        INC SI
        LOOP CHECK
     
       
        SHOW MSG4
        JMP EXIT
NOTPALIN:
        SHOW MSG3
               
EXIT:   MOV AH,4CH
        INT 21H
CODE ENDS