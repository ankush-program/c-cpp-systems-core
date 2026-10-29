#include <iostream>

int main(){
    std::cout<<"Enter a number: ";
    int n;
    std::cin>>n;

    int bit,i=0;
    long long ans=0;

    while(n!=0){
        bit=n&1;        //or --> bit=n%2;
        ans+=(bit*pow(10,i));
        i++;
        n=n>>1;
    }
    std::cout<<ans;
    return 0;
}