#include <iostream>
#define M1      // change to M2 for second left_asterisk_triangle pattern

int main(){
    std::cout << "Enter an integer: ";
    int num;
    std::cin >> num;
    
    #ifdef M1
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= (num - i); j++){
            std::cout << ' ';
        }
        for(int j = 1; j <= i; j++){
            std::cout << "*";
        }
        std::cout << "\n";
    }
    #endif

    #ifdef M2
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= 2*(num-i); j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    #endif

    return 0;
}