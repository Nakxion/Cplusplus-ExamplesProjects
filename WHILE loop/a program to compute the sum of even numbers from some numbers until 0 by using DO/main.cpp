#include <iostream>

using namespace std;

int main()
{
    int a,b = 0;
    do {
    cout<<"enter a value: "<<endl;
    cin >> a;
    if (a%2==0)
    b=b+a;
    }
    while(a!=0);
    cout<<"Sum = "<<b<<endl;
    return 0;
}
