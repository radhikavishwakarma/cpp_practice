#include <iostream>

using namespace std;

int main(){
    int number;

    cout << "Enter the number \n";
    cin >> number;

    if (number%2 == 0)
    {
        cout << "Number is even \n";
    }
    else {
        cout << "Number is odd \n";
    }


    return 0;
}