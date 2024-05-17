# include<iostream>
using namespace std;
int main(){
    int a ;
    cout<<"Enter the value of a : ";
    cin>>a;
    int b ;
    cout<<"Enter the value of b : ";
    cin>>b;
    char op;
    cout<<"Enter the operator : ";
    cin>>op;

    switch(op){
        case '+' : cout<<"The Result of a+b = "<<(a+b)<<endl;
                   break;
        case '-' : cout<<"The Result of a-b = "<<(a-b)<<endl;
                   break;
        case '*' : cout<<"The Result of a*b = "<<(a*b)<<endl;
                   break;
        case '/' : cout<<"The Result of a/b = "<<(a/b)<<endl;
                   break;
        case '%' : cout<<"The Result of a%b = "<<(a%b)<<endl;
                   break;

        default  : cout<<"This is the invalid operator .";           
    }
    
}