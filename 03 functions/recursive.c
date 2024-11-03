#include<stdio.h>
void HW(int count); 
int main()
{
  HW(5);
  return 0;
}
// Recursive Function
void HW(int count)
{
    if(count==0)
    {
        return ;
    }
    printf("Heloo world\n");
    HW(count-1);  
      
}