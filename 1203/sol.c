#include <stdio.h>
#include <stdlib.h>
#define OOM 123

typedef long long LL;

LL *primes = NULL;
int num_primes = 0;
size_t alloc_size;

void append_prime(LL);
void next_prime();
void print_factors(LL);

int main(void) {
    primes = (LL *)malloc(100 * sizeof(LL));
    alloc_size = 100 * sizeof(LL);
    append_prime(2);
    append_prime(3);

    LL n;
    for (scanf("%lld", &n); n != -1; scanf("%lld", &n)) {
        print_factors(n);
    }
    free(primes);
}

void append_prime(LL elem) {
    if (num_primes * sizeof(LL) >= alloc_size) {
        primes = (LL *)realloc(primes, 2 * alloc_size);
        alloc_size *= 2;
        if (!primes) {
            exit(OOM);
        }
    }
    primes[num_primes++] = elem;
}

void next_prime() {
    LL next = primes[num_primes - 1] + 2;
    for (;; next += 2) {
        int i;
        for (i = 0; i < num_primes; i++) {
            if (primes[i] * primes[i] > next) {
                append_prime(next);
                return;
            } else if (next % primes[i] == 0) {
                break;
            }
        }
    }
}

void print_factors(LL n) {
    int i;
    for (i = 0; i < num_primes; i++) {
        if (primes[i] * primes[i] > n) {
            break;
        } else if (i == num_primes - 1) {
            next_prime();
        }
        while (n % primes[i] == 0) {
            printf("    %lld\n", primes[i]);
            n /= primes[i];
        }
    }

    if (n > 1) {
        printf("    %lld\n", n);
    }

    printf("\n");
}
