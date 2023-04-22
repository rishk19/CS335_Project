
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

	.globl	main
	.type	main, @function
main:
	pushq %rbp
	movq %rsp , %r12
	movq %r12 ,%rbp
	movq %rsp , %r13
	movq $224 , %r12
	subq %r12 ,%r13
	movq %r13 ,%rsp
	movq $5 , %r13
	movq $1 , %r12
	subq %r12 ,%r13
	movq %r13 ,-8(%rbp)
	movq -8(%rbp) , %r12
	movq $6 , %r13
	addq %r12 ,%r13
	movq %r13 ,-16(%rbp)
	movq -16(%rbp) , %r13
	movq $2 , %r12
	subq %r12 ,%r13
	movq %r13 ,-24(%rbp)
	movq -24(%rbp) , %r12
	movq $7 , %r13
	addq %r12 ,%r13
	movq %r13 ,-32(%rbp)
	movq -32(%rbp) , %r13
	movq $3 , %r12
	subq %r12 ,%r13
	movq %r13 ,-40(%rbp)
	movq -40(%rbp) , %r12
	movq $8 , %r13
	addq %r12 ,%r13
	movq %r13 ,-48(%rbp)
	movq -48(%rbp) , %r12
	movq $9 , %r13
	addq %r12 ,%r13
	movq %r13 ,-56(%rbp)
	movq -56(%rbp) , %r12
	movq $10 , %r13
	addq %r12 ,%r13
	movq %r13 ,-64(%rbp)
	movq -64(%rbp) , %r12
	movq $5 , %r13
	addq %r12 ,%r13
	movq %r13 ,-72(%rbp)
	movq -72(%rbp) , %r13
	movq $1 , %r12
	subq %r12 ,%r13
	movq %r13 ,-80(%rbp)
	movq -80(%rbp) , %r12
	movq $6 , %r13
	addq %r12 ,%r13
	movq %r13 ,-88(%rbp)
	movq -88(%rbp) , %r13
	movq $2 , %r12
	subq %r12 ,%r13
	movq %r13 ,-96(%rbp)
	movq -96(%rbp) , %r12
	movq $7 , %r13
	addq %r12 ,%r13
	movq %r13 ,-104(%rbp)
	movq -104(%rbp) , %r13
	movq $3 , %r12
	subq %r12 ,%r13
	movq %r13 ,-112(%rbp)
	movq -112(%rbp) , %r12
	movq $8 , %r13
	addq %r12 ,%r13
	movq %r13 ,-120(%rbp)
	movq -120(%rbp) , %r12
	movq $9 , %r13
	addq %r12 ,%r13
	movq %r13 ,-128(%rbp)
	movq -128(%rbp) , %r12
	movq $10 , %r13
	addq %r12 ,%r13
	movq %r13 ,-136(%rbp)
	movq -136(%rbp) , %r12
	movq $5 , %r13
	addq %r12 ,%r13
	movq %r13 ,-144(%rbp)
	movq -144(%rbp) , %r13
	movq $1 , %r12
	subq %r12 ,%r13
	movq %r13 ,-152(%rbp)
	movq -152(%rbp) , %r12
	movq $6 , %r13
	addq %r12 ,%r13
	movq %r13 ,-160(%rbp)
	movq -160(%rbp) , %r13
	movq $2 , %r12
	subq %r12 ,%r13
	movq %r13 ,-168(%rbp)
	movq -168(%rbp) , %r12
	movq $7 , %r13
	addq %r12 ,%r13
	movq %r13 ,-176(%rbp)
	movq -176(%rbp) , %r13
	movq $3 , %r12
	subq %r12 ,%r13
	movq %r13 ,-184(%rbp)
	movq -184(%rbp) , %r12
	movq $8 , %r13
	addq %r12 ,%r13
	movq %r13 ,-192(%rbp)
	movq -192(%rbp) , %r12
	movq $9 , %r13
	addq %r12 ,%r13
	movq %r13 ,-200(%rbp)
	movq -200(%rbp) , %r12
	movq $10 , %r13
	addq %r12 ,%r13
	movq %r13 ,-208(%rbp)
	movq -208(%rbp) , %r12
	movq %r12 ,0(%rbp)
	movq 0(%rbp) , %r12
	movq %r12 ,0(%rbp)
	movq 0(%rbp) , %r12
	movq $1 , %r13
	addq %r12 ,%r13
	movq %r13 ,-216(%rbp)
	movq -216(%rbp) , %r12
	movq %r12 ,0(%rbp)
	.size	main, .-main

.end
