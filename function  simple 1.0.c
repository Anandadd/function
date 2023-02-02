#include<stdio.h>
sum ()
{
    int a,b,sum=0;
    printf("enter two no.");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum =%d\n",sum);
}
main()
{
    sum();
    printf("hello\n");
    sum();
}
