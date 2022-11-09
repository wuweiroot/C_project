/*
.text
.global sw
.type sw,@function


sw:
        movq %rsp,(%rsi) 
        movq %rdi,%rsp
        ret

*/


.text
.global sw
//.type sw,@function


sw:
        movq %rsp,(%rsi) 
        movq %rdi,%rsp
        ret


        