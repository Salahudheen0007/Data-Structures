#include <stdio.h>
#include <stdlib.h>
//it takes all elements as inputs and give outputas 3 colomn representation in  sparse matrix

struct Element {
    int i;
    int j;
    int x;
};

struct sparse {
    int m;
    int n;
    int num;
    struct Element *ele;
};

void create(struct sparse *s) {
    int i, j, x, non_zero_count = 0;
    printf("Enter the dimensions (rows and columns):\n");
    scanf("%d%d", &s->m, &s->n);
    s->ele = (struct Element *)malloc(s->m * s->n * sizeof(struct Element));
    
    printf("Enter the elements of the matrix (row by row):\n");
    for (i = 0; i < s->m; i++) {
        for (j = 0; j < s->n; j++) {
            scanf("%d", &x);
            if (x != 0) {
                s->ele[non_zero_count].i = i;
                s->ele[non_zero_count].j = j;
                s->ele[non_zero_count].x = x;
                non_zero_count++;
            }
        }
    }
    s->num = non_zero_count;
}

void display(struct sparse s) {
    printf("Sparse Matrix in 3-column format (row, column, element):\n");
    printf("Row  Column  Element\n");
    for (int k = 0; k < s.num; k++) {
        printf("%4d %6d %8d\n", s.ele[k].i + 1, s.ele[k].j + 1, s.ele[k].x); // Converting back to 1-based index for display
    }
}

int main() {
    struct sparse s;
    create(&s);
    display(s);
    free(s.ele); // Free the allocated memory
    return 0;
}
