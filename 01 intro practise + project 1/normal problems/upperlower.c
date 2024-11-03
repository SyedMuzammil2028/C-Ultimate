#include <stdio.h>
int main() {
char ch;
printf(" Enter alphabet to check upper or lower case=");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z')
{
printf(" Upper case ");
}
else if(ch>='a'&&ch<='z')
{
printf(" lower case ");
}
else
{
printf("\n invalid alphabat");
}
}