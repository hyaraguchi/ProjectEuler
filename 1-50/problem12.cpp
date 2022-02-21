#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
 * n番目の三角数は1からnまでの整数の和によって与えられる。
 * 三角数の中で約数の個数が初めて500を超える数を求めよ。
*/

vector<int> divisor(int n) {
    vector<int> ret;
    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) {
                ret.push_back(n/i);
            }
        }
    }
    sort(begin(ret), end(ret));
    return ret;
}

int main() {
    ll i = 1;
    while (true) {
        ll ith_triangle = i*(i+1)/2;
        vector<int> div_of_i = divisor(ith_triangle);
        
        if (div_of_i.size() > 500) break;
        else i++;
    }

    cout << i*(i+1)/2 << endl;
}