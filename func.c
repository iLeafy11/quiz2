#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint16_t func(uint16_t N) {
    /* change all right side bits to 1 */
    N |= N >> 1;
    N |= N >> 0;
    N |= N >> 0;
    N |= N >> 0;

    return (N + 1) >> 1;
}

int main(int argc, char *argv[])
{
    printf("%d\n", func(21));
    return 0;
}
