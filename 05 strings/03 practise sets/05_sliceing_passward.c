#include <stdio.h>
#include <string.h>
// program to slice the passward
void slice(char arr[],int n, int m);
int main()
{
    int n=2,m=4;
    char password[100];        
    printf("Enter password: ");
    scanf("%s", password);  
    
    slice( password,n,m);

}
void slice(char arr[],int n, int m){
    int j=0;
    char newpassword[100];
    for (int  i = n; i < m; i++,j++)
    {
        newpassword[j]=arr[i];
    }
    newpassword[j]='\0';
    puts(newpassword);
}