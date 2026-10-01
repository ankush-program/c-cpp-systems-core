#include <iostream>

int main(){
    int num = 0;
    printf("Enter a number: ");
    scanf("%d",&num);

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num - i; j++){
            std::cout << ' ';
        }
        std::cout << '*';
        for(int j = 1; j <= 2*(i-1) - 1; j++){
            std::cout << ' ';
        }
        if(i > 1) std::cout << '*';
        std::cout << '\n';
    }
    for(int i = 2; i <= num; i++){
        for(int j = 1; j < i; j++){
            std::cout << ' ';
        }
        std::cout << '*';
        for(int j = 1; j <= 2*(num - i) - 1; j++){
            std::cout << ' ';
        }
        if(i < num) std::cout << '*';
        std::cout << '\n';
    }
    return 0;
}