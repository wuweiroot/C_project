mov ax,0b800h
mov ds,ax
mov byte [0x00],'h'
mov byte [0x02],'e'
mov byte [0x04],'l'
mov byte [0x06],'l'
mov byte [0x08],'o'
mov byte [0x0a],'w'
mov byte [0x0c],' '
mov byte [0x0e],'w'
mov byte [0x10],'o'
mov byte [0x12],'r'
mov byte [0x14],'d'
mov byte [0x16],' '
mov byte [0x18],' '
mov byte [0x1a],' '
mov byte [0x1c],' '
mov byte [0x1e],' '
mov byte [0x20],' '
mov byte [0x22],' '
mov byte [0x24],' '
mov byte [0x26],' '

jmp $
times 510-($-$$) db 0
db 0x55,0xaa