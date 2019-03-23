#include <iostream>

using namespace std;

int main()
{
    int a = 3, b = 2, c = a * b;
    b++;
    a = b ++;
    b++;
    cout<<"A value= "<<a<<endl<<"B value= "<<b<<endl<<"C value= "<<c<<endl;
}
