#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
 * 10,001番目の素数を求めよ。
*/

const int LIMIT = 10001;

bool is_prime(ll n) {
    for (ll i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
} 

int main() {
    vector<ll> primes;
    ll i = 2;
    while (primes.size() < LIMIT) {
        if (is_prime(i)) primes.push_back(i);
        i++;
    }
    cout << primes[LIMIT - 1] << endl;

    return 0;
}