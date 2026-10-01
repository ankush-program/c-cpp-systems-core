#include <stdio.h>
#define M1      // change to M2 for second pattern

int main(){
    printf("Enter an integer: ");
    int num;
    scanf("%d",&num);
    
    #ifdef M1
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
           printf("  ");
        }
        for(int j = 0; j <= num-i; j++){
           printf("* ");
        }
        printf("\n");
    }
    #endif

    #ifdef M2
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
           printf(" ");
        }
        for(int j = 0; j <= num-i; j++){
           printf("*");
        }
        printf("\n");
    }
    #endif

    return 0;
}