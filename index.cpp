#include <iostream>
using namespace std;
int main()
{
    int fn;
    cout << "Enter the First Number:- ";
    cin >> fn;
    char sign;
    cout << "Enter the operator ";
    cin >> sign;
    int sn;
    cout << "Enter the second Number:- ";
    cin >> sn;

    if (sign == '+')
    {
        cout << fn + sn;
    }
    else if(sign == '-'){
         cout << fn - sn;
    }
       else if(sign == '*'){
         cout << fn * sn;
    }
       else if(sign == '/'){
         cout << fn / sn;
    }
    else{
        cout<<"Invalid Operator :-((";
    }
}