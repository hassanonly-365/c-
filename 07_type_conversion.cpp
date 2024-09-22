#include <iostream>
using namespace std;

int main()
{

    // type conversion = conversion of a value of one data type to another
    //                   Implicit = automatic
    //                   Explicit = Precede value with new data type (int)

    // char x =100;
    // cout<< x;

    int correct =8;
    int question = 10;
    double score = correct/(double)question *100;

    cout<< score;

    return 0;
}