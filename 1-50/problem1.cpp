#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
 * 1000未満の正の整数のうち、3または5で割り切れるものの総和を求めよ。
*/

int main() {
    int ans = 0;
    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) ans += i;
    }
    cout << ans << endl;

    return 0;
}