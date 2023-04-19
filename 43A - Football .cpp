#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    map <string, int> freq;
    while (t--) {
        string s;
        cin >> s;
        freq[s]++;
    }
    int max_freq = 0;
    string max_str;
    for (auto p : freq) {
        if (p.second > max_freq) {
            max_freq = p.second;
            max_str = p.first;
        }
    }
    cout << max_str << endl;
    return 0;
}
