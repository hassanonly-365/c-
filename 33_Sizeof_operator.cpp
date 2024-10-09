#include<iostream>
using namespace std;

int main(){

    //sizeof() = determines the size in bytes of a:
    //           variable, data type, class, objects, etc.

    double gpa = 2.5;
    string name ="Bro Code";
    char grade ='F';
    bool student =true;
    char grades[]= {'A','B','C','D','E'};
    string students[] ={"Spongebob","Patrick","Squidward","Sandy"};

    cout<<sizeof(gpa)<<"bytes\n";
    cout<<sizeof(name)<<"bytes\n";
    cout<<sizeof(grade)<<"bytes\n";
    cout<<sizeof(student)<<"bytes\n";
    cout<<sizeof(grades)<<"bytes\n";
    cout<<sizeof(students)/sizeof(string)<<" Elements\n";//this is for finding how many elements are there in an array


    return 0;
}
