#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ifstream ifs("problem22_names.txt");
    if (!ifs) return -1;

    string str_input;
    ifs >> str_input;
    replace(str_input.begin(), str_input.end(), ',', ' ');
    replace(str_input.begin(), str_input.end(), '"', ' ');

    vector<string> names;
    stringstream buf(str_input);
    string tmp_input;
    while (buf >> tmp_input) {
        if (!tmp_input.empty()) names.push_back(tmp_input);
    }

    sort(names.begin(), names.end());

    ll ans = 0;    
    for (ll i = 0; i < names.size(); i++) {
        ll worth = 0;
        for (int j = 0; j < names[i].length(); j++) {
            worth += (int)(names[i][j]) - (int)('A') + 1;
        }
        ans += worth * (i+1);
    }

    cout << ans << endl;
    
    return 0; 
}