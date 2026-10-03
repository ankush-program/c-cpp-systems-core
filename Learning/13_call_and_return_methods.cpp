#include <iostream>

void swap(int x, int y){        //This function only swap function parameters
    x = x + y;
    y = x - y;
    x = x - y;
}

void swapPtr(int*a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void swapPtrRefVar(int &x,int &y){
    x = x + y;
    y = x - y;
    x = x - y;
}

int sum(int a, int b){
    return a + b;
}

int *sumPtr(int *a, int* b){
   *a = *a +*b;
    return a;
}

int &sumRefVar(int&a, int &b){
    int &c = a;
    c = a+b;    // changing reference of c to a+b, this also changes a (initialization reference) to a+b
    return c;
}
int main(){
    int a = 3, b =5;
    std::cout <<"value of a = "<< a <<", value of b = "<< b <<'\n';

    // Call by value
    swap(a,b);
    printf("value of a = %d, value of b = %d\n",a,b);

    // Call by reference using pointers
    int* x = &a, *y = &b;
    swapPtr(x,y);
    std::cout <<"value of a = "<< a <<", value of b = "<< b <<'\n';

    // Call by reference using reference variable
    int &c = a, &d = b;
    swapPtrRefVar(c,d);
    printf("value of a = %d, value of b = %d\n",a,b);

    // Return by value
    std::cout<< "sum of "<<a<<" + "<<b<<" = "<<sum(a,b)<<'\n';
    printf("value of a = %d, value of b = %d\n",a,b);

    // Return by reference using pointers
    int *e =&b;
    std::cout<<*sumPtr(&a,e)<<'\n';

    // Return by reference using reference variable
    printf("%d\n",sumRefVar(c,d));
    printf("value of a = %d, value of b = %d\n",a,b);

    sumRefVar(a,b) = 100;       // This assigns 100 to a
    printf("value of a = %d, value of b = %d",a,b);

    return 0;
}