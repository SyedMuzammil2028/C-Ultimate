#include <stdio.h>
void method1() // using printf & scanf
{
    char words[3][20];
    printf("Enter 3 words:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", words[i]); // Reads a single word
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", words[i]);
    }
}

void method2() // using gets & puts
{
    char sentences[3][50];
    printf("Enter 3 sentences:\n");
    for (int i = 0; i < 3; i++)
    {
        gets(sentences[i]); // Not recommended
    }
    for (int i = 0; i < 3; i++)
    {
        puts(sentences[i]); // Automatically adds a newline 08 }
    }
}

void method3() // using fgets & fputs
{
    char sentences[3][50];
    printf("Enter 3 sentences:\n");
    for (int i = 0; i < 3; i++)
    {
        // Reads up to 49 characters + '\0'
        fgets(sentences[i], 50, stdin);
    }
    for (int i = 0; i < 3; i++)
    {
        fputs(sentences[i], stdout);
        fputs("\n", stdout); // Print newline after each string
    }
}

int main()
{
    method1();
    method2();
    method3();
    return 0;
}