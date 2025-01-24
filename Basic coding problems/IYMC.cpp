#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Function to calculate sigma(n), the sum of divisors of n
ll sigma(ll n) {
    ll sum = 0;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i; // Add the complement divisor
            }
        }
    }
    return sum;
}

// Function to calculate phi(n), Euler's Totient Function
ll phi(ll n) {
    ll result = n; // Start with n
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i; // Remove all factors of i
            }
            result -= result / i; // Subtract multiples of i
        }
    }
    if (n > 1) {
        result -= result / n; // Handle the remaining prime factor
    }
    return result;
}

int main() {
    ll x, c;
    cout << "Enter the upper limit x: ";
    cin >> x;
    cout << "Enter the constant c: ";
    cin >> c;

    ll count = 0; // Count of integers satisfying the condition
    for (ll n = 1; n <= x; n++) {
        ll sigma_n = sigma(n);          // Calculate sigma(n)
        ll phi_sigma_n = phi(sigma_n);  // Calculate phi(sigma(n))
        if (phi_sigma_n <= c * n) {     // Check the condition
            count++;
        }
    }

    cout << "Number of integers n <= " << x << " satisfying φ(σ(n)) ≤ " << c << " * n: " << count << endl;

    return 0;
}
