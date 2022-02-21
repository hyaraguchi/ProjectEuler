#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
 * 1から100までの総和の二乗と、1から100までの二乗の総和の差を求めよ。
*/

const int LIMIT = 100;

int main() {
    ll square_of_sum = pow(LIMIT*(LIMIT+1)/2, 2);
    ll sum_of_square = LIMIT*(LIMIT+1)*(2*LIMIT+1)/6;
    cout << square_of_sum - sum_of_square << endl;

    return 0;
}

