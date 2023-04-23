
	.file	 "main.c"
	.text
	.section	.rodata
.LC_CHAR:
	 .string "%c"
.LC_INT:
	 .string "%d"
.LC_LONG:
	 .string "%ld"
	.text

	.globl	__short_circuit__rikesh
	.type	__short_circuit__rikesh, @function
__short_circuit__rikesh:
	pushq %rbp
	movq %rsp , %r12
	movq %r12 ,%rbp
	movq %rsp , %r13
	movq $32 , %r12
	subq %r12 ,%r13
	movq %r13 ,%rsp
	movq $2 , %r12
	movq %r12 ,0(%rbp)
	movq $12 , %r12
	movq %r12 ,-8(%rbp)
	movq 0(%rbp) , %r12
	movq -8(%rbp) , %r13
	addq %r12 ,%r13
	movq %r13 ,-16(%rbp)
	movq -16(%rbp) , %r12
	movq %r12 ,0(%rbp)
	movq $0 , %r12
	movq %r12 ,%rax
	popq %rbp
	movq %rsp , %r12
	movq $0 , %r13
	addq %r12 ,%r13
	movq %r13 ,%rsp
	leave
	ret
	movq %rsp , %r12
	movq $32 , %r13
	addq %r12 ,%r13
	movq %r13 ,%rsp
	leave
	ret
	.size	__short_circuit__rikesh, .-__short_circuit__rikesh

	.globl	main
	.type	main, @function
main:
	pushq %rbp
	movq %rsp , %r12
	movq %r12 ,%rbp
	movq %rsp , %r13
	movq $64 , %r12
	subq %r12 ,%r13
	movq %r13 ,%rsp
	movq $1 , %r12
	movq %r12 ,0(%rbp)
	movq $2 , %r12
	movq %r12 ,-8(%rbp)
	movq $3 , %r12
	movq %r12 ,-16(%rbp)
	movq $0 , %r12
	movq %r12 ,-24(%rbp)
.L4:
	movq $10 , %r12
	movq %r12 ,-40(%rbp)
	movq -24(%rbp) , %r12
	movq -40(%rbp), %rax
	cmpq %r12 , %rax
	setg %al
	movzbl %al , %eax
	movq %rax ,-48(%rbp)
	movq -48(%rbp), %rax
	cmpq $0 , %rax
	je .L5
	movq -24(%rbp) , %rax
	movq %rax , %rsi
	movl $.LC_INT ,%edi
	movl $0 ,%eax
	call printf
	movl $10 ,%edi
	call putchar
	movq -24(%rbp) , %r12
	movq $1 , %r13
	addq %r12 ,%r13
	movq %r13 ,-56(%rbp)
	movq -56(%rbp) , %r12
	movq %r12 ,-24(%rbp)
	jmp .L4
.L5:
	call __short_circuit__rikesh
	movq %rsp , %r12
	movq %r12 ,-32(%rbp)
	movq %rsp , %r12
	movq $64 , %r13
	addq %r12 ,%r13
	movq %r13 ,%rsp
	leave
	ret
	.size	main, .-main

.end
