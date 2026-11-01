#include <iostream>

void swap(int* a, int* b){
    *a =*a + *b;
    *b =*a - *b;
    *a =*a - *b;
}

void rev(int arr[], int n){
    for(int i=0;i<n-i-1;i++){
        swap(&arr[i], &arr[n-i-1]);
    }
}

int arrMax(int arr[], int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max) max=arr[i];
    }
    return max;
}
int arrMin(int arr[], int n){
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<min) min=arr[i];
    }
    return min;
}

int main(){
    int n;
    std::cin >> n;

    int arr[30];
    for(int i=0;i<n;i++){
        std::cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        std::cout << arr[i] << ' ';
    }

    std::cout << '\n';

    rev(arr,n);

    for(int i=0;i<n;i++){
        std::cout << arr[i] << ' ';
    }
    
    std::cout << '\n' << arrMax(arr,n);
    std::cout << '\n' << arrMin(arr,n);

    return 0;
}