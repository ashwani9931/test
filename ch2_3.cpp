#include<iostream>
using namespace std;
class monthly_expenses
{
    public:
    int transport;
    int food;
    int entertainment;
   void trans()
   {
     cout<<"enter your one day transport expenes: \n";
     cin>>transport;
     cout<<"total transport expenses: "<<30*transport;
   }
   void foo()
   {
    cout<<"\nenter your 1 day food expenses: \n";
    cin>>food;
    cout<<"tatal food expenses: "<<30*food;
   };
   void entertain()
   {
    cout<<"\nenter your 1 day entertainment expenses: \n";
    cin>>entertainment;
    cout<<"total entertainment expenses: "<<30*entertainment;

   } 
   
   
};
int main()
{
    monthly_expenses s1;
    s1.trans();
    
    s1.entertain();
   
    s1.foo();
    


}