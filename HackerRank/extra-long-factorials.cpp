#include<bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<endl;
#define br cout<<endl;
#define mod 998244353
using namespace std;

string multiply(string num, int x) {
    int carry = 0;
    for (int i = num.size() - 1; i >= 0; i--) {
        int prod = (num[i] - '0') * x + carry;
        num[i] = (prod % 10) + '0';
        carry = prod / 10;
    }
    while (carry) {
        num.insert(num.begin(), (carry % 10) + '0');
        carry /= 10;
    }
    return num;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 20;
    string result = "1";
    for (int i = 2; i <= n; i++)
        result = multiply(result, i);

    p(result)
    return 0;
}

