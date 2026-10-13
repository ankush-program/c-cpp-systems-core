#include <stdio.h>

int main(){

    char ch;
    scanf("%c",&ch);
    
    char s[50];
    scanf("\n%[^\n]%*c",s);     // first inputting the leftover newlines in the buffer, so string reads perfectly   
    
    char sen[50];
    scanf("\n%[^\n]%*c",sen);
    
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}