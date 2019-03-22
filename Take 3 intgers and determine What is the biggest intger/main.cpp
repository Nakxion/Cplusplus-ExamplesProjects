#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter random numbers a,b and c one after another: ";
    cout<<endl;
    cin >>a>>b>>c;
    // First Number Condition
    if ((a>b) && (a>c)) // tack care of (()) important
        cout<<"First Number is Bigger= "<<a<<endl;
    if ((b>a) && (b>c))
        cout<<"Second Number is Begger="<<b<<endl;
    if ((c>a) && (c>b))
        cout<<"Third Number is Begger="<<c<<endl;
    if((a == b) && (b == c))
        cout<<"All The number are equal"<<endl;
    return 0;
}
