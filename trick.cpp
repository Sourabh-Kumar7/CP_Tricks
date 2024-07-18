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

#include <iostream>
#include <vector>
#include <numeric>
#include <functional>
#include <algorithm>

// iota example
/*
 * Assigns a sequence of values to a range of elements.
 * Description: iota assigns a sequence of values to a range of elements.
 * Expected output: A vector containing the sequence of values.
 */
std::vector<int> iota_example() {
    std::vector<int> v(5);
    std::iota(v.begin(), v.end(), 1);
    return v;
}

// accumulate example
/*
 * Calculates the sum of a range of elements.
 * Description: accumulate calculates the sum of a range of elements.
 * Expected output: The sum of the elements in the range.
 *std::accumulate (sequential, commutative)
 */
int accumulate_example() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    int sum = std::accumulate(v.begin(), v.end(), 0);
    return sum;
}

// reduce example
/*
 * Calculates the sum of a range of elements.
 * Description: reduce calculates the sum of a range of elements.
 * Expected output: The sum of the elements in the range.
 * std::reduce (parallel, non-commutative)
 */
int reduce_example() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    int sum = std::reduce(v.begin(), v.end(), 0);
    return sum;
}

// inner_product example
/*
 * Calculates the inner product (dot product) of two ranges of elements.
 * Description: inner_product calculates the inner product of two ranges of elements.
 * Expected output: The inner product of the two ranges.
 */
int inner_product_example() {
    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = {4, 5, 6};
    int dot_product = std::inner_product(v1.begin(), v1.end(), v2.begin(), 0);
    return dot_product;
}

// partial_sum example
/*
 * Calculates the partial sums of a range of elements.
 * Description: partial_sum calculates the partial sums of a range of elements.
 * Expected output: A vector containing the partial sums.
 */
std::vector<int> partial_sum_example() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::vector<int> partial_sums(v.size());
    std::partial_sum(v.begin(), v.end(), partial_sums.begin());
    return partial_sums;
}

// upper_bound example
/*
 * Returns an iterator pointing to the first element that is greater than a given value.
 * Description: upper_bound returns an iterator pointing to the first element that is greater than a given value.
 * Expected output: An iterator pointing to the first element that is greater than the given value.
 */
std::vector<int>::iterator upper_bound_example() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    auto it = std::upper_bound(v.begin(), v.end(), 3);
    return it;
}

// lower_bound example
/*
 * Returns an iterator pointing to the first element that is not less than a given value.
 * Description: lower_bound returns an iterator pointing to the first element that is not less than a given value.
 * Expected output: An iterator pointing to the first element that is not less than the given value.
 */
std::vector<int>::iterator lower_bound_example() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    auto it = std::lower_bound(v.begin(), v.end(), 3);
    return it;
}

int main() {
    // Example usage:
    vector<vector<int>> a = {{1, 2, 3}, {4, 5, 6}};
    printVector(a);
}
