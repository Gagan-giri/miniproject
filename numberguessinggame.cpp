# include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand((unsigned int)  time(NULL));
    int number =(rand()/100)+1; // 0-99+1 ->0-+100
    int guess =0;
    do{
        cout<<"Enter the Guess(1-1000)= ";
        cin>>guess;
        if(guess>number){
            cout<<"Guess lower!"<<endl;
        } 
        else if(guess<number){
            cout<<"guess higher!"<<endl;
        }
        else{
            cout<<" YOU WON !----"<<endl;
        }

    }while(guess !=number);

    return 0;
}
