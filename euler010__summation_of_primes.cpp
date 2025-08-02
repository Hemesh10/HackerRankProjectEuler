#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;

const int MOD = 1000000007;
const long long INF = 1000000000000000000;
const double PI = 3.1415926535897932384626;
const int N = 1e6;

ll primesSummation[N+1];
void precalculate() {
    vector<bool> isPrime(N+1, true);
    isPrime[0] = isPrime[1] = false;
    for(int i=2;i<=N;i++) {
        if(isPrime[i] && 1LL*i*i<=N) {
            for(int j=i*i;j<=N;j+=i) {
                isPrime[j] = false;
            }
        }
    }
    for(int i=1;i<=N;i++) {
        primesSummation[i] = isPrime[i] ? i : 0;
        primesSummation[i] += primesSummation[i-1];
    }
}

void solve(int t) {
    precalculate();
    while(t--) {
        int n; cin>>n;
        cout<<primesSummation[n]<<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t = 1; 
    cin>>t;
    solve(t);
}
