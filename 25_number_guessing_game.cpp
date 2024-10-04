#include<iostream>
#include<ctime>
using namespace std;

int main(){

    int num;
    int guess;
    int tries=0;

    srand(time(NULL));
    num = (rand()%100)+1;

    cout<<"**********Number Guessing Game**********";

    do{
        cout<<"\nEnter a guess between(1-100) :";
        cin>>guess;
        tries++;

        if (guess>num){
            cout<<"Too High!\n";
        }
        else if (guess<num){
            cout<<"Too Low!\n";
        }
        else{
            cout<<"Correct!! # of tries: "<<tries<< "\n";
        }
        
        

    } while (guess != num);

    cout<<"**********Game Over**********";

    return 0;
}