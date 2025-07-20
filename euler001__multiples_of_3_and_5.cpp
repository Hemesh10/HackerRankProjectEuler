#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;

const int MOD = 1000000007;
const long long INF = 1000000000000000000;
const double PI = 3.1415926535897932384626;

void solve(int t) {
    while(t--) {
        int n; cin>>n;
        ll sum=0, x=(n-1)/3, y=(n-1)/5, z=(n-1)/15;
        sum += ((x+1)*x*3) / 2;
        sum += ((y+1)*y*5) / 2;
        sum -= ((z+1)*z*15) / 2;
        cout<<sum<<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t = 1; 
    cin>>t;
    solve(t);
}
