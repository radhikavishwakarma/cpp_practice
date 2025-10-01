#include <iostream>

using namespace std;

int main(){
    int numberOfCups;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "Enter number of cups: \n";
    cin >> numberOfCups;
    cout << "Enter price per cup: \n";
    cin >> pricePerCup;
    totalPrice = numberOfCups * pricePerCup;

    if (totalPrice > 100) {
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Discounted price is: " << discountedPrice << endl;
    } else {
        cout << "Total price is: " << totalPrice << endl;
    }
    return 0;
}