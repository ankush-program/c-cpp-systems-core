#include <iostream>
int main(){
    int n;
    printf("Enter no. of elements in array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    int lar=0;
    for(int i=1;i<n;i++){
      if(lar>arr[i]) lar=arr[i];
    }
  return 0;
}
