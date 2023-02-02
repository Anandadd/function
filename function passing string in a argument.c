#include<stdio.h>
void modify(char[],char[]);
void main()
{
    char str1[]="jenny";
    char str2[]="khatri";
    modify(str1,str2);
}
void modify(char str1[],char str2[])
{
    int l=0,i;
    for(i=0;str1[i]!='\0';i++)
    {
        l=l+1;
    }
    str2[1]='z';
    printf("length of string1 is %d\n",l);
    printf("both the string are %s %s",str1,str2);
}
