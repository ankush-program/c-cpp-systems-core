#include <iostream>
#include <string>

struct employee{
    int age;
    std::string name;
    int salary;
};

typedef struct{ int age; int standard; } st;    //using typedef to use shorter name

union data{
    int num;
    char ch;
};

enum status{
    PENDING,        // 0 by default
    COMPLETED,      // 1
    OK = 400,       // 400
    ERROR           // 401
};

int main(){
    // ------ struct ---->
    // is a user defined datatype that groups different related datatypes under a single name
    // size of struct = sum of size of its all members
    // all members active at a time

    struct employee em1 = { 18, "Hi", 1000000};        // sequential initialisation
    // or -->   employee em1;       //in cpp(not in c)
    // or -->   employee em1 = { .age = 18, .name = "Hi", .salary =1000000};    //Designated Initialization
    // or -->   struct employee em1 = {em1.age = 18, em1.name = "Hi", em1.salary =1000000};

    em1.age = 19;    // Assignment
    em1.salary = 1000000;

    std::cout <<"Enter name: ";
    std::cin >> em1.name;

    std::cout << em1.age << ' '<< em1.name << ' ' << em1.salary<< '\n';    // Outputing


    // ------ union ---->
    // is a user defined datatype which allows us store different datatypes in same memory location
    // size of union = size of its largest member
    // only one member active at a time

    union data m1;        // or -->   data m1;  //in cpp(not in c)
    m1.num = 39;
    std::cout << m1.num<< ' ';
    m1.ch = 'c';
    std::cout << m1.ch<< ' ' << m1.num<< ' ';       // Undefined behaviour: m1.num was overwritten by m1.ch


    // ------ enums ---->
    // user defined datatype used to assign meaningful,readable names to integer constants

    enum status work = PENDING;        // or -->  status work = PENDING; in cpp(not in c)
    // Here, implicitly conversion to int

    // such implicit conversion to/from int --> in c
    // in cpp, only implicit conversion to int

    // enum status wsork = 1;          // in c (not in cpp)
    std::cout << work;
    return 0;
}