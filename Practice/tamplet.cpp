#include <bits/stdc++.h>
using namespace std;
 
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vi vector < int >
#define A(a); for(auto &x:a)cin>>x;
#define SZ(a) ((int) (a).size()) 
#define S(a); sort(a.begin(),a.end());
#define TC int tt,qq;cin>>tt;for(qq=1;qq<=tt;qq++)
#define F(i, j, k) for(int i = (j); i < (k); i++) 
using ll = long long;
using  ld = long double;

void solve(){
    int n;
    cin>>n;

    vector<ll> p(n);
    F(i, 0, n) cin>>p[i];

    S(p);
    if(SZ(p) == 2) cout<<(p[0]+ p[1])<<endl;
    else{
        int maxi = *max_element(p.begin(), p.begin()+SZ(p));
        for(int i = (n-1) ; i >= 0; i--){
            if(p[i] != maxi) {
                cout<<maxi + p[i]<<endl;
                break;
            }
        }
    }


}
  
int main()
{
    FAST_IO;

    TC
    solve();
    return 0;
}
//Code by SMS