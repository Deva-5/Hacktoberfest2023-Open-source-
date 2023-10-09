#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
long long power(int a ,int b,int mod)
{
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }
    //a = a%mod;
    int temp = power(a,b/2,mod)%mod;
    if(b&1)
    {
        return (a*((temp*temp)%mod))%mod;
    }
    else
    {
        return (temp*temp)%mod;
    }
}
 
signed main() {
    long long mod = 1000000007;
    long long a;cin>>a;
    long long ans = power(2,a,mod);
    cout<<ans;
}
