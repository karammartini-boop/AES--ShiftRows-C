/*
 * AES ShiftRows and InvShiftRows Implementation
 * Course: Information Security
 * Language: C
 */

#include <stdio.h>

#define SIZE 4

/* Print the AES State */
void printState(unsigned char state[SIZE][SIZE]) {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%02X ", state[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

/* ShiftRows operation */
void shiftRows(unsigned char state[SIZE][SIZE]) {
    unsigned char temp;

    /* Row 1: shift left by 1 */
    temp = state[1][0];
    state[1][0] = state[1][1];
    state[1][1] = state[1][2];
    state[1][2] = state[1][3];
    state[1][3] = temp;

    /* Row 2: shift left by 2 */
    temp = state[2][0];
    state[2][0] = state[2][2];
    state[2][2] = temp;

    temp = state[2][1];
    state[2][1] = state[2][3];
    state[2][3] = temp;

    /* Row 3: shift left by 3 */
    temp = state[3][3];
    state[3][3] = state[3][2];
    state[3][2] = state[3][1];
    state[3][1] = state[3][0];
    state[3][0] = temp;
}

/* Inverse ShiftRows operation */
void invShiftRows(unsigned char state[SIZE][SIZE]) {
    unsigned char temp;

    /* Row 1: shift right by 1 */
    temp = state[1][3];
    state[1][3] = state[1][2];
    state[1][2] = state[1][1];
    state[1][1] = state[1][0];
    state[1][0] = temp;

    /* Row 2: shift right by 2 */
    temp = state[2][0];
    state[2][0] = state[2][2];
    state[2][2] = temp;

    temp = state[2][1];
    state[2][1] = state[2][3];
    state[2][3] = temp;

    /* Row 3: shift right by 3 */
    temp = state[3][0];
    state[3][0] = state[3][1];
    state[3][1] = state[3][2];
    state[3][2] = state[3][3];
    state[3][3] = temp;
}

/* Main function with test */
int main() {
    unsigned char state[SIZE][SIZE] = {
        {0x00, 0x04, 0x08, 0x0C},
        {0x01, 0x05, 0x09, 0x0D},
        {0x02, 0x06, 0x0A, 0x0E},
        {0x03, 0x07, 0x0B, 0x0F}
    };

    printf("Original State:\n");
    printState(state);

    shiftRows(state);
    printf("After ShiftRows:\n");
    printState(state);

    invShiftRows(state);
    printf("After InvShiftRows:\n");
    printState(state);

    return 0;
}
