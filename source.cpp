//-------------------------------

#define ACTIVATE_GCC_OPT

//-------------------------------

#ifdef ACTIVATE_GCC_OPT
#   pragma GCC target("avx2")
#   pragma GCC optimize("O3")
#   pragma GCC optimize("unroll-loops")
#endif

#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
#define dbg(x) cout << "[DBG] " << #x << " " << x << "\n"
#else
#define dbg(x)
#endif

#define rep(i, n) for (int i = 0, i ## _size = (n); i < i ## _size; i++)
#define rrep(i, n) for (int i = (n) - 1; i >= 0; i--)
#define FOR(i, a, b) for (int i = (a), i ## _size = (b); i < i ## _size; i++)
#define RFOR(i, a, b) for (int i = (a) - 1,; i >= (b); i--)
#define all(v) v.begin(), v.end()
#define to_int(str) atoi(str.c_str())
#define to_str(num) to_string(num)
#define scani(x) int x; scanf("%d", &x)
#define printi(x) printf("%d\n", x)
#define STDIO_SETTING() ios::sync_with_stdio(false); std::cin.tie(nullptr)

typedef long long ll;
typedef long double ld;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;
template<typename T>
using PQ = priority_queue<T, vector<T>, greater<T>>;
template<typename T>
using RPQ = priority_queue<T, vector<T>, less<T>>;

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

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

//-------------------------------

void solve() {
    //
    // Write code here
    //
}

signed main() {
    STDIO_SETTING();

    //
    // Code for processing stdin here
    //

    return 0;
}
