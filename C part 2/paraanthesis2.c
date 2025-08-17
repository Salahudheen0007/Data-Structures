#include<stdio.h>
#include<stdlib.h>

struct Stack {
    char data;
    struct Stack *next;
} *top = NULL;

void push(char x) {
    struct Stack *t;
    t = (struct Stack *)malloc(sizeof(struct Stack));
    if (t == NULL) {
        printf("stack is full");
        return;
    } else {
        t->data = x;
        t->next = top;
        top = t;
    }
}

char pop() {
    struct Stack *t;
    char x = -1;
    if (top == NULL) {
        printf("stack is empty");
    } else {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}

void Display() {
    struct Stack *p;
    p = top;
    while (p) {
        printf("%c ", p->data);
        p = p->next;
    }
    printf("\n");
}

int isMatchingPair(char left, char right) {
    if (left == '(' && right == ')') return 1;
    if (left == '{' && right == '}') return 1;
    if (left == '[' && right == ']') return 1;
    return 0;
}

int isBalanced(char *exp) {
    int i;
    for (i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            push(exp[i]);
        } else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if (top == NULL) {
                return 0;
            } else if (!isMatchingPair(pop(), exp[i])) {
                return 0;
            }
        }
    }
    return top == NULL;
}

int main() {
    char *exp = "{[(a+b)+c]*d}}";
    printf("%d ", isBalanced(exp));
    return 0;
}
