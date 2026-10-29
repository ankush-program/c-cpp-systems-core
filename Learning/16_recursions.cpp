#include <iostream>

int fact(int a){
    if (a>1) return a*fact(a-1);
    else return 1;
}
int fab(int n){
	static int a = 0,b = 1;
	printf("%d ",a);
	a = a + b;
	b = a - b;
	if (n>1) return fab(n-1);
	else return 1;
}

int main(){
    std::cout << "Enter an integer: ";
    int a;
    std::cin >> a;
    std::cout << "Factorial of "<<a<<" is: "<<fact(a)<<"\n";

    std::cout << "Fabonacci series upto "<<a<<" terms:\n";
	fab(a);
    return 0;
}