#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;

const int MOD = 1000000007;
const long long INF = 1000000000000000000;
const double PI = 3.1415926535897932384626;
const int N = 1e4;

ll squaresSum[N+1];
ll sumSquare[N+1];
void precompute() {
    for(int i=1;i<=N;i++) {
        squaresSum[i] = squaresSum[i-1] + (i*i);
        sumSquare[i] += sumSquare[i-1] + i; 
    }
}

void solve(int t) {
    precompute();
    while(t--) {
        int n; cin>>n;
        cout<<abs((sumSquare[n]*sumSquare[n])-squaresSum[n])<<'\n'; 
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t = 1; 
    cin>>t;
    solve(t);
}
