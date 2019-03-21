section     .text
global      main	;must be declared for linker (ld)
main:	mov	rax, 1			;tell linker entry point
	mov     rdi, 1	;message length
	mov     rsi, msg	;message to write
	mov     rdx,17	;system call number
	syscall
	mov	    rax, 60	;call kernel
	xor     rdi, rdi	;system call number (sys_exit)
	syscall
section     .data
msg:       db  "Hello, Holberton", 10, 0	;our dear string
