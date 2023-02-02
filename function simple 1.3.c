/*#include<stdio.h>
char fun();
void main()
{
    fun();
}
char fun()
{
    char c,ch;
    printf("enter a character");
    scanf("%c",&c);
    ch=c;
    printf("ch=%c",ch);
}*/




/*#include<stdio.h>
char fun();
void main()
{
    char ch;
    ch=fun();
    printf("ch =%c",ch);
}
char fun()
{
    char c;
    printf("enter character");
    scanf("%c",&c);
    return 'c';
}*/

#include<stdio.h>
char fun();
void main()
{
    char ch;
    ch=fun();
    printf("ch =%c",ch);
}
char fun()
{
    char c;
    printf("enter character");
    scanf("%c",&c);
    return c;

}
