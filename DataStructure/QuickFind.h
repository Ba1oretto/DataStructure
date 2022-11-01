#pragma once
#include <vector>

class QuickFind
{
public:
    QuickFind(int size) : root(size) {
        for (int i = 0; i < size; i++) root[i] = i;
    }

    int find(int x);

    void unionSet(int x, int y);

    bool connected(int x, int y);

private:
    std::vector<int> root;
};