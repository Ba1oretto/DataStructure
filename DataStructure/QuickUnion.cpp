#include "QuickUnion.h"

// optimized by using Path Compression recursively
int QuickUnion::find(int x) {
    if (x == root[x]) return x;
    return root[x] = find(root[x]);
}

void QuickUnion::unionSet(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);
    if (rootX == rootY) return;

    // optimized by using Union by Rank
    if (rank[rootX] > rank[rootY]) root[rootY] = rootX;
    else if (rank[rootX] < rank[rootY]) root[rootX] = rootY;
    else {
        root[rootX] = rootY;
        rank[rootY] += 1;
    }
}

bool QuickUnion::connected(int x, int y) {
    return find(x) == find(y);
}