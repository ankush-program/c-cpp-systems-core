#include <iostream>

void foo(){
    printf("in foo()\n");
}
char goo();         // Function Declaration(or prototype)

// Function Definition (Declaring along with defining its contents)
int sum(int a, int b){
    // Here a,b are called function parameters(or formal parameters)
    return a+b;
}

// So, Function Definition is also a Function Declaration.

int sum(int a,int b,int c){
    return a+b+c;
}

float sum(float a,double b){
    return a+b;
}

int main(){
    foo();

    std::cout << goo() << "\n\n";
    // compiler not know what goo() from beginning to till as goo() defineed below, so function prototype needed
    printf("%c\n",goo());

    // Actual parameters(or function arguments) --> which are passed in the function
    std::cout<< sum(1,4);       // Here 1,4 are actual parameters(or function arguments)


    // Function Overloading (Two or more functions with same name, but different in arguments)
    std::cout << sum(2,3)<<"\n";
    std::cout << sum(2,3,4)<<"\n";
    std::cout << sum(2.9f,3.2)<<"\n";

    return 0;
}

char goo(){
    printf("in goo()\n");
    return 'c';
}
