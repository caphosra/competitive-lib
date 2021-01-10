//-------------------------------

#define ACTIVATE_GCC_OPT
#define PROBLEM "https://judge.yosupo.jp/problem/unionfind"

//-------------------------------

#include "./unionfind.hpp"

//-------------------------------

int N, Q;
UnionFind<int> uf;

signed main() {
    stdio_opt();

    cin >> N >> Q;

    rep(i, Q) {
        int t, u, v;
        cin >> t >> u >> v;

        if (t) {
            cout << uf.same(u, v) <<endl;
        }
        else {
            uf.unite(u, v);
        }
    }

    return 0;
}
