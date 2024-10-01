#include<iostream>
using namespace std;
int main(){

    // Switch = alternative to using many "else if" statements
    //          compare one value against matching cases.

    // int month;
    // cout<<"Enter the month (1-12): ";
    // cin>> month;

    // if(month == 1){
    //     cout<<"It is January";
    // }
    // else if (month == 2){
    //     cout<<"It is February";
    // }
    // else if (month == 3){
    //     cout<<"It is March";
    // }
    // else if (month == 4){
    //     cout<<"It is April";
    // }
    // else if (month == 5){
    //     cout<<"It is May";
    // }
    // else if (month == 6){
    //     cout<<"It is June";
    // }
    // else if (month == 7){
    //     cout<<"It is July";
    // }
    // else if (month == 8){
    //     cout<<"It is August";
    // }
    // else if (month == 9){
    //     cout<<"It is September";
    // }
    // else if (month == 10){
    //     cout<<"It is Octuber";
    // }
    // else if (month == 11){
    //     cout<<"It is November";
    // }
    // else if (month == 12){
    //     cout<<"It is December";
    // }
    // else {
    //     cout<<"You didn't enter a number between(1-12)";
    // }


    // switch(month){
    //     case 1:
    //     cout<<"It is January;";
    //     break;
    //     case 2:
    //     cout<<"It is February;";
    //     break;
    //     case 3:
    //     cout<<"It is March;";
    //     break;
    //     case 4:
    //     cout<<"It is April;";
    //     break;
    //     case 5:
    //     cout<<"It is May;";
    //     break;
    //     case 6:
    //     cout<<"It is June;";
    //     break;
    //     case 7:
    //     cout<<"It is July;";
    //     break;
    //     case 8:
    //     cout<<"It is August;";
    //     break;
    //     case 9:
    //     cout<<"It is September;";
    //     break;
    //     case 10:
    //     cout<<"It is Octuber;";
    //     break;
    //     case 11:
    //     cout<<"It is November;";
    //     break;
    //     case 12:
    //     cout<<"It is December;";
    //     break;
    //     default:
    //     cout<<"Please enter in numbers between (1-12)";
    // }


    char grade;
    cout<<"What letter Grade: ";
    cin>>grade;

    switch(grade){
        case 'A':
        cout<<"You did grate!";
        break;
        case 'B':
        cout<<"You did good!";
        break;
        case 'C':
        cout<<"You did oka!";
        break;
        case 'D':
        cout<<"You did not do good!";
        break;
        case 'F':
        cout<<"You Failed!";
        break;
        default:
        cout<<"Please enter in letter grade (A-F)";
    }


}