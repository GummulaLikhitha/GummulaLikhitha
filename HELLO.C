#include<stdio.h>
#include<conio.h>
int main()
{
char str[15]={'H','e','l','l','o',',','w','o','r','l','d'};
int i;
printf("\n the actualstring is %s",str);
printf("\n the string ofter XOR each character with 0 is");
for(i=0;i<11;i++)
printf("%c",str[i]^0);
return 0;
}