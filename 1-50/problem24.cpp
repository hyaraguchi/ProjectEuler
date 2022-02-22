#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
 * 【問題】
 * {0, 1, ..., 9} の順列のうち1000000番目の数は？
 *
*/

int main() {
    vector<int> v(10);
    iota(v.begin(), v.end(), 0);
    int i = 1;
    do {
       if (i == 1000000) {
           for (int j = 0; j < 10; j++) {
               cout << v[j];
           }
           cout << endl;
       }
       i++;
    } while (next_permutation(v.begin(), v.end()));
    
    return 0; 
}