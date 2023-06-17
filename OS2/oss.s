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
        movq %rsp,(%rsi)  ////rdi rsi函数第1 2参数 sw(sp1,spm);  
        movq %rdi,%rsp
        ret


        