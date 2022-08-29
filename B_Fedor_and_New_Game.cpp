#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(m+1);
    for(int i=0;i<=m;i++)
    {
        cin>>v[i];
    }
    int test=0;
    int count=0;
    string s= bitset<32>(v[m]).to_string();
    for(int i=0;i<m;i++)
    {
        string st=bitset<32>(v[i]).to_string();
        //cout<<st<<" ";
        for(int j=0;j<32;j++)
        {
            if(s[j]!=st[j])test++;
            
        }
        if(test<=k)count++;
        test=0;
    }
    cout<<count<<endl;

}