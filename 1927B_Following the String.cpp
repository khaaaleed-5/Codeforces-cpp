#include<bits/stdc++.h>
#include <algorithm>

#define Khaaaleed_5 (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define re return
#define dsort      sort(arr,arr+n,greater<>())
#define asort      sort(arr,arr+n)
#define all(v)     v.begin(),v.end()
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

void solve() {
    int n;
    cin >> n;
    veci v(n);
    string s = "";
    for (auto &i: v)
        cin >> i;
    map<char, int> mp;
    for (char i = 'a'; i <= 'z'; i++)
        mp[i] = 0;
    for (int i = 0; i < n; i++) {
        for (auto &j: mp) {
            if (j.second == v[i]) {
                j.second++;
                s += j.first;
                break;
            }
        }
    }
    cout << s;
    
}

int main() {
    Khaaaleed_5
    why {
        solve();
        nl;
    }

    return 0;
}
