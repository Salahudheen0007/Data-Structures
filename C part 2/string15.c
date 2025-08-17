#include<stdio.h>
#include<stdlib.h>

int main() {
    char A[] = "decimal";
    char B[] = "medical";
    int H[26] = {0};
    int i;

    // Check if lengths of A and B are the same
    for (i = 0; A[i] != '\0'; i++);
    int lenA = i;

    for (i = 0; B[i] != '\0'; i++);
    int lenB = i;

    if (lenA != lenB) {
        printf("not anagram\n");
        return 0;
    }

    // Increment the hash table based on string A
    for (i = 0; A[i] != '\0'; i++) {
        H[A[i] - 'a']++;
    }

    // Decrement the hash table based on string B
    for (i = 0; B[i] != '\0'; i++) {
        H[B[i] - 'a']--;
        if (H[B[i] - 'a'] < 0) {
            printf("not anagram\n");
            return 0;
        }
    }

    // If all counts are zero, they are anagrams
    printf("anagram\n");
    return 0;
}
