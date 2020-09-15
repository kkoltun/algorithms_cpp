//
// Created by kkoltun on 07.11.19.
//
#include <numeric>

#include "eratosthenes.h"

void check(std::vector<bool> &primes, unsigned numberToCheck) {
    unsigned currentNumber = numberToCheck * numberToCheck;
    unsigned max = primes.size();

    while (currentNumber <= max) {
        primes[currentNumber] = false;
        currentNumber += numberToCheck;
    }
}

std::vector<unsigned> generatePrimesLowerThan(unsigned maxNumber) {
    unsigned start = 2;
    std::vector<bool> isPrime(maxNumber, true);
    std::vector<unsigned> primeNumbers = std::vector<unsigned>();

    for (unsigned currentNumber = start; currentNumber < maxNumber; ++currentNumber) {
        if (!isPrime[currentNumber]) {
            continue;
        }

        for (unsigned notPrime = currentNumber * currentNumber; notPrime < maxNumber; notPrime += currentNumber) {
            isPrime[notPrime] = false;
        }
        primeNumbers.push_back(currentNumber);
    }
    return primeNumbers;
}
