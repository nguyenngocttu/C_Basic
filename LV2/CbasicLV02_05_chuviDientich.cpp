#include<stdio.h>
#include<math.h>
main ()
{ float a,b,c,d,P,Cv,S,p; 
P=3.14159265358979;
printf(" nhap 1 de tinh chu vu va dien tich tam giac\n");
printf("nhap 2 de tinh chu vi va dien tich hinh vuong\n");
printf("nhap 3 de tinh chu vi va dien tich hinh chu nhat\n");
printf("nhap 4 de tinh chu vi va dien tich hinh tron \n");
scanf("%f",&a);
	
 //chu vi dien tich hinh tam giac
 if (a==1)
   { 
   printf("nhap chieu dai 3 canh tam giac");
  scanf("%f%f%f",&b,&c,&d);
    if (b+c>d&&b+d>c&&d+c>b)
    {Cv=b+c+d;
     p=(a+b+c)/2;
     S=sqrt((p-b)*(p-c)*(p-d));
     printf("chu vi cua hinh tam giac la %f\n dien tich hinh chu nhat %f",Cv,S);
    }
    else printf("ba so da nhap k phai la ba canh cua tam giac");
    } 
  //chu vi dien tich hinh vuong
 if ( a==2)
  {
  printf("nhap do dai canh hinh vuong");
  scanf("%f",&b);
  Cv=b*4;
  S=b*b;
  printf("dien tich hinh vuong la %f\n chu vi hinh vuong la %f ",S,Cv);
  }
 // chu vi dien tich hinh chu nhat
 if(a==3)
  {
  printf("nhap do dai hinh chu nhat \n ");
  scanf("%f",&b);
  printf("nhap chieu rong hinh chu nhat\n");
  scanf("%f",&c);
  printf("chu vi hinh chu nhat la %f\n dien tich hinh chu nhat la %f",(b+c)*2,b*c);
  }	
 // chu vi dien tich hinh tron
 if (a==4)
 {
 printf("nhap ban kinh hinh trong") ;
 scanf("%f",b);
 printf("chu vi hinh tron la %f\n dien tich hinh tron la %f\n",2*P*b,P*b*b);
 }
}  
