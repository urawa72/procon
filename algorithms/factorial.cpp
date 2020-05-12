#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans *= i;
    }
    return ans;
}

int main() {
    int n = 4, k = 3;
    cout << factorial(n) / factorial(k) / factorial(n - k) << endl;
}
