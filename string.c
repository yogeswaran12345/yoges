#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char a[100];
printf("enter a string\n");
gets(a);
strrev(a);
printf("reverse string is %s",a);
return 0;
}

