#include <iostream>
#include <string>


using namespace std;

int main(){
    string userTea;
    int teaQuantity = 0;

    cout << "What would like to have in tea ? \n";
    getline(cin, userTea);
    
    cout << "How many cups of " << userTea << "? \n";
    cin >> teaQuantity;


    cout << "Tea name: " << userTea << endl;
    cout << "Tea Quantity: " << teaQuantity << endl;



    return 0;

}


