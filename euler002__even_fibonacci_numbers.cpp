#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;

const int MOD = 1000000007;
const long long INF = 1000000000000000000;
const double PI = 3.1415926535897932384626;
const long long N = 40000000000000000LL;

string helper(ll num) {
    string s = "";
    while(num) {
        char ch = num%10 + '0';
        s += ch;
        num /= 10;
    }
    int low = 0, high = s.size()-1;
    while(low<high) {
        char temp = s[low];
        s[low] = s[high];
        s[high] = temp;
        low++; high--;
    }
    return s;
}

void solve(int t) {
    while(t--) {
        ll n; cin>>n;
        ll a = 1, b = 2, prevEven = 2;
        string s = "";
        while(true) {
            ll temp = a+b;
            a = b;
            b = temp;
            if(temp>n) break;
            else if(temp%2==0) {
                s = helper(prevEven+temp);
                prevEven += temp;
            }
        }
        cout<<s<<'\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t = 1; 
    cin>>t;
    solve(t);
}
