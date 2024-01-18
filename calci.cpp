#include <iostream>
using namespace std;
int main()
{
   int a,b,c;
   cout<<"***********************\t\tSIMPLE CALCULATOR\t\t**********************";
   cout<<endl<<endl;
   cout<<"Operands in Simple Calculator"<<endl;
   cout<<"1) Addition(+)"<<endl<<"2) Subraction(-)"<<endl<<"3) Multiplication (*)"<<endl<<"4) Division(/)"<<endl;
   cout<<endl<<endl;
   cout<<"Enter the first number:  ";
   cin>>a;
   cout<<"Enter the second number:  ";
   cin>>b;
   cout<<"Enter the operand number from the list given above: ";
   cin>>c;
   
   switch(c)
   {
       case 1:
       cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b;
       break;
       
       case 2:
       cout<<"Subraction of "<<a<<" and "<<b<<" is "<<a-b;
       break;
       
       case 3:
       cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b;
       break;
       
       case 4:
       cout<<"Division of "<<a<<" by "<<b<<" is "<<a/b;
       break;
       
       default:
       cout<<"Oops! Invalid Operand is chosen"<<endl;
       cout<<"Try again";
       break;
    }
   
   
   return 0;
}