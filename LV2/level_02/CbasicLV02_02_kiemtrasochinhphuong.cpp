#include<stdio.h>
#include<math.h>
main()
{
	float a;
	int b;
printf("nhap vao so can xet");
scanf("%f",&a);
b=sqrt(a);
if (b*b==a)
	printf("so %f la so chinh phuong cua %d  ",a,b);
else printf("so %f khong phai la so chinh phuong",a);}
