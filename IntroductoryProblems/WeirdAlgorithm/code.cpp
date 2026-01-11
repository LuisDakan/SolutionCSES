#include<bits/stdc++.h>
 
using namespace std;
 
#define FO(i,b)   for(int i=0;i<b;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define lFOR(i,b) for(int i=1;i<=b;i++)
#define all(x)    x.begin(),x.end()
#define tam(x)    x.size()
#define LB(arr,x)  lower_bound(all(arr),x)-(arr).begin()
#define UB(arr,x)  upper_bound(all(arr),x)-(arr).begin()
#define X first 
#define Y second
 
typedef long long ll;
typedef vector<int> vec;
const ll mod=1e9+7;
const int MAX=2e5+3;
 
//ascii https://elcodigoascii.com.ar/
 
inline void solve()
{
    ll n; cin>>n;
    while(n!=1){
        cout<<n<<" ";
        if(n&1) n=3*n+1;
        else n>>=1;
    }
    cout<<1;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}