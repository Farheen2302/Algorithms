	.file	"dp_lps.c"
	.section	.rodata
.LC0:
	.string	"Enter the string"
.LC1:
	.string	"%[^\n]%*c"
	.align 8
.LC2:
	.string	"Longest Palllindrome subsequence is of length %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$40048, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$100, %edi
	call	malloc
	movq	%rax, -40024(%rbp)
	movl	$.LC0, %edi
	call	puts
	movq	-40024(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movq	-40024(%rbp), %rax
	movq	%rax, %rdi
	call	strlen
	movl	%eax, -40032(%rbp)
	movl	$0, -40040(%rbp)
	jmp	.L2
.L3:
	movl	-40040(%rbp), %eax
	cltq
	imulq	$404, %rax, %rax
	addq	%rbp, %rax
	subq	$40016, %rax
	movl	$1, (%rax)
	addl	$1, -40040(%rbp)
.L2:
	movl	-40040(%rbp), %eax
	cmpl	-40032(%rbp), %eax
	jl	.L3
	movl	$2, -40036(%rbp)
	jmp	.L4
.L10:
	movl	$0, -40040(%rbp)
	jmp	.L5
.L9:
	movl	-40040(%rbp), %edx
	movl	-40036(%rbp), %eax
	addl	%edx, %eax
	subl	$1, %eax
	movl	%eax, -40028(%rbp)
	movl	-40040(%rbp), %eax
	movslq	%eax, %rdx
	movq	-40024(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %edx
	movl	-40028(%rbp), %eax
	movslq	%eax, %rcx
	movq	-40024(%rbp), %rax
	addq	%rcx, %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	jne	.L6
	cmpl	$2, -40036(%rbp)
	jne	.L6
	movl	-40028(%rbp), %eax
	movslq	%eax, %rcx
	movl	-40040(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movl	$2, -40016(%rbp,%rax,4)
	jmp	.L7
.L6:
	movl	-40040(%rbp), %eax
	movslq	%eax, %rdx
	movq	-40024(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %edx
	movl	-40028(%rbp), %eax
	movslq	%eax, %rcx
	movq	-40024(%rbp), %rax
	addq	%rcx, %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	jne	.L8
	movl	-40040(%rbp), %eax
	leal	1(%rax), %edx
	movl	-40028(%rbp), %eax
	subl	$1, %eax
	movslq	%eax, %rcx
	movslq	%edx, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movl	-40016(%rbp,%rax,4), %eax
	leal	2(%rax), %ecx
	movl	-40028(%rbp), %eax
	movslq	%eax, %rsi
	movl	-40040(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rsi, %rax
	movl	%ecx, -40016(%rbp,%rax,4)
	jmp	.L7
.L8:
	movl	-40028(%rbp), %eax
	subl	$1, %eax
	movslq	%eax, %rcx
	movl	-40040(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movl	-40016(%rbp,%rax,4), %edx
	movl	-40040(%rbp), %eax
	leal	1(%rax), %ecx
	movl	-40028(%rbp), %eax
	movslq	%eax, %rsi
	movslq	%ecx, %rcx
	movq	%rcx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	leaq	0(,%rax,4), %rcx
	addq	%rcx, %rax
	salq	$2, %rax
	addq	%rsi, %rax
	movl	-40016(%rbp,%rax,4), %eax
	cmpl	%eax, %edx
	cmovge	%edx, %eax
	movl	%eax, %ecx
	movl	-40028(%rbp), %eax
	movslq	%eax, %rsi
	movl	-40040(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rsi, %rax
	movl	%ecx, -40016(%rbp,%rax,4)
.L7:
	addl	$1, -40040(%rbp)
.L5:
	movl	-40032(%rbp), %eax
	subl	-40036(%rbp), %eax
	addl	$1, %eax
	cmpl	-40040(%rbp), %eax
	jg	.L9
	addl	$1, -40036(%rbp)
.L4:
	movl	-40036(%rbp), %eax
	cmpl	-40032(%rbp), %eax
	jle	.L10
	movl	-40032(%rbp), %eax
	subl	$1, %eax
	cltq
	movl	-40016(%rbp,%rax,4), %eax
	movl	%eax, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	movq	-8(%rbp), %rdi
	xorq	%fs:40, %rdi
	je	.L12
	call	__stack_chk_fail
.L12:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.9.2-10ubuntu13) 4.9.2"
	.section	.note.GNU-stack,"",@progbits
