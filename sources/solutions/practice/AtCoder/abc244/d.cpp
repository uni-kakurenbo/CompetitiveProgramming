#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/...>
// using namespace atcoder;

#ifdef LOCAL_JUDGE
    #include<debug>
    #define debug(...) Debug::debug(Debug::split(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
    #define DEBUG(...) do { Debug::DEBUG(nullptr, "#" + to_string(__LINE__) + "  "); Debug::DEBUG(__VA_ARGS__); Debug::DEBUG(nullptr, "\033[m"); } while(0);
#else
    #define debug(...) { ; }
    #define DEBUG(...) { ; }
#endif

using ll = long long;
using ull = unsigned long long;

#define until(...) while(!(__VA_ARGS__))

#define REP(i,n) for(int i=0, i##_length=int(n); i<i##_length; ++i)
#define FOR(i,a,b) for(int i=a, i##_last=int(b); i<=i##_last; ++i)
#define FORA(i,I) for(auto& i:I)

#define ALL(x) begin(x),end(x)
#define RALL(x) rbegin(x),rend(x)

template<class T> inline bool chmax(T &a, T b) { return (a<b ? a=b, true : false); }
template<class T> inline bool chmin(T &a, T b) { return (a>b ? a=b, true : false); }

vector<tuple<short,short,short>> ok = {
    { 0, 1, 2 }, { 1, 2, 0 }, { 2, 0, 1 }
};

signed main() {
    char s1, s2, s3, t1, t2, t3;
    cin >> s1 >> s2 >> s3 >> t1 >> t2 >> t3;
    map<char, short> ids({ { s1, 0 }, { s2, 1 }, { s3, 2 } });
    cout << (count(ALL(ok), make_tuple(ids[t1], ids[t2], ids[t3])) ? "Yes" : "No") << endl;
    return 0;
}
