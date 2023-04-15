	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 13, 0	sdk_version 13, 3
	.globl	_caller                         ; -- Begin function caller
	.p2align	2
_caller:                                ; @caller
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	stur	w0, [x29, #-4]
	str	w1, [sp, #8]
	ldur	w8, [x29, #-4]
	ldr	w9, [sp, #8]
	add	w0, w8, w9
	bl	_callee
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
                                        ; -- End function
	.globl	_callee                         ; -- Begin function callee
	.p2align	2
_callee:                                ; @callee
; %bb.0:
	sub	sp, sp, #16
	str	w0, [sp, #12]
	ldr	w8, [sp, #12]
	add	w0, w8, #1
	add	sp, sp, #16
	ret
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	stur	wzr, [x29, #-4]
	mov	w8, #1
	str	w8, [sp, #8]
	ldr	w8, [sp, #8]
	subs	w8, w8, #1
	cset	w8, ne
	tbnz	w8, #0, LBB2_2
	b	LBB2_1
LBB2_1:
	ldr	w0, [sp, #8]
	mov	w1, #1
	bl	_caller
	b	LBB2_3
LBB2_2:
	ldr	w0, [sp, #8]
	mov	w1, #2
	bl	_caller
	b	LBB2_3
LBB2_3:
	mov	w0, #0
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
                                        ; -- End function
.subsections_via_symbols
