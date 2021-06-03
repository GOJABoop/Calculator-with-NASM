BITS 64
section .data
oneNegative     dq -1.0
degreeConstant  dq 57.29578

section .bss
data 	resq 2

section .text

global sine:
sine:
    push rbp
    mov rbp, rsp

    movsd qword[rel data], xmm0
    fld qword[rel data]
    fsin

    fstp qword[rel data]
    movsd xmm0,[rel data]

    mov rsp, rbp
	pop rbp
	ret


global arcsin:
arcsin:
    push rbp
    mov rbp, rsp

    movsd qword[rel data], xmm0
    fld qword[rel data]
    fld1
    fpatan
    fstp qword[rel data]
    movsd xmm0, [rel data]
    
    mov rsp, rbp
	pop rbp
	ret


global cosine:
cosine:
    push rbp
    mov rbp, rsp

    movsd qword[rel data],xmm0
    fld qword[rel data]
    fcos
    
    fstp qword[rel data]
    movsd xmm0,[rel data]

    mov rsp, rbp
	pop rbp
	ret


global arccos:
arccos:
    push rbp
    mov rbp, rsp
    
    movsd qword[rel data], xmm0
    fld qword[rel data]
    fld1
    fpatan
    fstp qword[rel data]
    movsd xmm0, [rel data]

    mov rsp, rbp
	pop rbp
	ret


global tangent:
tangent:
    push rbp
    mov rbp, rsp
    
    movsd qword[rel data], xmm0
    fld qword[rel data]
    fsin
    fld qword[rel data]
    fcos
    fdiv
    fstp qword[rel data]
    movsd xmm0, [rel data]

    mov rsp, rbp
	pop rbp
	ret


global arctan:
arctan:
    push rbp
    mov rbp, rsp

    movsd qword[rel data],xmm0
    fld qword[rel data]
    fld1
    fpatan
    fstp qword[rel data]
    movsd xmm0, [rel data]
    
    mov rsp, rbp
	pop rbp
	ret

global squareRoot:
squareRoot:
    push rbp
    mov rbp, rsp

    movsd qword[rel data],xmm0
    fld qword[rel data]
    fsqrt
    fstp qword[rel data]
    movsd xmm0,[rel data]

    mov rsp, rbp
	pop rbp
	ret

global squarePow:
squarePow:
    push rbp
    mov rbp, rsp

    movsd qword[rel data],xmm0
    fld qword[rel data]
    fld qword[rel data]
    fmul
    fstp qword[rel data]
    movsd xmm0,[rel data]

    mov rsp, rbp
	pop rbp
	ret


global logarithm:
logarithm:
    push rbp
    mov rbp, rsp

    movsd qword[rel data],xmm0
    fld1
    fld qword[rel data]
    fyl2x
    fldl2t
    fdiv
    fstp qword[rel data]
    movsd xmm0,[rel data]

    mov rsp, rbp
	pop rbp
	ret


global antilogarithm:
antilogarithm:
    push rbp
    mov rbp, rsp

    movsd qword[rel data],xmm0
    fld qword[rel data]
    fldlg2
    fdiv
    fst qword[rel data]
    fld qword[rel data]
    frndint
    fst qword[rel data]
    fsub
    fld qword[rel data]
    fxch
    f2xm1
    fld1
    fadd
    fscale
    fstp qword[rel data]
    movsd xmm0,[rel data]

    mov rsp, rbp
	pop rbp
	ret

global addition:
addition:
    push rbp
    mov rbp, rsp

    movsd qword[rel data],xmm0
    fld qword[rel data]
    movsd qword[rel data],xmm1
    fld qword[rel data]
    fadd
    fstp qword[rel data]
    movsd xmm0,[rel data]

    mov rsp, rbp
	pop rbp
	ret

global substraction:
substraction:
    push rbp
    mov rbp, rsp

    movsd qword[rel data],xmm0
    fld qword[rel data]
    movsd qword[rel data],xmm1
    fld qword[rel data]
    fsub
    fstp qword[rel data]
    movsd xmm0,[rel data]

    mov rsp, rbp
	pop rbp
	ret


global multiplication:
multiplication:
    push rbp
    mov rbp, rsp

    movsd qword[rel data],xmm0
    fld qword[rel data]
    movsd qword[rel data],xmm1
    fld qword[rel data]
    fmul
    fstp qword[rel data]
    movsd xmm0,[rel data]

    mov rsp, rbp
	pop rbp
	ret

global division:
division:
    push rbp
    mov rbp, rsp

    movsd qword[rel data],xmm0
    fld qword[rel data]
    movsd qword[rel data],xmm1
    fld qword[rel data]
    fdiv
    fstp qword[rel data]
    movsd xmm0,[rel data]

    mov rsp, rbp
	pop rbp
	ret

global changeSign:
changeSign:
    push rbp
    mov rbp, rsp

    movsd qword[rel data],xmm0
    fld qword[rel data]
    fld qword[rel oneNegative]
    fmul
    fstp qword[rel data]
    movsd xmm0,[rel data]

    mov rsp, rbp
	pop rbp
	ret

global toDegree:
toDegree:
    push rbp
    mov rbp, rsp

    movsd qword[rel data],xmm0
    fld qword[rel data]
    fld qword[rel degreeConstant]
    fmul
    fstp qword[rel data]
    movsd xmm0,[rel data]

    mov rsp, rbp
	pop rbp
	ret


global toRadians:
toRadias:
    push rbp
    mov rbp, rsp

    movsd qword[rel data],xmm0
    fld qword[rel degreeConstant]
    fld qword[rel data]
    fdiv
    fstp qword[rel data]
    movsd xmm0,[rel data]

    mov rsp, rbp
	pop rbp
	ret
