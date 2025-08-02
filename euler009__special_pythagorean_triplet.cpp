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
        int n; cin>>n;
        ll result = 0;
        if(n>5) {
            for(int a=1;a<=(n+3-1)/2;a++) {
                // int x = n-a;
                int b = ((n*n)-(2*n*a))/(2*(n-a));
                int c = n-a-b;
                if(a+b+c==n && ((a*a)+(b*b)==(c*c))) {
                    result = max(result, 1LL*a*b*c);
                }
            }
        }
        cout<<(result?result:-1)<<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t = 1; 
    cin>>t;
    solve(t);
}
