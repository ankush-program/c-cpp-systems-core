#include <iostream>
#include <iomanip>

// ------------------PREPROCESSOR MACROS------------------
// Evaluated before compilation. Lacks type safety. Used heavily in C, 
#define PI 3.14             // Object-like Macros(Constants)
#define SQUARE(x) (x*x)     // Function-like Macros
#define STRINGIFY(x) #x     //Convert the input to string

// --------------------- CONSTEXPR (C++11/14) ------------------------
// Evaluated at compile-time if inputs are known at compile-time.
constexpr double PI_CONSTEXPR = 3.14;

constexpr int square(int x) {
    return x * x;
}

int main(){
    //------------------------CONSTANTS------------------------
    // Constants are fixed values which cannot be changed
    const int a = 8;
    // a = 7;       //Error: const variable's value cannot be changed

    // We can make constants with #define also, but then the preprocessor only replace the identifier with the value provided
    std::cout << PI << std::endl;

    // Similarly, we can define functions by #define method
    std::cout << SQUARE(4) <<'\n';
    std::cout << STRINGIFY(4+2);      //Output- 4+2

    //---------------------MANIPULATORS----------------------
    // Manipulators are special functions/objects designed to change the Input, Ouput formatting
    // Eg. endl, flush, boolalpha, left, right, hex,dec, oct    - present in std namespace in <iostream>
    //     setw(n), setfill(a), setprecision(n)                 - present in std namespace in <iomanip>

    std::cout << std::endl << std::flush;
    // flush - displays the remaining things present in the output buffer
    // endl - produces a newline along flushing the buffer

    // std::setw( ) only affects the very next item pushed to the stream only. after that item prints, the width rests back to 0
    std::cout << "Size of int: " << std::setw(10) << sizeof(int) ;
    
    //---------------------LITERAL CONSTANTS & SUFFIXES----------------------
    42U;           // 'U' or 'u' - unsigned
    long long int c = 42LL;        // 'LL' or 'll'
    unsigned long long d = 42ULL;

    float e = 3.14f;                // 'f' or 'F' (Without it, it's a double)
    long double f = 3.14L;         // 'L' or 'l'

    std::cout << "Constexpr PI: " << PI_CONSTEXPR << "\n\n";

    std::cout << "Constexpr square(5): " << square(5);
    return 0;
}