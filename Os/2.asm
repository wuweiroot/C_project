data segment ;数据段
    string db 'zhuge shabi$'
data ends
code segment ;代码段
assume cs:code,ds:data
start:
    mov ax,data ;获取段基址
    mov ds,ax ;将段基址送入寄存器
    mov dx,offset stringgcc
    mov ah,9
    int 21h
    mov ah,4ch
    int 21h
code ends
end start