#include<stdio.h>
int sum(int,int);
void main()
{
    int x,y,c;
    printf("enter two no.");
    scanf("%d%d",&x,&y);
    c=sum(x,y);
    printf("sum=%d",c);
}
 int sum(int a,int b)
{
    int s=0;
    s=a+b;
    return s;
}
