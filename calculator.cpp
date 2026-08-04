#include <iostream>
using namespace std;
int main()
{
  float num1,num2;
char operation;
cout <<"Enter first number";
cin>>num1;
cout <<"Enter second number";
cin>>num2;
if(operation=='+')
  cout<<"Result = " <<num1 + num2;
else if(operation=='-')
  cout<<"Result = "<<num1 - num2;
else if(operation=='*')
  cout<<"Result ="<<num1 * num2;
else if(operation=="/")
{
  if (num2!=0)
    cout<<"Result = "<<num1/num2;
else
    cout << "Cannot divide by zero!";
}
else
  cout<<"Invalid operation!";
return 0;
}
