/**
 *    author: put your name here
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define endl '\n'

typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;

#ifndef ONLINE_JUDGE
    #include "debug.h"
#else 
    #define deb(x...)
#endif

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r",stdin);
        freopen("output.txt", "w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    pbds s;
    return 0;
}