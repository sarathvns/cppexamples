// prime.h
#ifndef PRIME_H
#define PRIME_H

bool isPrime(int n) {
    if(n <= 1) 
        return false;

    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

#endif // PRIME_H
