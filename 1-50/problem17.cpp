#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
 * 1から1000までを英語表記した時の文字数を答えよ。
*/

string hoge[20] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                 "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string fuga[10] = {"", "" , "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
string hundred = "hundred";
string and_st = "and";
string one = "one";
string thousand = "thousand";

int main() {

    ll ans = 0;

    for (int i = 1; i <= 19; i++) {
        ans += hoge[i].length();
    }
    for (int i = 20; i <= 99; i++) {
        ans += fuga[i/10].length() + hoge[i%10].length();
    }
    for (int i = 100; i <= 999; i++) {
        if (i % 100 == 0) {
            ans +=  hoge[i/100].length() + hundred.length();
        }
        else if (i % 100 <= 19) {
            ans +=  hoge[i/100].length() + hundred.length() + and_st.length() + hoge[i%100].length();
        }
        else {
            ans += hoge[i/100].length() +  hundred.length() + and_st.length() + fuga[(i%100)/10].length() + hoge[(i%100)%10].length();
        }
    }
    ans += one.length() + thousand.length();

    cout << ans << endl;


    return 0;
}

