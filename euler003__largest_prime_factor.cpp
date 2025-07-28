#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;

const int MOD = 1000000007;
const long long INF = 1000000000000000000;
const double PI = 3.1415926535897932384626;
const int N = 0;

void solve(int t) {
    while(t--) {
        ll n; cin>>n;
        ll result = 2;
        while(n%2==0) {
            n = n/2;
        }
        for(ll i=3;i*i<=n;i+=2) {
            if(n%i==0) {
                result = max(result, 1LL*i);
                n = n/i;
                i = 1;
            }
        }
        if(n>2) result = max(result, n);
        cout<<result<<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t = 1; 
    cin>>t;
    solve(t);
}
