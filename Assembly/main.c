#include <stdio.h>

int caller(int a, int b);
int callee(int c);

int caller(int a, int b)
{
    return(callee(a + b));
}

int callee(int c)
{
    return(c+1);
}

int main()
{
    long a = 4; long b = 2; long c = 10;
    int arr[10];
    arr[0] = 1;
    arr[1] = 0;
    arr[0] = arr[1];
    // c = a + b;    //addq
    // c = a - b;    //subq
    // c = a * b;    //imulq
    // c = a / b;    
    /*
    movq	-8(%rbp), %rax
	cqto
	idivq	-16(%rbp)
	movq	%rax, -24(%rbp)*/
    
    // c = !a;    
    /*
    cmpq	$0, -8(%rbp)
	sete	%al
	movzbl	%al, %eax
	movq	%rax, -24(%rbp)
    */ 
    // c = a && b;    
    /*
        cmpq	$0, -8(%rbp)
        je	.L6
        cmpq	$0, -16(%rbp)
        je	.L6
        movl	$1, %eax
        jmp	.L7
    .L6:
        movl	$0, %eax
    .L7:
        cltq
        movq	%rax, -24(%rbp)
    */
    // c = a || b;    
    /*
    	cmpq	$0, -8(%rbp)
        jne	.L6
        cmpq	$0, -16(%rbp)
        je	.L7
    .L6:
        movl	$1, %eax
        jmp	.L8
    .L7:
        movl	$0, %eax
    .L8:
        cltq
        movq	%rax, -24(%rbp)
    */
    // c = a & b;  
    /*
        movq	-8(%rbp), %rax
	    andq	-16(%rbp), %rax
	    movq	%rax, -24(%rbp)
    */  
    // c = a | b;  
    /*
    	movq	-8(%rbp), %rax
	    orq	-16(%rbp), %rax
	    movq	%rax, -24(%rbp)

    */  
    // c = a > b;
    /*
        movq	-8(%rbp), %rax
	    cmpq	-16(%rbp), %rax
	    setg	%al
	    movzbl	%al, %eax
	    movq	%rax, -24(%rbp)
    */    
    // c = a < b;   
    /*
        movq	-8(%rbp), %rax
        cmpq	-16(%rbp), %rax
        setl	%al
        movzbl	%al, %eax
        movq	%rax, -24(%rbp)    
    */ 
    // c = a >= b;
    /*
        movq	-8(%rbp), %rax
	    cmpq	-16(%rbp), %rax
	    setge	%al
	    movzbl	%al, %eax
	    movq	%rax, -24(%rbp)
    */    
    // c = a <= b; 
    /*
    	movq	-8(%rbp), %rax
	    cmpq	-16(%rbp), %rax
	    setle	%al
	    movzbl	%al, %eax
	    movq	%rax, -24(%rbp)
    */   
    // c = a == b;  
    /*
        movq	-8(%rbp), %rax
	    cmpq	-16(%rbp), %rax
	    sete	%al
	    movzbl	%al, %eax
	    movq	%rax, -24(%rbp)
    */  
    // c = a != b; 
    /*
	    movq	-8(%rbp), %rax
	    cmpq	-16(%rbp), %rax
	    setne	%al
	    movzbl	%al, %eax
	    movq	%rax, -24(%rbp)
    */   
    // c = +a;
    /*
        movq	-8(%rbp), %rax
	    movq	%rax, -24(%rbp)
    */    
    // c = -a; 
    /*
        movq	-8(%rbp), %rax
	    negq	%rax
	    movq	%rax, -24(%rbp)
    */
    // c = a % b;  
    /*
        movq	-8(%rbp), %rax
	    cqto
	    idivq	-16(%rbp)
	    movq	%rdx, -24(%rbp)
    */  
    // c = a ^ b; 
    /*
	    movq	-8(%rbp), %rax
	    xorq	-16(%rbp), %rax
	    movq	%rax, -24(%rbp)
    */   
    // c = ~a;
    /*
	movq	-8(%rbp), %rax
	notq	%rax
	movq	%rax, -24(%rbp)

    */
    // c = a << b;   
    /*
        movq	-16(%rbp), %rax
	    movl	%eax, %edx
	    movq	-8(%rbp), %rax
	    movl	%edx, %ecx
	    salq	%cl, %rax
	    movq	%rax, -24(%rbp)
    */ 
    // c = a >> b;   
    /*
        movq	-16(%rbp), %rax
	    movl	%eax, %edx
	    movq	-8(%rbp), %rax
	    movl	%edx, %ecx
	    sarq	%cl, %rax
	    movq	%rax, -24(%rbp)
    */ 
    // c = a <<= b;  
    /*
    	movq	-16(%rbp), %rax
	    movl	%eax, %ecx
	    salq	%cl, -8(%rbp)
	    movq	-8(%rbp), %rax
	    movq	%rax, -24(%rbp)
    */  
    //  c = a >>= b; 
    /*
    	movq	-16(%rbp), %rax
	    movl	%eax, %ecx
	    sarq	%cl, -8(%rbp)
	    movq	-8(%rbp), %rax
	    movq	%rax, -24(%rbp)
    */   
    // c = a >>> b;    
    // c = a  b;    
    // c = a  b;    
    // c = a  b;    
    // c = a  b;    
    // c = a  b;        
    //printf("%d\n", caller(a,b));
    return 0;
}