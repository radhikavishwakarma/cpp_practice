#include <iostream>

using namespace std;

int main(){
    int number1, number2;
    double result;
    cout << "Enter Number 1: \n";
    cin >> number1;
    cout << "Enter Number 2: \n";
    cin >> number2;
    
    result = number1 + number2;
    cout << "Addition is: " << result << endl;
    
    result = number2 - number1;
    cout << "Subtraction is: " << result << endl;

    result = number1 * number2;
    cout << "Multiplication is: " << result << endl;

    if (number2 == 0)
    {
        cout << "Division by 0 is not possible \n";
    }
    else {
        result = (float) number1 / (float) number2;

        cout << "Quotient is: " << result << endl;
    }




    return 0;
}