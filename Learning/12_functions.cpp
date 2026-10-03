#include <iostream>

void foo(){
    printf("in foo()\n");
}
char goo();         // function declaration(or prototype)

int sum(int a, int b){
    // Here a,b are called function parameters(or formal parameters)
    return a+b;
}

int main(){
    foo();

    std::cout << goo() << "\n\n";
    // compiler not know what goo() from beginning to till as goo() defineed below, so function prototype needed
    printf("%c\n",goo());

    // Actual parameters(or function arguments) --> which are passed in the function
    std::cout<< sum(1,4);       // Here 1,4 are actual parameters(or function arguments)

    return 0;
}

char goo(){
    printf("in goo()\n");
    return 'c';
}
