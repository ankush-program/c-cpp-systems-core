#include <iostream>
#include <vector>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];             // Dynamic memory allocation(it maynot work on some compilers)
    // std::vector<int> arr(n);      // or use vector

    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = n-1; i>=0;i--){
        printf("%d ",arr[i]);
    }

    return 0;
}
