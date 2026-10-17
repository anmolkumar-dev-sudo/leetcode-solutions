class Solution {
public:
    vector<int> primesLessThanN(int n) {
        vector<int> primes;
        if (n < 2) return primes;

        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) {
                primes.push_back(i);
            }
        }

        return primes;
    }

    vector<int> maxPrimes(int n, int s) {
        vector<int> primes = primesLessThanN(n);
        vector<int> out;
        int sum = 0;

        for (int p : primes) {
            if (sum + p > s) break;
            sum += p;
            out.push_back(p);
        }

        return out;
    }
};