// A c++ program to implement the piggy bank
#include<iostream>
using namespace std;
class piggybank
{
    private:
    double amount;
    

    

    public:
    
    void setinitialamount()
    {
        amount=0;
      
    }
   double showbalance()
   {
    return amount;
   }
   void addbalance(){
    double amt;
    cout<<"enter the deposited amount :";
    cin>>amt;
    amount=amount+amt;

   }
   void withdrawbalance(){
    double amt;
    cout<<"enter the withdrawn amount :";
    cin>>amt;
     if(amt>amount)
     {
      cout<<"you dont have enough balance:"<<endl;
      return;
     }
    
    
    amount=amount-amt;
    cout<<"Rs" << amt<<"successfully withdrawn"<<endl;
     

   }
};
int main()
{
    piggybank p;
  p.setinitialamount();
  cout<<"Current Balance: Rs"<<p.showbalance()<<endl;
  p.addbalance();
   cout<<"current balance is: "<<p.showbalance()<<endl;
  p.withdrawbalance();
 
  cout<<"current balance is: "<<p.showbalance()<<endl;



  return 0;

    



}