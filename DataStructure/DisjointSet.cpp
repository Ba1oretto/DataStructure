#include <vector>
#include <iostream>
#include "QuickFind.h"
#include "QuickUnion.h"

using namespace std;

// Test Case
int main() {
    // for displaying booleans as literal strings, instead of 0 and 1
    cout << boolalpha;
    cout << "QuickFind" << endl;
    QuickFind qf(10);
    // 1-2-5-6-7 3-8-9 4
    qf.unionSet(1, 2);
    qf.unionSet(2, 5);
    qf.unionSet(5, 6);
    qf.unionSet(6, 7);
    qf.unionSet(3, 8);
    qf.unionSet(8, 9);
    cout << qf.connected(1, 5) << endl;  // true
    cout << qf.connected(5, 7) << endl;  // true
    cout << qf.connected(4, 9) << endl;  // false
    // 1-2-5-6-7 3-8-9-4
    qf.unionSet(9, 4);
    cout << qf.connected(4, 9) << endl;  // true

    cout << "\nQuickUnion" << endl;
    QuickUnion qu(10);
    // 1-2-5-6-7 3-8-9 4
    qu.unionSet(1, 2);
    qu.unionSet(2, 5);
    qu.unionSet(5, 6);
    qu.unionSet(6, 7);
    qu.unionSet(3, 8);
    qu.unionSet(8, 9);
    cout << qu.connected(1, 5) << endl;  // true
    cout << qu.connected(5, 7) << endl;  // true
    cout << qu.connected(4, 9) << endl;  // false
    // 1-2-5-6-7 3-8-9-4
    qu.unionSet(9, 4);
    cout << qu.connected(4, 9) << endl;  // true

    return 0;
}