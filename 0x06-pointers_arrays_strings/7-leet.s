	.file	"7-leet.c"
	.text
	.globl	leet
	.type	leet, @function
leet:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -56(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movabsq	$6085576335808610657, %rax
	movq	%rax, -30(%rbp)
	movw	$19564, -22(%rbp)
	movb	$0, -20(%rbp)
	movabsq	$3978701779380679732, %rax
	movq	%rax, -19(%rbp)
	movw	$12593, -11(%rbp)
	movb	$0, -9(%rbp)
	movl	$0, -40(%rbp)
	jmp	.L2
.L6:
	movl	$0, -36(%rbp)
	jmp	.L3
.L5:
	movl	-36(%rbp), %eax
	cltq
	movzbl	-30(%rbp,%rax), %edx
	movl	-40(%rbp), %eax
	movslq	%eax, %rcx
	movq	-56(%rbp), %rax
	addq	%rcx, %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	jne	.L4
	movl	-40(%rbp), %eax
	movslq	%eax, %rdx
	movq	-56(%rbp), %rax
	addq	%rax, %rdx
	movl	-36(%rbp), %eax
	cltq
	movzbl	-19(%rbp,%rax), %eax
	movb	%al, (%rdx)
.L4:
	addl	$1, -36(%rbp)
.L3:
	cmpl	$9, -36(%rbp)
	jle	.L5
	addl	$1, -40(%rbp)
.L2:
	movl	-40(%rbp), %eax
	movslq	%eax, %rdx
	movq	-56(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L6
	movq	-56(%rbp), %rax
	movq	-8(%rbp), %rsi
	xorq	%fs:40, %rsi
	je	.L8
	call	__stack_chk_fail@PLT
.L8:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	leet, .-leet
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
