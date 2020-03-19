assume CS: codesg
codesg segment
start: mov AX, 01234
 mov BX, 04567
 add AX, BX
 add AX, AX
 
 mov AX, 4C00H
 int 21H
codesg ends
end