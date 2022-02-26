#include<iostream>
using namespace std;
int main()
{ long n,i,j,k,t;
   cout<<"enter the number\n";
   cin>>n;
   t=n-1;
   cout<<"right triangle\n";
   for(i=1;i<=n;i++)
   {
   for(k=t;k>0;k--) 
   {cout<<"  ";
      }
   for(j=1;j<=i;j++)
   { cout<<"$ ";
   }
   t--;
   cout<<"\n";
   }
return 0;
}