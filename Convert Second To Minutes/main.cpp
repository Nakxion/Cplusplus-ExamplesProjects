#include <iostream>

using namespace std;

int main()
{
    // Our code Here
    int seconds,hours = 3600,minutes = 60;
    cout<<"Welcome to Converter from seconds to minutes and hours\n";
    cout <<"Enter the seconds: ";
    cin>>seconds;
    hours = seconds / hours;
    minutes = seconds / minutes;
    seconds = seconds % 60;
    cout<<"H : M : S\n";
    cout<<hours<<":"<<minutes % 60<<":"<<seconds<<endl;
    return 0;
}
