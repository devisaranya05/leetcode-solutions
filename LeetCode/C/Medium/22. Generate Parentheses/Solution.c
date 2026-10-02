#include <stdlib.h>
#include <string.h>

void backtrack(char **result, char *current, int pos,
               int open, int close, int n, int *returnSize) {
    // If the current string is complete
    if (pos == 2 * n) {
        result[*returnSize] = (char *)malloc((2 * n + 1) * sizeof(char));
        strcpy(result[*returnSize], current);
        (*returnSize)++;
        return;
    }

    // Add '(' if possible
    if (open < n) {
        current[pos] = '(';
        backtrack(result, current, pos + 1, open + 1, close, n, returnSize);
    }

    // Add ')' if valid
    if (close < open) {
        current[pos] = ')';
        backtrack(result, current, pos + 1, open, close + 1, n, returnSize);
    }
}

char** generateParenthesis(int n, int* returnSize) {
    // Maximum number of combinations for n=8 is 1430 (Catalan number)
    char **result = (char **)malloc(2000 * sizeof(char *));
    char *current = (char *)malloc((2 * n + 1) * sizeof(char));

    *returnSize = 0;
    current[2 * n] = '\0';

    backtrack(result, current, 0, 0, 0, n, returnSize);

    free(current);
    return result;
}
