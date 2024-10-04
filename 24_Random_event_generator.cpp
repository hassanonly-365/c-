#include<iostream>
#include<ctime>
using namespace std;
int main(){

    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        cout<<"You won a bumper sticker!\n";
        break;
    case 2:
        cout<<"You won a t-shirt!\n";
        break;
    case 3:
        cout<<"You won a free lunch!\n";
        break;
    case 4:
        cout<<"You won a gift card!\n";
        break;
    case 5:
        cout<<"You won a concert ticket!\n";
        break;
    }

    return 0;
}