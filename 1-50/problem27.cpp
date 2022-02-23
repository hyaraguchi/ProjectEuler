#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_prime(ll n) {
    if (n <= 1) return false;
    else {
        for (ll i = 2; i*i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}

int main() {
    ll mx_n = -1;
    ll ans = -1;
    for (ll a = -999; a <= 999; a++) {
        for (ll b = -1000; b <= 1000; b++) {
            ll n = 0;
            while (is_prime(n*n + a*n + b)) {
                n++;
            }
            n--;
            if (mx_n < n) {
                mx_n = n;
                ans = a*b;
            }
        }
    }
    
    cout << ans << endl;
    
    return 0; 
}
