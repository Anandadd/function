#include<stdio.h>
const char*display();
void main()
{
    const char*str;
    str=display();
    printf("string is %s",str);
}
const char* display()
{
    const char*str="jenny";
    return str;
}
