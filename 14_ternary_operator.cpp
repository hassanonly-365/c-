#include<iostream>
using namespace std;
int main(){
    // ternary operator (?) = replacement to an if/else statement.
    //                        condition ? expression 1 : expression 2;

    // int grade = 70; 

    // if(grade >=60){
    //     cout<<"You Passed";
    // }
    // else{
    //     cout<<"You Failed!!";
    // }
    // grade >= 60 ? cout<<"You Passed" : cout<<"You Failed!!";
    
    bool hungry = true;

    // hungry ? cout<<"You are hungry" : cout<<"You are not hungry";
    
    //OR

    cout<<(hungry? "You are hungry" : "You are not hungry" );
    return 0;
}