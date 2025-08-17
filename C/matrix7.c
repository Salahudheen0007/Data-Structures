#include <stdio.h>
#include <stdlib.h>
//sparse matrix

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
    int i;
    printf("Enter the dimensions (rows and columns):\n");
    scanf("%d%d", &s->m, &s->n);
    printf("Enter the number of non-zero elements:\n");
    scanf("%d", &s->num);
    s->ele = (struct Element *)malloc(s->num * sizeof(struct Element));
    printf("Enter the elements (row, column, value) in order (0-based index):\n");
    for (i = 0; i < s->num; i++) {
        scanf("%d%d%d", &s->ele[i].i, &s->ele[i].j, &s->ele[i].x);
        //s->ele[i].i--;  // Adjusting to 0-based index
        //s->ele[i].j--;  // Adjusting to 0-based index
    }
}

void display(struct sparse s) {
    int i, j, k = 0;
    for (i = 0; i < s.m; i++) {
        for (j = 0; j < s.n; j++) {
            if (k < s.num && i == s.ele[k].i && j == s.ele[k].j)
                printf("%d ", s.ele[k++].x);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int main() {
    struct sparse s;
    create(&s);
    display(s);
    free(s.ele); // Don't forget to free the allocated memory
    return 0;
}
