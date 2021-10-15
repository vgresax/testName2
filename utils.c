#include <stdio.h>
#include "utils.h"

size_t timer_from(unsigned char from) {
    size_t counter;
    for (unsigned char i = from; i >= 0; --i) {
        ++counter;
        printf("%d", i);
    }
    return counter;
}


// TODO: Implement `power of` function

int custom_pow(int base, int power) {
		if (power == 0) return 1;
		double x = 1;
		for (int i = power; i > 0; i--) {
			x *= base;
		}
    return x;
}
