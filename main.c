#include <stdio.h>
#define COUNT 10000000

int isprime(int n){
    if (n%2==0 && n!=2)
      return 0;

    int div =3;
    while(div * div <= n) {
      if (n% div == 0)
        return 0;
      div += 2;
    };
    if(n>=2)
      return 1;
};

int main() {
  int num_primes = 0;
  int i = 0;
  while (i <= COUNT) {
    num_primes += isprime(i);
    i ++;
  }
  printf("there are %d primes from 1 to 10000000\n", num_primes);
  return 0;
}
