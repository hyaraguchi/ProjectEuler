#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
 * 1, 2から始まるフィボナッチ数列を考える。
 * （例： 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...）
 * この数列のうち、値が4,000,000を超えず、偶数の値をもつ項の総和を求めよ。
*/

const int LIMIT = 4 * 1.0e6;

int main() {
    int ans = 0;
    int pre_i = 1;
    
    for (int i = 1; i <= LIMIT;) {
        if (i % 2 == 0) ans += i;
        int val_i = i;
        i += pre_i;
        pre_i = val_i;
    }

    cout << ans << endl;

    return 0;
}