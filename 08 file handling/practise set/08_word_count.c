#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("char.txt", "a+");
    if(fp == NULL ) {
        printf("Error: cant open");
        exit(1);
    }
    
    char ch;
    int count= 0, w=1;
    
    while(1) {
        ch = fgetc(fp);
        
        if(ch==EOF){
            break;
        }    
        count++;
        if(ch==' ') {
            w++;
        }
    }
        
    printf("char = %d , word = %d",count,w);
    
    fclose(fp);
    
    return 0;
}