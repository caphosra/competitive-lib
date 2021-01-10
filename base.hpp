#pragma once

#ifdef ACTIVATE_GCC_OPT
#   pragma GCC target("avx2")
#   pragma GCC optimize("O3")
#   pragma GCC optimize("unroll-loops")
#endif

#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
#   define dbg(x) cout << "[DBG] " << #x << " " << x << "\n"
#else
#   define dbg(x)
#endif

#define rep(i, n) for (int i = 0, i ## _size = (n); i < i ## _size; i++)
#define rrep(i, n) for (int i = (n) - 1; i >= 0; i--)
#define FOR(i, a, b) for (int i = (a), i ## _size = (b); i < i ## _size; i++)
#define RFOR(i, a, b) for (int i = (a) - 1,; i >= (b); i--)
#define foreach(i, a) for (auto i : a)
#define each(i, a) foreach(i, a)
#define all(v) v.begin(), v.end()

typedef long long ll;
typedef long double ld;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;
template<typename T>
using PQ = priority_queue<T, vector<T>, greater<T>>;
template<typename T>
using RPQ = priority_queue<T, vector<T>, less<T>>;

inline void stdio_opt() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}
inline int to_int(const char* str) {
    return atoi(str);
}
template<typename T>
bool chmax(T& old_itm, const T& new_itm) {
    if (old_itm < new_itm) {
        old_itm = new_itm;
        return 1;
    }
    return 0;
}
template<typename T>
bool chmin(T& old_itm, const T& new_itm) {
    if (old_itm > new_itm) {
        old_itm = new_itm;
        return 1;
    }
    return 0;
}

const int MOD1000000007 = 1000000007;
const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {1, 0, -1, 0};
