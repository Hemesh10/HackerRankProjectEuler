#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;

const int MOD = 1000000007;
const long long INF = 1000000000000000000;
const double PI = 3.1415926535897932384626;
const int N = 0;

set<int> p;
void precompute() {
    for(int i=100*100;i<=999*999;i++) {
        int x = 0, y = i;
        while(y) {
            x = x*10 + (y%10);
            y /= 10;
        }
        if(x==i) p.insert(i);
    }
}

void solve(int t) {
    precompute();
    while(t--) {
        int n; cin>>n;
        int result=INT_MIN, flag=0;
        for(int i=999;i>=100;i--) {
            for(int j=999;j>=100;j--) {
                int prod = i*j;
                if(prod<n && p.find(prod) != p.end()) {
                    result = max(result, prod);
                }
            }
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
