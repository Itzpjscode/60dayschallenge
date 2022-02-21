#include<iostream>
using namespace std;
int main()
{ int a[10],i,large,seclarge=0;
cout<<"enter the array\n";
for(i=0;i<6;i++)
{
    cin>>a[i];
}
large=a[i];
for(i=0;i<10;i++)
{
    if(large<a[i])
    {seclarge=large;
    large=a[i];}
}
cout<<"second largest number:"<<seclarge;
 return 0;

}