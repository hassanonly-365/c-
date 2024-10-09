#include<iostream>
#include<cmath>
using namespace std;


// double square (double length);
// double cube(double length);
// int main(){

//     double length =6.0;
//     double area = square(length);
//     double volume = cube(length);
//     cout<<"Area: "<< area<< "cm^2\n"; 
//     cout<<"Volumr: "<< volume<< "cm^3\n"; 

//     return 0;

// }
// double square(double length){
//     return length * length;
// }
// double cube(double length){
//     return length * length * length;
// }


string concatStr(string str1 , string str2);

int main(){
    string firstName = "Hassan";
    string secondName = "Waqar";
    string fullName = concatStr(firstName,secondName);

    cout<< "Hello "<< fullName;

    return 0;
}

string concatStr(string str1 , string str2){
    return str1+" "+str2;
}