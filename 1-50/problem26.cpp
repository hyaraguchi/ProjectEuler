#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::cpp_int;
typedef long long ll;

/*
 * 【問題】
 * d < 1000 を満たす 1/d のうち循環節が最長となるdを求めよ(表記は10進数とする)。
 * 例： 1/6 = 0.16666.... = 0.1(6) → 循環節の長さ = 1
 *
 * 【方針】
 * 1/d が純循環小数 → 9999...9 が d で割り切れる。
 * 999...9 の桁数が循環節の長さ。
 * 
*/

int main() {
    ll max_i = -1;
    ll ans_d = -1;
    for (cpp_int d = 2; d < 1000; d++) {
        cpp_int x = 1;
        for (cpp_int i = 1; i <= 1000; i++) {
            x *= 10;
            if ((x-1) % d == 0) {
                if (max_i < i) {
                    max_i = (ll)i;
                    ans_d = (ll)d;
                }
                break;
            }
        }
    }

    cout << ans_d << endl;
    
    return 0; 
}
