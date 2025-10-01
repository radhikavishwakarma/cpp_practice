#include <iostream>

using namespace std;


int main(){
    int teaLeaves = 50;
    float waterTemperature = 85.5;
    double teaPrice = 299.758595652587;
    bool isTeaReady = true;
    char teaGrade = 'A';

    cout << "Tea Leaves count: " << teaLeaves << endl;
    cout << "Water Temperature: " << waterTemperature << endl;
    cout << "Tea Price: " << teaPrice << endl;
    cout << "Tea Grade: " << teaGrade << endl;
   // cout << "Is Tea Ready: " << isTeaReady << endl;
    
    if (isTeaReady == true){  
        cout << "Is Tea Ready: Yes" << endl;
    }
    else{
        cout << "Is Tea Ready: No" << endl;
    }    
    

    return 0;

}