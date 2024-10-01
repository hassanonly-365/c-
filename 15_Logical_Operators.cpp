#include<iostream>
using namespace std;
int main(){

    // && = to checck if tow conditions are true 
    // || = to check if atleast ont of two conditons is true
    // !  = reverses the locgical state of its operand

    // int temp;

    // cout<<"Enter the temprature: ";
    // cin>> temp;

    // // if(temp > 0 && temp < 30){
    // //     cout<<"The tmeprature is good";
    // // }
    // // else{
    // //     cout<< "The temprature is bad!";
    // // }
    
    // if(temp <= 0 || temp >= 30){
    //     cout<<"The tmeprature is Bad";
    // }
    // else{
    //     cout<< "The temprature is Good!";
    // }


    bool sunny = true;

    if(!sunny){
        cout<<"it is sunny outside";
    }
    else{
        cout<<"it is cloudy";
    }

    return 0;
}