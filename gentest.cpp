#include <iostream>

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

