#include<iostream>
#include<ctime>
using namespace std;

void happyBirthday(string name, int age);

int main(){
    
    // function = a block of reusable code.


    string name= "Hassan";

    int age=19;

    happyBirthday(name, age);

    return 0;
}


void happyBirthday(string name, int age){
    cout<<"Happy birthday to " << name <<" !\n";
    cout<<"Happy birthday to " << name <<" !\n";
    cout<<"Happy birthday dear "<<name<<"!\n";
    cout<<"Happy birthday to " << name <<" !\n";
    cout<<"You are now " << age <<" Years old!\n\n";
}
