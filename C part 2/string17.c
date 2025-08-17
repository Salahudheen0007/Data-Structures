#include <stdio.h>
#include <stdlib.h>

// Function to swap two characters
void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Function to generate permutations
void perm(char S[], int l, int h) {
    if (l == h)
        printf("%s\n", S);
    else {
        for (int i = l; i <= h; i++) {
            swap(&S[l], &S[i]);
            perm(S, l + 1, h);
            swap(&S[l], &S[i]); // Backtrack
        }
    }
}

int main() {
    char S[] = "ABC";
    int n = strlen(S); // Calculate the length of the string
    perm(S, 0, n - 1);
    return 0;
}
