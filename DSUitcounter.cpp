#include <iostream>
#include <algorithm>
#include <random>
#include <utility>
#include <vector>
#include <string>
#include <cstdio>
#include <set>
#include <cstdlib>
#include <fstream>
#include <climits>
#include <cmath>
#include <deque>
#include <map>
#include <ctime>
#include <random>
#include <unordered_set>
#include <chrono>
#include <queue>
#include <unordered_map>
#include <cassert>
#include <bitset>

using namespace std;

int ttime=0;

class Dsu {
public:
    vector <int> p;
    int n;
    Dsu (int n_) {
        n = n_;
        p = vector <int> (n);
        iota (p.begin (), p.end (), 0);
    }

    int root (int v) {
        if (p[v] == v)  return v;
        ttime++;
        return p[v] = root (p[v]);
    }

    void unite (int u, int v) {
        u = root (u);
        v = root (v);
        if (u == v) return;
        p[u] = v;
    }
};

signed main(){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio();
    int N;
    cin >> N;
    Dsu r(N);
    for(int i=0;i<N;i++){
        int a,b;
        cin >> a >> b;
        r.unite(a, b);
    }
    cout << ttime << endl;
}
