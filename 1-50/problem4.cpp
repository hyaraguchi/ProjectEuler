#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
 *（3桁の整数）*（3桁の整数）で表される、最大の回文数を求めよ。
*/

bool is_palindrome(string str) {
    for (int i = 0; i < str.size()/2; i++) {
        if (str[i] != str[str.size() - 1 - i]) return false;
    }
    return true;
}

int main() {
    vector<int> kaibun;

    for (int i = 100; i <= 999; i++) {
        for (int j = 100; j <= 999; j++) {
            if (is_palindrome(to_string(i * j))) {
                kaibun.push_back(i * j);
            }
        }
    }

    sort(begin(kaibun), end(kaibun), greater<int>());

    cout << kaibun[0] << endl;

    return 0;
}
