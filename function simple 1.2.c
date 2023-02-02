#include<stdio.h>
float sum ();
void main()
   {
    sum();
    sum();
   }
float sum()
{
   float a,b,s=0;
   printf("enter two no.");
   scanf("%f%f",&a,&b);
   s=a+b;
   printf("sum =%f\n",s);
}

