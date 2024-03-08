#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int conversao(string str) {
    int n = 0;
    for (char c : str) {
        n = n * 26 + (c - 'A' + 1);
    }
    return n;
}


int main() {
    string s;
    cin >> s;
    cout << conversao(s);
}
