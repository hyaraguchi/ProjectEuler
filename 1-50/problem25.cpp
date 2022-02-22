#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::cpp_int;
typedef long long ll;

/*
 * 【問題】
 * 初めて1000桁となるフィボナッチ数は何番目？
 *
*/

int main() {
    cpp_int F_n2 = 1;
    cpp_int F_n1 = 1;
    cpp_int F_n = F_n1 + F_n2;
    int index = 3;
    while (F_n.str().length() < 1000) {
        cpp_int tmp = F_n;
        F_n2 = F_n1;
        F_n = F_n + F_n1;
        F_n1 = tmp;
        index++;
    }

    cout << index << endl;
    
    return 0; 
}