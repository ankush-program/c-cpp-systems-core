#include <stdio.h>

int main(){

    char ch;
    scanf("%c",&ch);    // %c --> char

    char s1[50];
    scanf("\n");        // first inputting the leftover newlines in the buffer, so string reads perfectly   
    scanf("%s",s1);     // %s --> string

    char s2[50];
    scanf("\n");
    scanf("%[^\n]",s2);

    // [...] --> scanset(scanf consumes chars that match the criteria inside it)
    // ^ --> negation operator
    // [^\n] --> consumes chars other than \n(it will stop at \n,leaving \n in input buffer)

    char s3[50];
    scanf("\n%49[^\n]",s3);     // 49 --> read 49 chars

    char s4[50];
    scanf("\n%[^\n]%*c",s4);
    // * --> tells scanf to read data from input stream,but discard it
    // %*c --> read and discard 1 char from input stream

    printf("%c\n%s\n%s\n%s\n%s",ch,s1,s2,s3,s4);
    return 0;
}