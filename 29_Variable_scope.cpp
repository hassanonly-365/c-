#include<iostream>
using namespace std;

int myNum =3;
void printNum();


int main(){

    //Local variables = declared inside a function or block{}
    //Global variables = declared outside of all functions

    
    cout<<myNum;
    printNum();

    return 0;
}

void printNum(){
    cout<<myNum;
}