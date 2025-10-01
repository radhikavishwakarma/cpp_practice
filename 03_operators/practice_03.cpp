#include <iostream>

using namespace std;

int main(){
    int numberOfTeaBags;
    
    cout << "Enter the number of tea bags you have: \n";
    cin >> numberOfTeaBags;

    if (numberOfTeaBags < 10)
    {
        numberOfTeaBags = numberOfTeaBags + 5;
    }
    else
    {
        
    }
    

    return 0;

}