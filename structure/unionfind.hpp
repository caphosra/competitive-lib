#pragma once

#include "../base.hpp"

template<typename T>
class UnionFind {
    vector<T> data, rank;
   public:
    UnionFind(T size) : data(size), rank(size, 1) {
        rep(i, size) {
            data[i] = i;
        }
    }
    inline void init(T size) {
        data.resize(size);
        rank.assign(size, 1);
        rep(i, size) {
            data[i] = i;
        }
    }
    inline T root(T item) {
        while (data[item] != item) {
            item = data[item] = data[data[item]];
        }
        return item;
    }
    inline bool unite(T x, T y) {
        x = root(x);
        y = root(y);
        if (x == y) return false;
        if (rank[x] < rank[y]) swap(x, y);
        rank[x] += rank[y];
        data[y] = x;
        return true;
    }
    inline bool same(T x, T y) {
        return root(x) == root(y);
    }
    inline T size(T x) {
        return rank[root(x)];
    }
};
