#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
 * 【問題】
 *  d(n)をnの約数の総和とする(ただしnは除く)。
 *  d(a) = b かつ d(b) = a (ただし a != b)であるようなペアを「友愛数(amicable numbers)」と呼ぶ。
 *  10000未満の友愛数の総和を求めよ。
 * 
*/

ll divisor_sum(ll n) {
    vector<ll> ret;
    for (ll i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) {
                ret.push_back(n/i);
            }
        }
    }
    sort(begin(ret), end(ret));
    ll a = 0;
    for (int i = 0; i < ret.size() - 1; i++) {
        a += ret[i];
    }
    return a;
}

int main() {
    ll ans = 0;
    for (ll i = 2; i < 10000; i++) {
        ll d_i = divisor_sum(i);
        if (i != d_i && i == divisor_sum(d_i)) {
            ans += i;
        }
    }

    cout << ans << endl;
    
    return 0;
}