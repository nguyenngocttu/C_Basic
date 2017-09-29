#include <stdio.h>;
 main()
{ 
float a;
int b;
printf(" nhap vao so can xet\n");
scanf("%f",&a);
b=a*10;
if (b%5==0&&b%2>0)
printf("so %.1f la so ban nguyen",a);
else printf("so %.1f la so khong ban nguyen",a);

}
