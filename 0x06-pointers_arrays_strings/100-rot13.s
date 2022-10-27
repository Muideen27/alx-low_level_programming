	.file	"100-rot13.c"
	.text
	.globl	rot13
	.type	rot13, @function
rot13:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$160, %rsp
	movq	%rdi, -152(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movabsq	$7523094288207667809, %rax
	movabsq	$8101815670912281193, %rdx
	movq	%rax, -128(%rbp)
	movq	%rdx, -120(%rbp)
	movabsq	$8680537053616894577, %rax
	movabsq	$5063528411713075833, %rdx
	movq	%rax, -112(%rbp)
	movq	%rdx, -104(%rbp)
	movabsq	$5642249794417674311, %rax
	movabsq	$6220971177122287695, %rdx
	movq	%rax, -96(%rbp)
	movq	%rdx, -88(%rbp)
	movl	$1515804759, -80(%rbp)
	movb	$0, -76(%rbp)
	movabsq	$8463516535102664558, %rax
	movabsq	$7161393536124352374, %rdx
	movq	%rax, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movabsq	$7740114806721897828, %rax
	movabsq	$6003950658608065900, %rdx
	movq	%rax, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movabsq	$4709174596326544724, %rax
	movabsq	$5280548930227290946, %rdx
	movq	%rax, -32(%rbp)
	movq	%rdx, -24(%rbp)
	movl	$1296845642, -16(%rbp)
	movb	$0, -12(%rbp)
	movl	$0, -136(%rbp)
	jmp	.L2
.L7:
	movl	$0, -132(%rbp)
	jmp	.L3
.L6:
	movl	-132(%rbp), %eax
	cltq
	movzbl	-128(%rbp,%rax), %edx
	movl	-136(%rbp), %eax
	movslq	%eax, %rcx
	movq	-152(%rbp), %rax
	addq	%rcx, %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	jne	.L4
	movl	-136(%rbp), %eax
	movslq	%eax, %rdx
	movq	-152(%rbp), %rax
	addq	%rax, %rdx
	movl	-132(%rbp), %eax
	cltq
	movzbl	-64(%rbp,%rax), %eax
	movb	%al, (%rdx)
	jmp	.L5
.L4:
	addl	$1, -132(%rbp)
.L3:
	cmpl	$51, -132(%rbp)
	jle	.L6
.L5:
	addl	$1, -136(%rbp)
.L2:
	movl	-136(%rbp), %eax
	movslq	%eax, %rdx
	movq	-152(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L7
	movq	-152(%rbp), %rax
	movq	-8(%rbp), %rsi
	xorq	%fs:40, %rsi
	je	.L9
	call	__stack_chk_fail@PLT
.L9:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	rot13, .-rot13
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
