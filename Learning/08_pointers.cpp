#include <iostream>

void change(int* p){
    *p = 10;    //we can also change the value of a through dereferencing even in other function without having direct access of it
}
int main(){
    // Pointer is a variable which is used to store the address of other variable.
    int a = 0;
    std::cout<< a << '\n';
    std::cout<< &a << '\n';     // &a --> address of a

    int* p = &a;    // p is a pointer which holding the address of a and the address has data in int data type
    // * --> used to tell that its a pointer variable

    std::cout << p << '\n';     // p  --> stores the address of a

    // Dereferencing
    // *p --> accessing the value stored on the address( which is stored in pointer p)
    std::cout << *p << '\n';

    *p = 2;     // we can change the value of a by accessing it through dereferencing
    std::cout<< a << '\n';

    change(&a);
    std::cout<< a << '\n';

    int b = 8;

    //---Pointer to const (Value cannot be changed, pointer can)
    const int* ptr_to_const = &b; 
    ptr_to_const = &a; // OK
    // *ptr_to_const = 30; // ERROR: Read-only variable
    
    std::cout<< b << '\n';
    std::cout<< a << '\n';

    //---Const pointer (Pointer cannot be changed, value can)
    int* const const_ptr = &b;
    *const_ptr = 30;       // OK
    // const_ptr = &a; // ERROR: Read-only pointer

    std::cout<< b << '\n';

    //---Const pointer to const (Neither can be changed)
    const int* const fully_const = &b;

    std::cout<< b << '\n';
    
    // Poiner to Pointer
    int **po = &p;
    std::cout << "po = "<<po << '\n'        //address of pointer p
              <<"*po = "<<*po << '\n'       //address of a
              <<"**po = "<<**po <<'\n';     //a  ,Double dereferencing
    return 0;
}
