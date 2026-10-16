#include <iostream>

int fact(int a){
    if (a>1) return a*fact(a-1);
    else return 1;
}
int main(){
    std::cout << "Enter an integer: ";
    int a;
    std::cin >> a;
    std::cout << "Factorial of "<<a<<"is: "<<fact(a);

    return 0;
}