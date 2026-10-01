#include <stdio.h>

int main(){
    printf("Enter an integer: ");
    int num;
    scanf("%d",&num);
    
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= (num - i) + 1; j++){
            printf("%d",i);
        }
        printf("\n");
    }
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= (num - i) + 1; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}