#include <stdio.h>
#define M3      // change to M2,M1 for second left_asterisk_triangle pattern

int main(){
    printf("Enter an integer: ");
    int num;
    scanf("%d",&num);
    
    #ifdef M1
    for(int i = 1; i <= num ; i++){
        for(int j = 1; j <= num-i; j++){
            printf("  ");
        }
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        for(int j = 1; j < i; j++){
            printf("* ");
        }
        printf("\n");
    #endif
    
    #ifdef M2
    for(int i = 1; i <= num ; i++){
        for(int j = 1; j <= num-i; j++){
            printf("  ");
        }
        for(int j = 1; j <= 2*i-1; j++){
            printf("* ");
        }
        printf("\n");
    }
    #endif

    #ifdef M3
    for(int i = 1; i <= num ; i++){
        for(int j = 1; j <= num-i; j++){
            printf(" ");
        }
        for(int j = 1; j <= i-1; j++){
            printf("* ");
        }
        printf("\n");
    }
    #endif

    return 0;
}