#include<iostream>
using namespace std;

int main(){
    // array = a data structure that can hold miltiple values
    //         values are accessed by an index number
    //         "kind of like a variable that holds multiple values"

    string car[3];// or
    // string car[]= {"Corvette","Mustang","Camry"};

    car[0]="Camaro";
    car[1]="Mustang";
    car[2]="Camry";
    
    cout<<car[0]<<"\n";
    cout<<car[1]<<"\n";
    cout<<car[2]<<"\n";

    return 0;
}