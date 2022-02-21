#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::cpp_int;
typedef long long ll;

int digit_sum(cpp_int n) {
    int sum = 0;
    while (n != 0) {
        sum += (int)(n % 10);
        n /= 10;
    }
    return sum;
}

int main() {
    cpp_int x = 1;
    for (int i = 0; i < 1000; i++) {
        x *= 2;
    }
    
    int ans = digit_sum(x);

    cout << ans << endl;
    
    return 0;
}