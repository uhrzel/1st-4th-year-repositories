#include<iostream>

using namespace std ;

int main()
{
  float grade[50], ave = 0, no, sum = 0;
  cout<<"==============================\n";
  cout<<"Arzel John Zolina BSIT SET E"<<endl;
  cout<<"==============================\n";
  
  cout<<"Enter marks of subjects>>";
  cin>>no;
  for(int i=0; i<no; i++)
  {
    cout<<"Enter subject " << i+1 << ":";
    cin>>grade[i];
  }
  for(int i=0; i<no; i++)
  {
    sum+=grade[i];
    ave = sum / no;
  }
  cout<<"Total average is " << ave <<"%"<<endl;
  
  if(ave >= 90 || ave >= 89 )
  {
    cout<<"A. EXCELLENT"<<endl;
  }
  else if(ave >= 80 || ave >= 89)
  {
    cout<<"B.GOOD"<<endl;
  }
  else if(ave >= 79 || ave >= 75)
  {
    cout<<"C.PASSANG AWA"<<endl;
  }
  else if(ave < 75 )
  {
    cout<<"D.YOU FAIL"<<endl;
  }
  
  return 0;
} 