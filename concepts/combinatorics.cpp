#include<iostream>
using namespace std;

#define ll long long 

const ll mod=1e9+7;
const ll N=20;

ll power(ll base,ll x){
    if(x<0)return 0;
    ll ans=1;
    while(x){
        if(x&1){
            //power odd;
            ans=(ans*base)%mod;//as power odd multiply by base and reduced to even
        }
        base=(base*base)%mod;// now it's even make it square
        x>>=1;// divide it by 2;odd doesn't matter now;
    }
    return ans;
}
ll modinverse(ll a,ll M){
    return power(a,M-2);
    //modular multiplicative theorem theorem:
    //      a^(-1)%mod=(a^(mod-2))%mod
    //  mod id prime;
}

ll fact[N+1];
ll modinv[N+1];
void precomp(){
    fact[0]=1;
    for(int i=1;i<=N;i++){
        fact[i]=(fact[i-1]*i)%mod;
        modinv[i]=power(fact[i],mod-2);
        // cout<<modinv[i]<<" ";
    }
}

ll ncr(ll n,ll r){
    if(r>n)return 0;
    ll numo=fact[n];
    ll invdeno=(modinv[r]*modinv[n-r])%mod;
    ll ans=(numo*invdeno)%mod;
    return ans;
}

int main(){
    precomp();
    // for(int i=0;i<=N;i++)cout<<fact[i]<<" ";cout<<endl;
    ll ans=ncr(10,3);
    cout<<ans<<endl;
}
