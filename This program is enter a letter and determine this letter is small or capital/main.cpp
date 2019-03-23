#include <iostream>

using namespace std;

int main()
{
    char letter;

    cout<<"Enter a latter: ";
    cin >> letter;

    if((letter>='A') && (letter<='Z'))


        cout<<"You Entered a capital letter";
    else
        cout<<"You Entered a small letter";
        return 0;
}
