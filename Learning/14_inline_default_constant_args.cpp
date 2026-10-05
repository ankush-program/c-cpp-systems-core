#include <iostream>

inline int sum(int a, int b){

    // Not to use static variable in inline function

    // WARNING: if this is an inline function in a header, every .c file gets its own
    // seperate clone of "counter". These Files will NOT share the same counter.
    // static variables made to share the same, but inline function abdons this.

    // C++ forces all files to share the exact same static variable. But, it adds a
    // hidden safety lock to this static variable to prevent crashes. This lock runs 
    // every time, destroying the spped benefit of inline function
    return a + b;
}

int loop(){
    static int a = 0;
    
    // static variable only initializes once in the whole program during first function call
    // then in next function calls, this initialization disregarded.
    // static exists even the function call ends

    a++;
    return a;
}

void func(const int a, const int *p){
    // constant arguments -->
    // used to tell the compiler not to change a variable, object during program execution
    // const keyword is used to make constant arguments

    // a++;             // ERROR
}

void interest(int money, float interest = 1.01){
    // 1.01 is a default argument for interest
    // if no value provided, then default value is used

    std::cout << "money*interest: " << money*interest << '\n';
}

int main(){
    // inline function --> compiler replaces the function calls with the function body
    
    std::cout << sum(3,5) << '\n';
    // this increases performance and reduces memory usage as no need to go 
    // back and forth in functions
    
    // However, if inline keyword is used, then this is a compiler choice to 
    // make a function inline or not but if the inline function is complex,
    // or using loops, complex algorithms, switch, static variable. then, 
    // compiler may decide to not make a function inline even if using inline keyword

    // if the code inside an inline function is large or many function calls to it,
    // then replacing the function calls with the function body makes the 
    // performance and memory even worse


    // static variables -->
    std::cout << loop() << '\n';
    std::cout << loop() << '\n';
    std::cout << loop() << '\n';
    std::cout << loop() << '\n';
    std::cout << loop() << '\n';


    // default arguments -->
    interest(10000);
    interest(10000, 1.2);


    // constant arguments -->
    int a = 1, *p = &a;
    func(a,p);


    return 0;
}