#include <iostream>

int main(){
    std::cout << "Enter amount: ";
    int n;
    std::cin >> n;

    int n_100 = n/100;
    int n_50 = (n%100)/50;
    int n_20 = (n%50)/20;
    int n_10 = ((n%50)%20)/10;
    int n_1 = (n%10);

    std::cout << "100 Rupee Notes: "<<n_100
                << "\n50 Rupee Notes: "<<n_50
                << "\n20 Rupee Notes: "<<n_20
                << "\n10 Rupee Notes: "<<n_10
                << "\n1 Rupee Notes: "<<n_1;
    return 0;
}