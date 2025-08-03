#include <bits/stdc++.h>
#include <string>
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
        vector<string> v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        string sum = "";
        int currSum = 0;
        for(int j=49;j>=0;j--) {
            for(int i=0;i<n;i++) {
                currSum += (v[i][j] - '0');
            }
            string s;
            if(j) s = '0' + (currSum%10);
            else {
                s = to_string(currSum);
                reverse(s.begin(), s.end());
            }
            sum += s;
            currSum /= 10;
        }
        for(int i=sum.size()-1;i>=sum.size()-10;i--) {
            cout<<sum[i];
        }
        cout<<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t = 1; 
    // cin>>t;
    solve(t);
}
