#include <iostream>

using namespace std;

int main()
{
    float a, b;
    float result;
    char sign;
        cout<<"Enter two values Ex. 1+1, 50*30....."<<endl;
        cin>>a>>sign>>b;
        switch (sign)
        {
        case '+':
            cout<<"="<<(result=a+b)<<endl;
            break;

        case '/':
            cout<<"="<<(result=a/b)<<endl;
            break;

        case '-':
            cout<<"="<<(result=a-b)<<endl;
            break;

        case '*':
            cout<<"="<<(result=a*b)<<endl;
            break;
        case 'x':
            cout<<"="<<(result=a*b)<<endl;
            break;
        default:
            cout<<"ERROR! opreator is not correct"<<endl;
            break;

        }
    return 0;
}
