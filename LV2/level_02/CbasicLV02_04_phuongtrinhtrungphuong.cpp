#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,d,x1,x2,y1,y2;
	printf("nhap 3 he so : a-b-c : cua phuong trinh");
	scanf("  %f %f %f",&a,&b,&c);
	
					if(a>0||a<0)//dieu kien tong//
					  {
					  	d=b*b-4*a*c;
					/////////////////////
					  if(d<0)//dieu kien 1
					
					 /////////////////////////
					 printf("phuong trinh vo nghiem");
					   if(d==0)
					   	{
					  	x1=-(b/(2*a));
					  		if(x1<0)printf("phuong trinh vo nghiem");
					  		else {y1=sqrt(x1);
					  		       y2=-sqrt(x1);
							  printf("phuong trinh co nghiem la -%f va %f",y2,y1);
							     }
							  
					   	}
					////////////////////////////
					   if(d>0) //dieu kien 2
				
					   {
					   x1=(-b+sqrt(d))/(2*a);
					   x2=(-b-sqrt(d))/(2*a);
					     //?
						 if (x1<0&&x2<0) printf("phuong trinh vo nghiem") ;
					     ////////////////
						 if(x2<0)//{dieu kien2.1
						 {
						 y1=sqrt(x1);
					  		       y2=-sqrt(x1);
							  printf("phuong trinh co nghiem la -%f va %f",y2,y1);
						 }
						 ///////////////////////////////////////////////////////
						 if(x1<0)//{dieu kien2.2
						 {
						 y1=sqrt(x2);
					  		       y2=-sqrt(x2);
							  printf("phuong trinh co nghiem la -%f va %f",y2,y1);
					 
					   }
					///////////////////////////////////////////////////
					   if (x1>0&&x2>0)
					   {
					   	y1=sqrt(x1);
					   	y2=sqrt(x2);
					   	x1=-y1;
					   	x2=-y2;
					   	printf("phuong trinh co 4 nghiem la %f  %f  %f  %f",y1,y2,x1,x2);
					   	}
					 }  
					/////////////////////////////////////////////////////////////////   
					if(a==0)
					
					{
					           
							   x1=-c/b;
					        if(x1<0)printf("phuong trinh vo nghiem");
					  		else 
							{
							  y1=sqrt(x1);
					  		       y2=-sqrt(x1);
							  printf("phuong trinh co nghiem la -%f va %f",y2,y1);
							}
							   
 					}
 					///////////////////////////////
					 }
 }
