	.file	"main.c"
	.text
	.globl	rikesh
	.type	rikesh, @function
rikesh:
	pushq	%rbp
	
	movq	%rsp, %rbp
	
	movl	$100, -4(%rbp)
	
	movl	$1, -4(%rbp)
	
	movl	$0, %eax
	
	popq	%rbp
	
	ret
	.size	rikesh, .-rikesh
	.globl	main
	.type	main, @function
main:
	pushq	%rbp

	movq	%rsp, %rbp
	
	subq	$16, %rsp
	
	movl	$0, -4(%rbp)
	
	movl	$0, %eax
	
	call	rikesh
	nop
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 12.2.1 20221121 (Red Hat 12.2.1-4)"
	.section	.note.GNU-stack,"",@progbits
