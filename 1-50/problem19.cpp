#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
 * 【問題】
 * 1900年1月1日は月曜日だった。
 * 20世紀の間に月の初めと重なった日曜日はいくつあるか？
 * 注：20世紀 = 1901年1月1日〜2000年12月31日
 * 
 * 【方針】
 * 1900年1月1日は月曜日 
 * => 1900年1月1日から日数をカウントすれば、合計日数が7で割れるなら日曜日。
 * 
*/

int main() {
    ll ans = 0;
    ll day_cnt = 0;
    for (int year = 1900; year <= 2000; year++) {
        for (int month = 1; month <= 12; month++) {
            if ((day_cnt + 1) % 7 == 0) {
                if (year != 1900) ans++;
            }

            if (month == 2) {
                if (year % 400 == 0) day_cnt += 29;
                else if (year % 100 == 0) day_cnt += 28;
                else if (year % 4 == 0) day_cnt += 29;
                else day_cnt += 28;
            }
            else if (month == 4 || month == 6 || month == 9 || month == 11) {
                day_cnt += 30;
            }
            else {
                day_cnt += 31;
            }
        }
    }

    cout << ans << endl;
    
    return 0;
}

