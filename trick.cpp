#include <bits/stdc++.h>

using namespace std;

// Macros
#define ll long long
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define mod 1000000007

// Optimized functions
ll power(ll x, ll y) {
    ll res = 1;
    while (y) {
        if (y & 1) res = (res * x) % mod;
        x = (x * x) % mod;
        y >>= 1;
    }
    return res;
}

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// Smart tricks
void swap(ll &a, ll &b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

bool isPrime(ll n) {
    if (n <= 1) return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Output trick
void printVector(vector<vector<int>> &a) {
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++) {
            cout << a[i][j] << " \n"[j == a[i].size() - 1];
        }
    }
}

int main() {
    // Example usage:
    vector<vector<int>> a = {{1, 2, 3}, {4, 5, 6}};
    printVector(a);
}
