#include<iostream>
using namespace std;

int main(){
   
    float x,y;
    
    char z;

    cout<<"----------SIMPLE CALCULATOR BY COSMOS----------"<<endl;

    cout<<" Enter any two numbers = ";

    cin>>x;
    cin>>y;


    cout<<" Enter an operator :"<<endl;
    cout<<" + ( For Adding)"<<endl;
    cout<<" - ( For Subtracting)"<<endl;
    cout<<" * ( For Multiplying)"<<endl;
    cout<<" / ( for Dividing) "<<endl;

    cin>> z;

   switch (z)
   {
   case '+':
       cout<<"You chose Addition: "<<endl<< x << " + " << y <<" = " << x+y;
      break;

    case '-':
       cout<<"You chose to Subtract: "<<endl<< x << " - " << y <<" = " << x-y;
       break;

    case '*':
       cout<<"You chose to Multiply: "<<endl<< x << " * " << y <<" = " << x*y;
       break;

    case '/':
       cout<<"You chose to Divide: "<<endl<< x << " / " << y <<" = " << x/y;
       break;

   default:
      cout<< "Sorry!! Error occurred";
      break;

   }


    return 0;
}




