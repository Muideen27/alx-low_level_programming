	.file	"101-print_number.c"
	.text
	.globl	print_number
	.type	print_number, @function
print_number:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$96, %rsp
	movl	%edi, -84(%rbp)
	movl	-84(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1152921505, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$28, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -76(%rbp)
	movl	-76(%rbp), %eax
	movl	%eax, -36(%rbp)
	movl	-84(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1441151881, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$25, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	movslq	%edx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %ecx
	sarl	$2, %ecx
	movl	%edx, %eax
	sarl	$31, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, -72(%rbp)
	movl	-72(%rbp), %ecx
	movl	%ecx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	addl	%eax, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -72(%rbp)
	movl	-36(%rbp), %edx
	movl	-72(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -32(%rbp)
	movl	-84(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1801439851, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$22, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	movslq	%edx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %ecx
	sarl	$2, %ecx
	movl	%edx, %eax
	sarl	$31, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, -68(%rbp)
	movl	-68(%rbp), %ecx
	movl	%ecx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	addl	%eax, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -68(%rbp)
	movl	-32(%rbp), %edx
	movl	-68(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -28(%rbp)
	movl	-84(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1125899907, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$18, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	movslq	%edx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %ecx
	sarl	$2, %ecx
	movl	%edx, %eax
	sarl	$31, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, -64(%rbp)
	movl	-64(%rbp), %ecx
	movl	%ecx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	addl	%eax, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -64(%rbp)
	movl	-28(%rbp), %edx
	movl	-64(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
	movl	-84(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$351843721, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$13, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	movslq	%edx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %ecx
	sarl	$2, %ecx
	movl	%edx, %eax
	sarl	$31, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, -60(%rbp)
	movl	-60(%rbp), %ecx
	movl	%ecx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	addl	%eax, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -60(%rbp)
	movl	-24(%rbp), %edx
	movl	-60(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -20(%rbp)
	movl	-84(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1759218605, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$12, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	movslq	%edx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %ecx
	sarl	$2, %ecx
	movl	%edx, %eax
	sarl	$31, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, -56(%rbp)
	movl	-56(%rbp), %ecx
	movl	%ecx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	addl	%eax, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -56(%rbp)
	movl	-20(%rbp), %edx
	movl	-56(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -16(%rbp)
	movl	-84(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$274877907, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$6, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	movslq	%edx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %ecx
	sarl	$2, %ecx
	movl	%edx, %eax
	sarl	$31, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %ecx
	movl	%ecx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	addl	%eax, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -52(%rbp)
	movl	-16(%rbp), %edx
	movl	-52(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -12(%rbp)
	movl	-84(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1374389535, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$5, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	movslq	%edx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %ecx
	sarl	$2, %ecx
	movl	%edx, %eax
	sarl	$31, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, -48(%rbp)
	movl	-48(%rbp), %ecx
	movl	%ecx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	addl	%eax, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -48(%rbp)
	movl	-12(%rbp), %edx
	movl	-48(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
	movl	-84(%rbp), %eax
	movslq	%eax, %rdx
	imulq	$1717986919, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$2, %edx
	sarl	$31, %eax
	subl	%eax, %edx
	movslq	%edx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %ecx
	sarl	$2, %ecx
	movl	%edx, %eax
	sarl	$31, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, -44(%rbp)
	movl	-44(%rbp), %ecx
	movl	%ecx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	addl	%eax, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -44(%rbp)
	movl	-8(%rbp), %edx
	movl	-44(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-84(%rbp), %edx
	movslq	%edx, %rax
	imulq	$1717986919, %rax, %rax
	shrq	$32, %rax
	movl	%eax, %ecx
	sarl	$2, %ecx
	movl	%edx, %eax
	sarl	$31, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	addl	%eax, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -40(%rbp)
	cmpl	$0, -84(%rbp)
	jns	.L2
	movl	$45, %edi
	call	_putchar@PLT
	negl	-76(%rbp)
	negl	-72(%rbp)
	negl	-68(%rbp)
	negl	-64(%rbp)
	negl	-60(%rbp)
	negl	-56(%rbp)
	negl	-52(%rbp)
	negl	-48(%rbp)
	negl	-44(%rbp)
	negl	-40(%rbp)
.L2:
	cmpl	$0, -36(%rbp)
	je	.L3
	movl	-76(%rbp), %eax
	addl	$48, %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
.L3:
	cmpl	$0, -32(%rbp)
	je	.L4
	movl	-72(%rbp), %eax
	addl	$48, %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
.L4:
	cmpl	$0, -28(%rbp)
	je	.L5
	movl	-68(%rbp), %eax
	addl	$48, %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
.L5:
	cmpl	$0, -24(%rbp)
	je	.L6
	movl	-64(%rbp), %eax
	addl	$48, %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
.L6:
	cmpl	$0, -20(%rbp)
	je	.L7
	movl	-60(%rbp), %eax
	addl	$48, %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
.L7:
	cmpl	$0, -16(%rbp)
	je	.L8
	movl	-56(%rbp), %eax
	addl	$48, %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
.L8:
	cmpl	$0, -12(%rbp)
	je	.L9
	movl	-52(%rbp), %eax
	addl	$48, %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
.L9:
	cmpl	$0, -8(%rbp)
	je	.L10
	movl	-48(%rbp), %eax
	addl	$48, %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
.L10:
	cmpl	$0, -4(%rbp)
	je	.L11
	movl	-44(%rbp), %eax
	addl	$48, %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
.L11:
	movl	-40(%rbp), %eax
	addl	$48, %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	print_number, .-print_number
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
