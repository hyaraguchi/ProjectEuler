#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
 * 50桁の数字100個の総和の上位10桁を求めよ。
 * (数字は"problem13_numbers.txt"に与えられている)
*/

int main() {
    ifstream ifs("problem13_numbers.txt");
    if (!ifs) return -1;

    string nums[100];
    string str;
    int i = 0;
    while (getline(ifs, str)) {
        nums[i] = str;
        i++;
    }

    ll top10 = 0;
    for (int i = 0; i < 100; i++) {
        top10 += stol(nums[i].substr(0, 10));
    }

    ll kuriagari = 0;
    for (int i = 4; i >= 1; i--) {
        for (int j = 0; j < 100; j++) {
            kuriagari += stol(nums[j].substr(i*10, 10));
        }
        kuriagari /= 1.0e10;
    }
    
    ll ans = top10 + kuriagari;

    cout << to_string(ans).substr(0, 10) << endl;
}

