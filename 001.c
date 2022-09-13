#include<stdio.h>
#include<string.h>

int main()
{
 char str1[50];
 int len;

 printf("Input a string :");
 scanf("%s",str1);

 len = strlen(str1);

 printf("strlen(str1) : %d \n", len);

 return 0;
}