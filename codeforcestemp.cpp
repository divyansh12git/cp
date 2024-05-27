#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
#include<queue>
#include<deque>
#include<string.h>
#include<cmath>
#include<limits>
#include<algorithm>
using namespace std;

/*_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*/

#define     INF                 1e18
#define     PI                  3.141592653589793238462

#define     ll                  long long
#define     llfl(i,s,e)         for(long long i=s;i<e;i++)
#define     fl(i,s,e)           for(int i=s;i<e;i++)
#define     fa(i,z)             for(auto i:z)

#define     pb                  push_back
#define     pf                  push_front

#define     vsort(v)            sort(v.begin(),v.end())
#define     vreverse(v)         reverse(v.begin(),v.end())

#define     mapit(it,d1,d2,map) unordered_map<d1,d2>::iterator it=map.begin()
#define     vecit(it,dt,vec)    vector<dt>:: iterator it=vec.begin();


/*_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*/

ll gcd(ll a, ll b){ if(a==b)return a;    if(a>b)a-=b;    if(b>a)b-=a;    return gcd(a,b);    }
void debug(int n) { cout<<"HI - "<<n<<endl; }

/*_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _*/




void solve(){
    //code here...
    
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}