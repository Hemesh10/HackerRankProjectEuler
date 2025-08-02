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
        int matrix[21][21];
        for(int i=1;i<=20;i++) {
            for(int j=1;j<=20;j++) {
                cin>>matrix[i][j];
            }
        }
        int result = 0;
        for(int i=1;i<=20;i++) {
            for(int j=4;j<=20;j++) {
                if(i>=4) {
                    int up = matrix[i][j]*matrix[i-1][j]*matrix[i-2][j]*matrix[i-3][j];
                    result = max(result, up);
                }
                if(i<=17) {
                    int down = matrix[i][j]*matrix[i+1][j]*matrix[i+2][j]*matrix[i+3][j];
                    result = max(result, down);
                }
                if(j>=4) {
                    int left = matrix[i][j]*matrix[i][j-1]*matrix[i][j-2]*matrix[i][j-3];
                    result = max(result, left);
                }
                if(j<=17) {
                    int right = matrix[i][j]*matrix[i][j+1]*matrix[i][j+2]*matrix[i][j+3];
                    result = max(result, right);
                }
                if(i>=4 && i<=17) {
                    if(j>=4) {
                        int d1 = matrix[i][j]*matrix[i-1][j-1]*matrix[i-2][j-2]*matrix[i-3][j-3];
                        int d3 = matrix[i][j]*matrix[i+1][j-1]*matrix[i+2][j-2]*matrix[i+3][j-3];
                        result = max(result, max(d1, d3));
                    }
                    if(j<=17) {
                        int d2 = matrix[i][j]*matrix[i-1][j+1]*matrix[i-2][j+2]*matrix[i-3][j+3];
                        int d4 = matrix[i][j]*matrix[i+1][j+1]*matrix[i+2][j+2]*matrix[i+3][j+3];
                        result = max(result, max(d2, d4));
                    }
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
    // cin>>t;
    solve(t);
}
