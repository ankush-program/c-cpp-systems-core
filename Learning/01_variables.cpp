#include <iostream>

// ----------------GLOBAL VARIABLES-----------------
// Declared outside of any function, can be accessed and modified by any function.
// Global variables have Global scope
int var{11};

//global and local variables can have same name in a program.but,then, precedence will be given to local variable.

void func(){
    std::cout << var << '\n';       // Outputting Global variable
    var++;              // Modifying the global variable directly.

    int var{23};        // Local variable in func Function
    std::cout << var << '\n';       //Local variable has more precedence than global variable
}

// ----------------Extern Variable-----------------
// It Tells the compiler this variable is defined in another file.
// using it requires this variable to exist somewhere. 
// Compiler will not allocate memory for it if it only declared here.
// if initialization also here, then it becomes a normal variable, Compiler allocate memory for it
extern int externalVariable;


int main(){
    // ----------------DECLARATION AND DEFINITION-----------------
        int a;              // Declaration: Declaring that a variable exists.
        a = 10;             // Initialization: Assigning a value for the first time.
        int b = 1;          // Declaration and Initialization together

        int x = 5, y = 10, z;       // Multiple variables of the same type can be declared on one line
        z = x + y;

    // ----------------GLOBAL VARIABLES-----------------
        std::cout << var << '\n';
        func();

        std::cout << var << std::endl;
    
        //'\n' only prints newline. endl prints newline along with flushing input buffer

        int var{9};    // Local variable in func Function
        std::cout << var << '\n';   //Local variable has more precedence than global variable

        //To use global varaible even in the presence of local variable, use ::(scope resolution operator)
        std::cout << ::var;

    // ----------------BLOCK SCOPE-----------------
        // Variables declared inside a block { } only exist inside that block.
        {
            int y = 50;
            printf("y = %d\n", y);
        } // 'y' is destroyed right here!
        // printf("%d", y); // ERROR: 'y' is undeclared here!
  
    return 0;
}