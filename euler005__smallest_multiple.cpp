#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;

const int MOD = 1000000007;
const long long INF = 1000000000000000000;
const double PI = 3.1415926535897932384626;
const int N = 0;

int gcd(int a, int b) {
    if(!a) return b;
    return gcd(b%a, a);
}

int lcm(int a, int b) {
    return (a*b)/gcd(a, b);
}

void solve(int t) {
    while(t--) {
        int n; cin>>n;
        int result = 1;
        for(int i=2;i<=n;i++) {
            result = lcm(result, i);
        }
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
// lcm(a, b, c, ...., z) = lcm(lcm(a, lcm(b, lcm(c, .....)))) upto the last term
