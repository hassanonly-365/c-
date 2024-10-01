#include<iostream>
using namespace std;
int main() {

    // If statements = do something if a condition is true.
    //                 if not, then dont do it

    int age;

    cout<<"Enter your Age: ";
    cin>>age;

    if(age>=18){
        cout<<"Welcome to the site!";
    }
    else if(age < 0){
        cout<<"You havent been born";
    }
    else{
        cout<<"You are not old enough to enter!";
    }

    return 0;
}