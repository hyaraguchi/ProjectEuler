#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::cpp_int;
typedef long long ll;

/*
 * 【問題】
 * 100!の桁和をとれ。
 * 
 * 【方針】
 * 多倍長整数を使う(ズル)
 * 
*/

int digit_sum(cpp_int n) {
    int sum = 0;
    while (n != 0) {
        sum += (int)(n % 10);
        n /= 10;
    }
    return sum;
}

int main() {
    cpp_int fact_N = 1;
    for (cpp_int i = 1; i <= 100; i++) {
        fact_N *= i;
    }

    cout << digit_sum(fact_N) << endl;
    
    return 0;
}