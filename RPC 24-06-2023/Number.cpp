#include <iostream>
#include <vector>

using namespace std;

vector<bool> sieveOfEratosthenes(long long limit) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (long long i = 2; i * i <= limit; i++) {
        if (isPrime[i]) {
            for (long long j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }

    return isPrime;
}

int main() {
    long long n, k;
    cin >> n >> k;

    vector<long long> avoid_primes(k);
    for (int i = 0; i < k; i++) {
        cin >> avoid_primes[i];
    }

    const long long limit = n + *max_element(avoid_primes.begin(), avoid_primes.end());
    vector<bool> isPrime = sieveOfEratosthenes(limit);

    long long count = 0;
    long long num = 1;

    while (count < n) {
        if (isPrime[num]) {
            count++;
        }
        else {
            for (long long prime : avoid_primes) {
                if (num % prime == 0) {
                    count--;
                    break;
                }
            }
        }
        num++;
    }

    cout << num - 1 << endl;

    return 0;
}
