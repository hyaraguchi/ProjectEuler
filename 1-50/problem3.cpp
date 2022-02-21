#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
 * 600,851,475,143 の素因数のうち、最も大きなものの値を求めよ。
*/

ll num = 600851475143;

bool is_prime(ll n) {
    for (ll i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
} 

int main() {
    ll ans = 0;
    for (ll i = sqrt(num); i >= 1; i--) {
        if (num % i == 0 && is_prime(i)) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}