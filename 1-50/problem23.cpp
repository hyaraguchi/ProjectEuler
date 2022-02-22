#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
 * 【問題】
 * 二つの過剰数の和で表せない正の整数の総和を求めよ。
 * 注1：過剰数 = その数自身を除く約数の和が、その数自身より大きい自然数。
 * 注2： 28123 より大きい自然数が二つの過剰数で表せることは解析的に示せる。
 * 
 * 【方針】
 * 28123より小さい過剰数を列挙。
 * O(N^2)で28123より小さい二つの過剰数で表せる数を列挙。
 * => 二つの過剰数で表せない数もわかる。
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
    vector<ll> abundant;
    for (int i = 2; i < 28123; i++) {
        if (i < divisor_sum(i)) abundant.push_back(i);
    }

    bool CanBeWritten[28124];
    for (int i = 0; i <= 28123; i++) CanBeWritten[i] = false;

    for (int i = 0; i < abundant.size(); i++) {
        for (int j = 0; j < abundant.size(); j++) {
            if (abundant[i] + abundant[j] <= 28123)
            CanBeWritten[abundant[i] + abundant[j]] = true; 
        }
    }

    ll ans = 0;
    for (int i = 1; i <= 28123; i++) {
        if (!CanBeWritten[i]) ans += i;
    }

    cout << ans << endl;    
    
    return 0; 
}