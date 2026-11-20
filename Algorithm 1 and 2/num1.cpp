#include<iostream>
using namespace std;

int main(){

    double a, b, c, d, x;
    char choice;

    do{
        cout<<"Enter a, b, c, d: ";
        cin>>a>>b>>c>>d;

        x = (d - b) / (a - c);
        cout<<"x = "<<x<<endl;

        cout<<"Do you want to calculate again? (y/n): ";
        cin>>choice;

    }while(choice=='y' || choice=='Y');

    return 0;
}