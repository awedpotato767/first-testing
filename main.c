#include <stdio.h>
#define COUNT 10000000

int isprime(int n){

    int div =3;
    while(div * div <= n) {
      if (n% div == 0)
        return 0;
      div += 2;
    };

    return 1;
};

int main() {
  int num_primes = 0;
  int counter =0;
  int i = 3;
  while (i <= COUNT) {
      num_primes += isprime(i);
    i += 2;
    counter ++;
  };
  num_primes += 1;
  printf("%d\n", counter);
  printf("there are %d primes from 1 to 10000000\n", num_primes);
  return 0;
}
