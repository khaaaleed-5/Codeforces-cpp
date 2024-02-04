#include<bits/stdc++.h>
#include <algorithm>

#define Khaaaleed_5 (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define re return
#define dsort      sort(arr,arr+n,greater<>())
#define asort      sort(arr,arr+n)
#define vsort      sort(v.begin(),v.end())
#define veci vector<int>
#define vecl vector<ll>
#define ll long long
#define ld long double
#define ull unsigned long long
#define dd double
#define nl cout<<"\n"
#define no cout<<"NO"
#define yes cout<<"YES"
#define why int t;cin>>t; while(t--)

using namespace std;

template<typename S>
ostream &operator<<(ostream &os, const vector<S> &vector) {
    for (auto element: vector) {
        os << element << " ";
    }
    re os;
}

bool compareStrings(string &s, string &ss) {
    if (s.length() != ss.length()) {
        return s.length() < ss.length();
    } else {
        return s < ss;
    }
}

template<typename K, typename V>
struct ValueComparator {
    bool operator()(const std::pair<K, V> &lhs, const std::pair<K, V> &rhs) const {
        return lhs.second < rhs.second;
    }
};

bool prime(ll n) {
    if (n == 1 || n == 0)
        return 0;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

bool isSubSequence(string str1, string str2, int m, int n) {
    if (m == 0)
        return true;
    if (n == 0)
        return false;

    if (str1[m - 1] == str2[n - 1])
        return isSubSequence(str1, str2, m - 1, n - 1);
    return isSubSequence(str1, str2, m, n - 1);
}

vecl fib() {
    vecl dp(50 + 1);
    dp[0] = 0, dp[1] = 1;
    for (ll i = 2; i <= 50; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp;
}


int SubArray(int a[], int size) {
    int ma = INT_MIN, end_point = 0;
    for (int i = 0; i < size; i++) {
        end_point = end_point + a[i];
        if (ma < end_point)
            ma = end_point;
        if (end_point < 0)
            end_point = 0;
    }
    return ma;
}

void fract(int num, int d) {
    for (int i = d; i >= 2; i--) {
        if (num % i == 0 && d % i == 0) {
            num = num / i;
            d = d / i;
        }
    }
    if (d == 1)
        cout << num;
    else
        cout << num << "/" << d;
}

bool even(ll n) {
    return n & 1 ^ 1;
}

const int MAX = 10e5;
int frqA[MAX];


void solve() {
    int n, m;
    cin >> n >> m;
    return void(cout << n * (m / 2));
}

int main() {
    Khaaaleed_5
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    why {
        solve();
        nl;
    }

    return 0;
}
