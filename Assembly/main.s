	.file	"main.c"
	.text
	.globl	caller
	.type	caller, @function
caller:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, %edi
	call	callee
	leave
	ret
	.size	caller, .-caller
	.globl	callee
	.type	callee, @function
callee:
	pushq	%rbp
	movq	%rsp, %rbp
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %eax
	addl	$1, %eax
	popq	%rbp
	ret
	.size	callee, .-callee
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
	movl	$1, -4(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L6
	movl	-4(%rbp), %eax
	movl	$1, %esi
	movl	%eax, %edi
	call	caller
	jmp	.L7
.L6:
	cmpl	$6, -4(%rbp)
	jne	.L8
	movl	$1, -4(%rbp)
	jmp	.L7
.L8:
	cmpl	$7, -4(%rbp)
	jne	.L9
	movl	$2, -4(%rbp)
	jmp	.L7
.L9:
	cmpl	$1000000, -4(%rbp)
	jne	.L10
	movl	$123, -4(%rbp)
	jmp	.L7
.L10:
	movl	-4(%rbp), %eax
	movl	$2, %esi
	movl	%eax, %edi
	call	caller
.L7:
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 12.2.1 20221121 (Red Hat 12.2.1-4)"
	.section	.note.GNU-stack,"",@progbits
