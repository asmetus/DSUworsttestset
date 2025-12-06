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

int main(){
    int k;
    cin >> k;
    int n = pow(2,k)+1;
    cout << n << endl;
    vector <vector <int> > test(n, vector <int> (2));
    int adj=1;
    int s=1;
    test[0] = {0,1};
    for(int i=0;i<k;i++){
        for(int j=0;j<adj;j++){
            test[s] = {j, adj+j+1};
            s++;
        }
        adj*=2;
    }
    test[n-1] = {0,1};
    for(int i=0;i<n;i++){
        cout << test[i][0] << ' ' << test[i][1] << endl;
    }
}
