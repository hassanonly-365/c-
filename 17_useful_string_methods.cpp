#include<iostream>
using namespace std;
int main(){

    string name;
    cout<<"enter your name: ";
    getline(cin,name);

    // //.length() function returns the lenght of a string.
    // if(name.length() >12){
    //     cout<<"your name can't be over 12 characters";
    // }
    // else{
    //     cout<< "Welcome "<< name;
    // }


    // // .empty() function is used to check if a string is empty or not.
    // if(name.empty()){
    //     cout<<"you didnt enter your name";
    // }
    // else{
    //     cout<< "Hello"<< name;
    // }

    // //.append() is used to add a string to the end of another string
    // name.append("@gmail.com");
    // cout<< "Ur username is: "<< name;


    // .insert is used to insert a string at a position 
    //  syntax=  .insert(index, "string");
    // name.insert(0,"@");
    // cout<<name;


    // .find() is used to find the index of a character you enter inside the parenthesis'()'.
    // note: it is case sensitive & logical operator OR (||) does not work here. 
    // cout<< name.find(" ");

    // .erase() is used to erase a specific portion of a string.
    // syntax= .erase(starting index , ending index);
    // name.erase(0,2);
    // cout<< name;

    return 0;
}