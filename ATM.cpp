#include<iostream>
using namespace std;
void op();
int amount=5000 , pin=1234 , pin1 , t ,i=1;

void BI()
{  
    cout<<"plz enter the PIN:- \n";
    cin>>pin1;
    if (pin1==pin)
    {
       cout<<"your current balance is:- "<<amount<<"\n";
    }
    else{
        cout<<"incorrect pin!\n";
    }

    op();
}

void PC()
{
    int x2 , x3;
    cout<<"plz enter current pin:- \n";
    cin>>x2;
    if (x2==pin)
    {
        cout<<"enter new pin:- \n";
        cin>>x3;
        pin=x3;
    }
    else{
        cout<<"incorrect pin!\n";
    }
    op();
    
}

void WD()
{
    int amnt ;
    cout<<"plz enter the amount:- \n";
    cin>>amnt;
    cout<<"plz enter the PIN:- \n";
    cin>>pin1;
    if (pin1==pin)
    {
        if (amnt>amount)
        {
            cout<<"oops!!  Insufficient balance.\n";
        }
        else{
         cout<<"WITHDRAWAL successful\n";
         amount=amount-amnt;
        }
    }
    else{
        cout<<"incorrect pin!\n";
    }
    
    op();

}

void DP()
{
    int amnt2 , pin1;
    cout<<"enter amount to diposite:- \n";
    cin>>amnt2;
    cout<<"plz enter the PIN:- \n";
    cin>>pin1;
    if (pin1==pin)
    {
       cout<<"DIPOSITE successful\n";
       amount=amount+amnt2;
    }
    else{
        cout<<"incorrect pin!\n";
    }
    op();

}

int main()
{ 
    cout<<"pin is 1234\n\n";
    int y;
     while (i!=0)
    {

    cout<<"enter 1 for CASH WITHDRAWAL \n";
    cout<<"enter 2 for BALANCE INQUIRY \n";
    cout<<"enter 3 for DIPOSITE \n";
    cout<<"enter 4 for CHANGE ATM PIN \n";
    cout<<"enter 0 for to exit \n";
    cin>>y; 
   
       
    switch (y)
    {
    case 1: 
         WD();  
        break;

    case 2: 
         BI();  
        break;

     case 3: 
         DP();  
        break;
    
     case 4: 
         PC();  
        break;

     case 0: 
         i=0;  
        break;
    
    default:
        cout<<"plz enter correct option!!\n";
        break;
            
     }
    }   
    return 0;
}
void op()
{
    cout<<"To continue, enter 1 \nTO exit, enter 0 \n";
   cin>>t;
   if (t==0)
   {
       i=0;
   }
   else if (t!=1)
   {
        cout<<"invalid option!! \n";
       op();
   }
}
