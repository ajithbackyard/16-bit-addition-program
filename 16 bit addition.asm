org 00h
	mov dptr,#4000h		//1st number msb
	movx a,@dptr
	mov r0,a			//1st number msb reg
	inc dptr			//1st number lsb
	movx a,@dptr
	mov r1,a			//1st number lsb reg
	mov dptr,#4010h		//2st number msb
	movx a,@dptr
	mov r2,a			//2st number msb reg
	inc dptr			//2st number lsb
	movx a,@dptr
	
	add a,r1			//lsb addition
	mov r1,a
	
	mov a,r0
	addc a,r2			//msb addition
	mov r0,a
	
	mov dptr,#4020h 	//result msb
	mov a,r2
	movx @dptr,a
	mov dptr,#4021h 
	mov a,r0
	movx @dptr,a
	mov dptr,#4022h 	//result lsb
	mov a,r1
	movx @dptr,a
end