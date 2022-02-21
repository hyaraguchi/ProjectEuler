#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
 * ピタゴラスの定理(a^2 + b^2 = c^2)を満たす自然数(a, b, c)の組みのうち、
 * a + b + c = 1000 を満たすものの a*b*c の値を求めよ。 
*/

bool is_pythagorean_triplet(int a, int b, int c) {
    if (pow(a, 2) + pow(b, 2) == pow(c, 2)) return true;
    else return false;
}

int main() {
    int ans = 0;
    for (int i = 1; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            int k = 1000 - j - i;
            if (k >= j && is_pythagorean_triplet(i, j, k)) {
                //cout << i << " " << j << " " << k << endl;
                ans = i * j * k;
            }
        }
    }

    cout << ans << endl;

    return 0;
}