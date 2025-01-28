#include <iostream>
#define ll long long
#define mod 1000000007
using namespace std;

void multiply(ll a[2][2], ll b[2][2]) {
    a[0][0] = (a[0][0] * b[0][0] + a[0][1] * b[1][0]) % mod;
    a[0][1] = (a[0][0] * b[0][1] + a[0][1] * b[1][1]) % mod;
    a[1][0] = (a[1][0] * b[0][0] + a[1][1] * b[1][0]) % mod;
    a[1][1] = (a[1][0] * b[0][1] + a[1][1] * b[1][1]) % mod;
}

void power(ll mat[2][2], ll n) {
    if (n == 0 || n == 1) return;

    ll base[2][2] = {{1, 1}, {1, 0}};
    power(mat, n / 2);
    multiply(mat, mat); 

    if (n % 2 != 0) {
        multiply(mat, base);
    }
}

ll fibonacci(ll n) {
    if (n == 0) return 0;

    ll mat[2][2] = {{1, 1}, {1, 0}};
    power(mat, n - 1);

    return mat[0][0];
}

int main() {
    ll n;
    cin >> n;

    cout << fibonacci(n) << endl;
    return 0;
}
