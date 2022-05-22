#!/usr/bin/env python3

def isprime(num):
    if num % 2 ==0 and num != 2:
        return 0

    div = 3
    while div * div <= num:
        if num % div == 0:
            return 0
        div += 2
    if num >= 2:
        return 1

count = 0
num_primes = 0

while count <  10000000:
    if isprime(count):
        num_primes += 1
    count += 1

print(f"there are {num_primes} primes from 1 to {count}")
