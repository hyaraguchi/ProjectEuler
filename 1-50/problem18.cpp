#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ifstream ifs("problem18_numbers.txt");
    if (!ifs) return -1;

    ll triangle[16][16];
    for (int i = 0; i <= 15; i++) {
        for (int j = 0; j <= 15; j++) {
            triangle[i][j] = 0;
        }
    }
    for (int i = 1; i <= 15; i++) {
        for (int j = 1; j <= i; j++) {
            ifs >> triangle[i][j];
        }
    }

    ll mx_triangle[16][16];
    for (int i = 0; i <= 15; i++) {
        for (int j = 0; j <= 15; j++) {
            mx_triangle[i][j] = 0;
        }
    }
    for (int i = 1; i <= 15; i++) {
        for (int j = 1; j <= i; j++) {
            mx_triangle[i][j] = triangle[i][j] + max(mx_triangle[i-1][j-1], mx_triangle[i-1][j]);
        }
    }

    ll ans = 0;
    for (int j = 0; j <= 15; j++) {
        ans = max(ans, mx_triangle[15][j]);
    }

/*
    for (int i = 1; i <= 15; i++) {
        for (int j = 1; j <= i; j++) {
            cout << mx_triangle[i][j] << " ";
        }
        cout << endl;
    }
*/
    cout << ans << endl;


    return 0;
}

