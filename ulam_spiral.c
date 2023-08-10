#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <math.h>

#define MAX_SIZE 50

bool is_prime(__int128 n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    __int128 sqrt_n = sqrt(n);
    for (__int128 i = 5; i <= sqrt_n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

void ulam_spiral(int size) {
    int spiral[MAX_SIZE][MAX_SIZE] = {0}; // Initialize the spiral to all zeros
    int x = size / 2;
    int y = size / 2;
    __int128 value = 1;
    int direction = 0;
    int step_size = 1;
    int steps_taken = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < step_size; j++) {
            if (is_prime(value)) {
                spiral[y][x] = value;
            }

            switch (direction) {
                case 0: y--; break; // Up
                case 1: x++; break; // Right
                case 2: y++; break; // Down
                case 3: x--; break; // Left
            }

            value++;
            steps_taken++;

            if (steps_taken >= step_size) {
                steps_taken = 0;
                direction = (direction + 1) % 4;
                if (direction % 2 == 0)
                    step_size++;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (spiral[i][j] == 0) {
                printf("    ");
            } else {
                printf("%4lld", (long long)spiral[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter the size of the Ulam Spiral (odd number): ");
    scanf("%d", &size);

    if (size % 2 == 0) {
        printf("Please enter an odd number for the size.\n");
        return 1;
    }

    ulam_spiral(size);
    getch();
    return 0;
}
