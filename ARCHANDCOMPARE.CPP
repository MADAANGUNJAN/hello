#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
       int a,b,n;
       cin>>a>>b>>n;
       if(n==0)
       {
           cout<<"0"<<endl;
       }
       else if((n%2)==0)
       {
           a=abs(a);b=abs(b);
           if(a==b){cout<<"0"<<endl;}
           else if(a>b){cout<<"1"<<endl;}
           else {cout<<"2"<<endl;}
       }
       else
       {
          if(a==b){cout<<"0"<<endl;}
           else if(a>b){cout<<"1"<<endl;}
           else {cout<<"2"<<endl;}
       }
    }

    return 0;
}
