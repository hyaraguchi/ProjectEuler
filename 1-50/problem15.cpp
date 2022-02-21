#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll ans = 1;
    for (ll i = 1; i <= 20; i++) {
        ans *= (20 + i);
        ans /= i;
    }
    cout << ans << endl;
    return 0;
}