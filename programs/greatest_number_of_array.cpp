#include <iostream>
int main(){
    int n;
    printf("Enter no. of elements in array: ");
    scanf("%d",&n);

    int arr[30];
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    int lar=INT_MIN;
    for(int i=0;i<n;i++){
      if(lar<arr[i]) lar=arr[i];
    }
	std::cout << lar;
  	return 0;
}
