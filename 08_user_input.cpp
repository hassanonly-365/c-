#include<iostream>
using namespace std;

// cout<< (insertion operator);
// cin>> (exertion operator);

int main()
{
    string name;
    int age;
    cout<<"What is your name?: ";
    getline(cin, name); // getline allows you to have spaces between words in strings.

    // cout<<"What is your name?: ";
    // cin>> name;

    cout<<"What is your age?: ";
    cin>> age;

    cout << "Hello "<< name <<"\n";
    cout << "You are "<< age<< " Years old";

    return 0;
}
