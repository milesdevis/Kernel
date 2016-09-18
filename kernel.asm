;;kernel.asm
bits 32
section .text
	align 4
	dd 0x1BADB002
	dd 0x00
	dd - (0x1BADB002 + 0x00)
	
global start
extern main

start:
  	cli		;blocks interrupts
	mov esp, stack_space	; set the stack pointer
	call main
	hlt		;halt CPU

section .bss
resb 8192   ;8KB
stack_space:
