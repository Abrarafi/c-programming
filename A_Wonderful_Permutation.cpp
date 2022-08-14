#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int p[n];
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }
        int test=0;
        int count=0;
        for(int i=1;i<=k;i++)
        {
            for(int j=0;j<k;j++)
            {
                if(i==p[j])test=1;
            }
            test==1? test=0 : count++ ;
        }
        cout<<count<<endl;
    }
}