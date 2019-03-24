#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"enter a value = "<<endl;
    cin>>a;
    if (a>=0)
    cout<< "This value is positive number \n" <<endl;
    if (a%2 ==0)
    cout<<"the value is even \n";
    if (a%2!=0)
    cout<<"the value is odd number"<<endl;
    if (a<0)
    cout<<"the value is a negative number\n"<<endl;
    return 0;
    }
