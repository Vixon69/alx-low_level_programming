.MODEL SMALL
.STACK 100H
.DATA
.CODE

MAIN PROC

MOV AH,2

MOV DL,'H'
INT 21H
MOV DL,'e'
INT 21H
MOV DL,'l'
INT 21H
MOV DL,'l'
INT 21H
MOV DL,'o'
INT 21H
MOV DL,','
INT 21H

MOV DL,' '
INT 21H
MOV DL,'H'
INT 21H
MOV DL,'o'
INT 21H
MOV DL,'l'
INT 21H
MOV DL,'b'
INT 21H
MOV DL,'e'
INT 21H
MOV DL,'r'
INT 21H
MOV DL,'t'
INT 21H
MOV DL,'o'
INT 21H
MOV DL,'n'
INT 21H

MOV AH, 4CH
INT 21H


MAIN ENDP
    END MAIN
