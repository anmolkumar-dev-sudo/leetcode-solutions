#include <bits/stdc++.h>
using namespace std;
vector<int> getPrimes(long long n) {
    int lim = sqrt(n);

    vector<bool> isPrime(lim + 1, true);
    vector<int> primes;

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= lim; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= lim; j += i)
                isPrime[j] = false;
        }
    }

    for (int i = 2; i <= lim; i++) {
        if (isPrime[i])
            primes.push_back(i);
    }

    return primes;
}
int main() {
    vector<int>v=getPrimes(5);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}