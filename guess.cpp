#include <iostream>
using namespace std;
int main()
{
    int random,n;
    srand(time(0));
    random=1+(rand()%100);
    int choice=10;
    
    cout<<"Welocme to the Number Guessing game"<<endl;
    cout<<"Guess the number between 1 and 100."<<endl;
    cout<<"You have got only 10 chances to guess"<<endl<<endl;
    
    
    for(int i=0;i<10;i++)
    {
        cout<<"Enter the number below"<<endl;
        cin>>n;
        if(n==random)
        {
            cout<<"Congratuation.!!"<<endl;
            cout<<"You have Guessed the number perfectly"<<endl;
            cout<<random<<"is the number";
            break;
            
        }
        else
        {
            if(random-n>=30&&random-n<=100)
            {
                cout<<"No!"<<endl;
                cout<<"Your number is very small"<<endl;
            }
            if(random-n>=20&&random-n<30)
            {
                cout<<"No!"<<endl;
                cout<<"Your number is  small"<<endl;
            }
            if(random-n>=10&&random-n<20)
            {
                cout<<"No!"<<endl;
                cout<<"Your number is slightly small"<<endl;
            }
            if(random-n>0&&random-n<10)
            {
                cout<<"No!"<<endl;
                cout<<"Your number is very near"<<endl;
            }
            if(n-random>=30&&n-random<=100)
            {
                cout<<"No!"<<endl;
                cout<<"Your number is very large"<<endl;
            }
            if(n-random>=20&&n-random<30)
            {
                cout<<"No!"<<endl;
                cout<<"Your number is large"<<endl;
            }
            if(n-random>=10&&n-random<20)
            {
                cout<<"No!"<<endl;
                cout<<"Your number is slightly large"<<endl;
            }
        }
        choice--;
        cout<<"you are left with "<<choice<<" choices"<<endl<<endl<<endl;
    }
    if(choice==0){
        cout<<"OOPS!!"<<endl;
        cout<<"Chances are over"<<endl;
        cout<<"Good try!"<<endl<<"The number is "<<random<<endl;
        cout<<"Play again to win";
    }
    return 0;
}
    