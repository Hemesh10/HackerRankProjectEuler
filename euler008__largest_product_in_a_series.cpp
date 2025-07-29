#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;

const int MOD = 1000000007;
const long long INF = 1000000000000000000;
const double PI = 3.1415926535897932384626;
const int N = 0;

ll helper(string s, int low, int high) {
    ll prod = 1;
    while(low<=high) {
        prod = prod * (s[low++]-'0');
    }
    return prod;
}

void solve(int t) {
    while(t--) {
        int n, k; cin>>n>>k;
        string s; cin>>s;
        string currWindow = "";
        ll result = INT_MIN;
        int i = 0, j = 0;
        while(j<s.size()) {
            currWindow += s[j];
            if(j>=k-1) {
                result = max(result, helper(currWindow, i, j));
                i++;
            }
            j++;
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
