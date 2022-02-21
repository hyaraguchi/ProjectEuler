#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mx = 0;
ll ans = -1;

bool Collatz (ll x, ll cnt) {
    if (x == 1) {
        if (mx < cnt+1) {
            mx = cnt+1;
            return true;
        }
        else return false;
    }
    else if (x % 2 == 0) {
        return Collatz(x/2, cnt+1);
    }
    else {
        return Collatz(3*x+1, cnt+1);
    }
}

int main() {
    for (int i = 1; i <= 1.0e6; i++) {
        if (Collatz(i, 0)) ans = i;
    }

    cout << ans << endl;

    return 0;
}