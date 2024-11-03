#include<stdio.h>
int main()
{
char x;
printf(" enter char = ");
scanf("%s",&x);
switch (x)
{
case 'm': printf(" Monday ");
    break;
    case 't': printf(" Tuesday ");
    break;
    case 'w': printf(" Wednesday ");
    break;
    case 'T': printf(" Thursday ");
    break;
    case 'f': printf(" Friday ");
    break;
    case 's': printf(" Saturday ");
    break;
    case 'S': printf(" Sunday ");
    break;
default: printf(" Invalid day ");
    break;
    }
return 0;
}