#include <iostream>

int main(){
    // typedef --> used to create an alternate name(alias) for an existing data type
    // Syntax -->  
    // typedef <existig_data_type> <new_name>

    typedef int foo;
    // creates an alternate name "foo" for int datatype, which can be used in the code

    foo a = 9;
    std::cout << a;
    
    
    return 0;
}