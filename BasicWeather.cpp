#include <iostream>
using namespace std;

int main()
{
    double temp;

    cout<<"Please Enter Today's Temperature in Fahrenheit: "<<endl;
    cin>>temp;
    cout<<endl;

    if(temp >= 70)
        cout<<"It's Hot!"<<endl;
    if(temp <= 32)
        cout<<"It's Freezing!"<<endl;


    return 0;
}

