#include<iostream>
using namespace std;
int main(){
    double temp;
    char unit;

    cout<<"F = Fahrenheit\n";
    cout<<"C = Celcuis\n";
    cout<<"What unit would you like to convert to: ";
    cin>>unit;

    if(unit == 'F' || unit == 'f'){
        cout<<"Enter temprature in C: ";
        cin>>temp;

        temp =(1.8 * temp)+32.0;
        cout<< "Temp is"<< temp<< "F\n";
    }
    
    else if(unit == 'C' || unit == 'c'){
        cout<<"Enter temprature in F: ";
        cin>>temp;

        temp = (temp -32) /1.8;
        cout<< "Temp is "<< temp<< "C\n";
    }
    else{
        cout<<"Plese enter only in C or F";
    }
    
}