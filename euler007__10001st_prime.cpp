#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;

const int MOD = 1000000007;
const long long INF = 1000000000000000000;
const double PI = 3.1415926535897932384626;
const int N = 2*1e5;

bool primes[N+1];
vector<int> v(N+1);
void seive() {
    int k = 1;
    primes[0] = primes[1] = true;
    for(int i=2;i<=N;i++) {
        if(!primes[i]) {
            v[k++] = i;
            for(int j=i*2;j<=N;j+=i) {
                primes[j] = true;
            }
        }
    }
}

void solve(int t) {
    seive();
    while(t--) {
        int n; cin>>n;
        cout<<v[n]<<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t = 1; 
    cin>>t;
    solve(t);
}
