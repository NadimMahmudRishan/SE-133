#include<stdio.h>
#include<string.h>

int main()
{
char str1 [12]="Hello";
char str2 [12]="World";
char str3 [12];
int len;
int result;
char ch;

strcpy(str3,str1);
printf("strcpy(str3,str1) :%s\n",str3);

strcpy(str1,str2);
printf("strcpy(str1,str2) :%s\n",str1);

len = strlen(str1);
printf(" strlen(str1) : %d \n",len);

result = strcmp(str1,str2);
printf("strcmp(str1,str2) :%d\n",result);

printf("string after %d\n",strchr(str1,'1'));

printf("%s",strstr("Hello","World"));


 return 0;
}