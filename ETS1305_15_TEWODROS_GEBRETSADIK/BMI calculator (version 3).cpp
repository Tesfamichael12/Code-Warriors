//BMI calculator for n pepole
#include <iostream>
using namespace std;

int main() {
    float height, weight, bmi;
    int n, i;
    
    cout<<"For how many pepole would you like to calculate BMI: ";
    cin>>n;
    for(i=1; i<=n; i++){
    cout << "Enter your height in meters: ";
    cin >> height;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    
    bmi = weight / (height * height);
 
 
     cout << "The Body Mass Index is: " << bmi <<" Kg/m^2."<< endl;
    }
    return 0;

}
