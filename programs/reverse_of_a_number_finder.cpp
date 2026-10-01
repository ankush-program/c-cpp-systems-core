#include <cstdio>
#include <cmath>

int getInput(){
    int num = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    return num;
}
int numSignCheck(int n){
    if(n > 0) return n;
    else return -n;
}
int main(){
    int num = getInput();

    // count numbers
    int dig = 0, n = 0;
    for(n = numSignCheck(num); n > 0; n /= 10){
        dig++;
    }
    printf("No.of digits: %d\n",dig);

    // Calculate Reverse 
    n = numSignCheck(num);
    int rev = 0;
    for (int i = 1; i <= dig; i++){
        rev += (n%10)*pow(10.0, dig-i);
        n /= 10;
    }
    
    // Adjust the sign of reverse
    if(num > 0) rev = rev;
    else rev = -rev;
    
    printf("Reverse of the number is: %d",rev);   

    return 0;
}