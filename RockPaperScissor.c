#include <stdio.h>
#include <string.h> // Include for strcmp and strcpy_s

void determineWinner(char player1[], char player2[], char result[], size_t result_size) {
    if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) {
        strcpy_s(result, result_size, "Player1");
    }
    else {
        strcpy_s(result, result_size, "Invalid");
    }
}

int main() {
    char player1[] = "Rock";
    char player2[] = "Scissors";
    char result[10]; // Ensure result has enough space

    determineWinner(player1, player2, result, sizeof(result)); // Pass buffer size
    printf("Result: %s\n", result);

    return 0;
}
