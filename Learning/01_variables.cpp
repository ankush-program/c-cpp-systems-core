#include <iostream>

/* --- 2. GLOBAL VARIABLES --- */
// Declared outside of any function. They can be accessed and modified 
// by any function in this file. Global variables have Global scope
int var{11};

//NOTE: global variable and local variable can have same name in a program.
//but in such case, precedence will be given to local variable.

void func(){
    // Outputting Global variable
    std::cout << var << '\n';

    // Modifying the global variable directly. 
    // This change will be visible to any other function that checks it.
    var++;

    // Local variable in func Function
    int var{23};

    //Local variable has more precedence than global variable
    std::cout << var << '\n';
}

/* --- 3. SCOPE --- */
void demonstrate_local_variables(int a){
    // Local variables have local scope
    // Local variables only exist inside the function where they are declared.
    a = 10;

    std::cout << a << '\n';
}


/* --- 5. Extern Variable --- */
// It Tells the compiler this variable is defined in another file.
// using it requires this variable to exist somewhere. 
// Compiler will not allocate memory for it if it only declared here.
// if initialization also here, then it becomes a normal variable, Compiler allocate memory for it
extern int externalVariable;


int main(){
    /* --- 1. DECLARATION AND DEFINITION --- */
        int a;              // Declaration: Declaring that a variable exists.
        a = 10;             // Initialization: Assigning a value for the first time.
        int b = 1;          // Declaration and Initialization together

        int x = 5, y = 10, z;       // Multiple variables of the same type can be declared on one line
        z = x + y;

    /* --- 2. GLOBAL VARIABLES --- */

        std::cout << var << '\n';
        func();

        std::cout << var << std::endl;
    
        //'\n' only prints newline. endl prints newline along with flushing input buffer

        int var{9};    // Local variable in func Function
        std::cout << var << '\n';   //Local variable has more precedence than global variable

        //To use global varaible even in the presence of local variable, use ::(scope resolution operator)
        std::cout << ::var;

    /* --- 3. SCOPE --- */
        // Calling external functions to show how variable "scope" works        
        demonstrate_local_variables(a);
        std::cout << a << '\n';

    /* --- 4. BLOCK SCOPE --- */
        int x = 10;

        if (x == 10) {
            // Variables declared inside a block { } only exist inside that block.
            int y = 50;
            printf("x = %d, y = %d\n", x, y);
        } // 'y' is destroyed right here!

        // printf("%d", y); // ERROR: 'y' is undeclared here!

    /* --- 5. Extern Variable --- */
        // above
        
    return 0;
}