#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
 * 2,000,000未満の素数の総和を求めよ。 
*/

const int LIMIT = 2000000;

bool is_prime(ll n) {
    for (ll i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
} 

int main() {
    ll ans = 0;
    for (int i = 2; i < LIMIT; i++) {
        if (is_prime(i)) ans += i;
    }
    cout << ans << endl;

    return 0;
}