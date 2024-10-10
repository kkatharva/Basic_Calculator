#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    // Decalring the Variables
    string operation;
    double num1;
    double num2;
    double ans;
    
    // Getting the user input
    cout<<"Enter First Number:"<<endl;
    cin>>num1;
    cout<<"Enter your Operation (+,-,*,/):"<<endl;
    cin>>operation;
    cout<<"Enter Second Number:"<<endl;
    cin>>num2;
    
    // Code Logic
    if(operation == "+"){
        ans = num1+num2;
        cout<<"Sum is "<<ans<<endl;
    }
    else if(operation == "-"){
        ans = num1-num2;
        cout<<"Difference is "<<ans<<endl;
    }
    else if(operation == "*"){
        ans = num1*num2;
        cout<<"Multiplication is "<<ans<<endl;
    }
    else if(operation == "/"){
        ans = num1/num2;
        cout<<"Division is "<<ans<<endl;
    }

    return 0;
}
