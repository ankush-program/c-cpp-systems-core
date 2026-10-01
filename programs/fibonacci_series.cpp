#include <stdio.h>

int main(){
    printf("Enter an number: ");
    int num;
    scanf("%d",&num);

    printf("Fibonacci series upto %d numbers:\n", num);

    int num1 = 0, num2 = 1;
    for(int i = 1; i <= num; i++){
        printf("%d ",num1);
        num2 += num1;
        num1 = num2 - num1;
    }

    return 0;
}