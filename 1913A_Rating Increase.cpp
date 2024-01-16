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

void solve() {
    string s, s1, s2;
    cin >> s;
    s1 += s[0];
    int i = 1;
    while (s[i] == '0') {
        s1 += s[i];
        i++;
        if (i == s.size())
            re void(cout << -1);
    }
    while (i < s.size()) {
        s2 += s[i];
        i++;
    }
    if (s1 == s2 ) {
        cout << -1;
        goto die;
    }
    cout << s1 << ' ' << s2;
    die:;
}


int main() {
    Khaaaleed_5
    why {
        solve();
        nl;
    }

    return 0;
}
