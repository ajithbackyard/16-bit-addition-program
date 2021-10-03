#includecreg51.h> 
void main () 
{
	unsigned char xdata *ptr=0x1000;
	unsigned char xdata *ptr1=0x1001; 
	unsigned long a,b;
	unsigned c;
	a=*ptr1*256+*ptr;
	ptr+=2;
	ptr1+=2;
	b=*ptr1*256+*ptr;
	c=a+b;
	ptr1++;
	*ptr1=c;
	c/=256;
	*(++ptr1)=c;
	c/=256;
	*(++ptr1)=c;
}