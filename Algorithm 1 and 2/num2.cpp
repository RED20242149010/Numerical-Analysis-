#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a,b,c;
    double D, x1, x2;
    char choice;

    do{
        cout<<"Enter a, b, c: ";
        cin>>a>>b>>c;

        D = b*b - 4*a*c;

        if(D > 0){
            x1 = (-b + sqrt(D)) / (2*a);
            x2 = (-b - sqrt(D)) / (2*a);
            cout<<"Two real roots: "<<x1<<" and "<<x2<<endl;
        }
        else if(D == 0){
            x1 = -b / (2*a);
            cout<<"One real root: "<<x1<<endl;
        }
        else{
            double real = -b/(2*a);
            double img = sqrt(-D)/(2*a);

            cout<<"Complex roots:"<<endl;
            cout<<"x1 = "<<real<<" + "<<img<<"i"<<endl;
            cout<<"x2 = "<<real<<" - "<<img<<"i"<<endl;
        }

        cout<<"Do you want to calculate again? (y/n): ";
        cin>>choice;

    }while(choice=='y' || choice=='Y');

    return 0;
}