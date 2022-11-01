#include "QuickFind.h"

int QuickFind::find(int x) {
    return root[x];
}

void QuickFind::unionSet(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);
    if (rootX != rootY)
        for (int i = 0; i < root.size(); i++)
            if (root[i] == rootY) root[i] = rootX;
}

bool QuickFind::connected(int x, int y) {
    return find(x) == find(y);
}