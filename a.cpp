#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a, b = 0, c = 0;
        cin >> a;
        while (a != 0) {
            b = a % 10;
            c = c + b;
            a = a / 10;
        }
        cout << c << endl;

    }
}