#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<vector>
#include<cmath>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fastio;
    int t;cin>>t;
    while(t--)
    {
        int n;int k;
        cin>>n>>k;
        int arr[100];int cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(abs(arr[i])<=1){cnt++;}
        }
        if(cnt>=(n-k))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }


   return 0;
}

