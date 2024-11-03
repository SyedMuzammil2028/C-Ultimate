#include <stdio.h>
int main() {
char ch;
printf(" Enter alphabet to check upper or lower case=");
scanf("%c",&ch);
printf("ASCI Value of character = %d",ch);
if(ch>='A'&&ch<='Z')
{
printf("\n Upper case ");
}
else if(ch>='a'&&ch<='z')
{
printf("\n lower case ");
}
else
{
printf("\n invalid alphabat");
}
}