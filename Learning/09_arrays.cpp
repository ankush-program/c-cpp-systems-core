#include <iostream>

int main(){
    // Array is a collection of items of similar type stored in contiguous memory location.
    int arr[4] = {32,43,23,76};     // or int arr[] = {32,43,23,76}; --> as compiler knows the size by the no. of initialization values
    
    // Assigning new value --> Syntax: arr[i] ,where i is the index of elements starting from 0 to (n-1), where n is array size
    arr[0] = 42;        // we can assign new value to elements of array
    arr[3] = 1;

    for (int i = 0; i < 4 ; i++){
        std::cout << arr[i] << ' ';
    }

    printf("\n\nEnter size of an int array(in bytes) you want: ");
    int num;
    scanf("%d", &num);
    // int arr[num];        // Dynamic memory allocation(it maynot work on some compilers)


    // Printing the address of Array
        //--> &arr --> Wrong!
        std::cout<< arr << "\n\n";        // This prints address of first element of the Array arr


    // Using Pointers for address and dereferencing the elements of an Array
    int* p = arr;

    //--> Printing the address of next elements using pointer arithmetic
        // new_address(p+i) = current_address(p) + i * sizeof(data_type)

    // p stores the address of first element, (p+1) prints the address of second element
    std::cout << p << ' '<< (p+1) << ' '<< (p+2) << ' '<< (p+3) << ' '<< (p+4) << '\n';
    // Here, (p+4) also prints the address according to pointer arithmetic, though its not in the array

    p++;            // Changing the address stored in the p
    std::cout << p << ' '<< (p+1) << '\n';

    // Similar in dereferencing
    std::cout << *p << ' '<< *(p+1) << ' '<< *(p+2) << ' '<< *(p+3) << ' '<< *(p+4)<< '\n';
    // (p+4) --> not in the array arr, simply looks at the address and prints whatever garbage value here
    // Here, (p+3) is also not in the array because of the incrementing in the address in p
    

    // ------------------------2D ARRAY---------------------------
    int arr2[2][4];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            printf("Enter input for arr2[%d][%d]: ",i,j);
            std::cin>> arr2[i][j];
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            std::cout<< arr2[i][j]<<' ';
        }
    }
    return 0;
}