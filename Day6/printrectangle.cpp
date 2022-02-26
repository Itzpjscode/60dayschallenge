#include<iostream>
using namespace std;
int main()
{ 
  int r,c,i,j;
  cout<<"enter length of rectangle\n";
  cin>>r;
  cout<<"enter breath of rectangle\n";
  cin>>c;
  for  ( i=0; i < r; i++)
   {
      for ( j=0;j < c;j++)
       {
          cout<<"# ";
       }
    cout<<"\n";
   }
  return 0;
}


