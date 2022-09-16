#include<bits/stdc++.h>
using namespace std;
long long nCr(long long n,long r)
{
    long long p=1,k=1;
    if(r>(n-r))
    {
        r=n-r;
    }
    if(r)
    {
        while(r)
        {
            p*=n;
            k*=r;
            long long m=__gcd(p,k);
            p/=m;
            k/=m;
            n--;
            r--;
        }
    }
    else p=1;
    return p;
}
int main()
{

        long long n,m;
        cin>>n>>m;
        long long kmax,kmin;
        if(n>m)
        kmax=nCr((n-(m-1)),2);
        else kmax=0;
        if(n%m==0)
        {
            if(n/m>1)
            kmin=m*(nCr((n/m),2));
            else kmin=0;
        }
        else{
            if(n/m>1)
            {
                kmin=((m-(n%m))*nCr((n/m),2))+((n%m)*nCr(((n/m)+1),2));
            }
            else kmin=((n%m)*nCr(((n/m)+1),2));
        }
        cout<<kmin<<" "<<kmax<<endl;
        

}