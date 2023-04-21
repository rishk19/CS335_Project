

.__uminus_bminus__printInt:
	movq %rsp %r12
	movq $14 %r13
	subq %r12 %r13
	movq %r13 %rsp
	movq 8(%rbp) %rax
	cmpq %rax 0(%rbp)
	sete %al
	movzbl %al %eax
	movq %rax -8(%rbp)
	movq $1 %rax
	cmpq %rax  $0
	setg %al
	movzbl %al %eax
	movq %rax -23(%rbp)
.L5:
.L6:
.L7:
	movq 8(%rbp) %r12
	movq -7(%rbp) %r13
	addq %r12 %r13
	movq %r13 -15(%rbp)
.L8:

.__uminus_bminus__main:
	movq %rsp %r12
	movq $14 %r13
	subq %r12 %r13
	movq %r13 %rsp
	cmpq $0  $1
	je .L11
	cmpq $0  $0
	je .L11
	movl $1 %eax
	jmp .L12
.L11:
	movl $0 %eax
.L12:
	cltq
	movq %rax -8(%rbp)
	cmpq $0  $1
	sete %al
	movzbl %al %eax
	movq %rax -15(%rbp)
