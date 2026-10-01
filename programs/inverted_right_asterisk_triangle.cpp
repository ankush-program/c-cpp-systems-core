#include <stdio.h>

int main(){
    printf("Enter an integer: ");
    int num;
    scanf("%d",&num);
    
    for(int i =1; i<= num; i++){
        for(int j =0; j<= (num-i); j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}