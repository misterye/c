	.file	"ex10.c"
	.section	.rodata
.LC0:
	.string	"arg %d: %s\n"
.LC1:
	.string	"California"
.LC2:
	.string	"Oregon"
.LC3:
	.string	"Washington"
.LC4:
	.string	"Texas"
.LC5:
	.string	"state %d: %s\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movl	%edi, -52(%rbp)
	movq	%rsi, -64(%rbp)
	movl	$0, -40(%rbp)
	movl	$1, -40(%rbp)
	jmp	.L2
.L3:
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-64(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-40(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -40(%rbp)
.L2:
	movl	-40(%rbp), %eax
	cmpl	-52(%rbp), %eax
	jl	.L3
	movq	$.LC1, -32(%rbp)
	movq	$.LC2, -24(%rbp)
	movq	$.LC3, -16(%rbp)
	movq	$.LC4, -8(%rbp)
	movl	$4, -36(%rbp)
	movl	$0, -40(%rbp)
	jmp	.L4
.L5:
	movl	-40(%rbp), %eax
	cltq
	movq	-32(%rbp,%rax,8), %rdx
	movl	-40(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC5, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -40(%rbp)
.L4:
	movl	-40(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jl	.L5
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
