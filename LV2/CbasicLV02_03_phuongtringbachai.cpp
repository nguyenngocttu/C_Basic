#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,d,x1,x2;
	printf("nhap 3 he so : a-b-c : cua phuong trinh");
	scanf("  %f %f %f",&a,&b,&c);
if(a>0||a<0)
  {
  	d=b*b-4*a*c;
  if(d<0)
 printf("phuong trinh vo nghiem");
   if(d==0)
   {
  	x1=-(b/(2*a));
  	printf("phuong trinh co nghiem kep la %f",x1);
   }
   if(d>0)
   {
   x1=(-b+sqrt(d))/(2*a);
   x2=(-b-sqrt(d))/(2*a);
   printf("phuong trinh co 2 nghiem la %.2f va %.2f",x1,x2);}
if(a==0){{ x1=-c/b;
   printf("ham so co 1 nghiem la %.1f",x1);}
 }}}
   	
