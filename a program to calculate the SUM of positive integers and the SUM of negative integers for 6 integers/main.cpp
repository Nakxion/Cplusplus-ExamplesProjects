#include <iostream>

using namespace std;

int main()
{
    int b=0,x=0,mark=0,z=0;
    for (x = 1;x<=6; ++x)
    {
        cout<<"enter the mark value: "<<endl;
        cin>>mark;
        if (mark>= 0)
            z=mark+z;
        else
            b=mark+b;
    }

    cout<<"sum of positives= "<<z<<endl;
    cout<<"sum of negatives= "<<b<<endl;
    cout<<"COOL RIGHT!!"<<endl;
    return 0;
}


