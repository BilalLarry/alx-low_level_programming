#include <stdio.h>

int fibonacci_sum_even(int limit) {
    int a = 1, b = 2, temp, sum_even = 0;

    while (a <= limit) {
        if (a % 2 == 0) {
            sum_even += a;
        }
        temp = a;
        a = b;
        b += temp;
    }

    return sum_even;
}

int main() {
    int limit = 4000000;
    int result = fibonacci_sum_even(limit);
    printf("%d\n", result);

    return (0);
}

