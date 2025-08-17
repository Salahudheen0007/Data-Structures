#include <stdio.h>
#include <stdlib.h>

// Lower triangular matrix colomn major mapping
struct matrix {
    int *A;
    int n;
};

void set(struct matrix *m, int i, int j, int x) {
    if (i >= j)
        m->A[m->n*(j - 1) - (j-2)*(j-1)/2 + (i-j)] = x;
}

int get(struct matrix m, int i, int j) {
    if (i >= j)
        return m.A[m.n*(j - 1) - (j-2)*(j-1)/2 + (i-j)];
    else
        return 0;
}

void display(struct matrix m) {
    int i, j;
    for (i = 1; i <= m.n; i++) {
        for (j = 1; j <= m.n; j++) {
            if (i >= j) {
                printf("%d ", m.A[m.n*(j - 1) - (j-2)*(j-1)/2 + (i-j)]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
    struct matrix m;
    printf("Enter the dimension: \n");
    scanf("%d", &m.n);
    m.A = (int *)malloc(m.n * (m.n + 1) / 2 * sizeof(int));
    
    int i, j, x;
    printf("Enter the elements: \n");
    for (i = 1; i <= m.n; i++) {
        for (j = 1; j <= m.n; j++) {
            scanf("%d", &x);
            set(&m, i, j, x);
        }
    }

    printf("\n\n");
    display(m);
    
    free(m.A); // Don't forget to free the allocated memory
    return 0;
}
