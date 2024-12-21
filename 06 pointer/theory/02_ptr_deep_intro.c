#include <stdio.h>

int main()
{
    int a = 10;
    // method of decleration of pointer
    int *p;
    // p containing the address of a
    p = &a;
     
    // hence another method of pointer declaration
    // variable ptr is decleared as pointer hence containing the address of a 
    int* ptr = &a; 
    // or 
    int *point = &a; // mostly used format
    // hence both have same meaning

    // prints the value of a
    printf("Value of a: %d\n", a);

    // prints the address of a
    printf("Address of a: %d\n\n", &a);

    // prints the value of p which contains the address of a
    printf("Value of p (Address of 'a' stored):%d\n", p);
    printf("Value of ptr (Address of 'a' stored): %d\n\n", ptr);

    // using %p as format specifier to print the hexadecimal address
    printf("Address of a: %p\n", &a);
    printf("Value of p (Address of 'a' stored): %p\n", p);
    printf("Value of ptr (Address of 'a' stored): %p\n\n", ptr);

    // using %u as format specifier to print the readable address
    printf("Address of a: %u\n", &a);
    printf("Value of p (Address of 'a' stored): %u\n", p);
    printf("Value of ptr (Address of 'a' stored): %u\n\n", ptr);

    // prints the address of p, ptr 
    printf("Address of p: %u\n", &p);
    printf("Address of ptr: %u\n\n", &ptr);

    // prints the value at the address stored in p
    printf("Output the value of a\n");
    printf("Value at the address stored in p: %d\n", *p);
    printf("Value at the address stored in ptr: %d\n", *ptr);
    printf("Value at the address stored in point: %d\n", *point);
    
    // here & is used to get the address of 'a' which is then assigned to 
    // p, ptr, point and then * is used to get the value at that address
    return 0;
}