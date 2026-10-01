#include <cstdio>
#define M1      // change to M2 for second pattern

int main(){
    #ifdef M1
    printf("Enter an integer: ");
    int num;
    scanf("%d",&num);
    
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    #endif

    #ifdef M2
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    #endif
    return 0;
}