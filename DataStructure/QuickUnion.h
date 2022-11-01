#pragma once
#include <vector>

class QuickUnion
{
public:
    QuickUnion(int size) : root(size), rank(size) {
        for (int i = 0; i < size; i++) {
            root[i] = i;
            rank[i] = 1;
        }
    }

    int find(int x);

    void unionSet(int x, int y);

    bool connected(int x, int y);

private:
    std::vector<int> root;
    std::vector<int> rank;
};