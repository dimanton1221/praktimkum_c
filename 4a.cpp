// 4a .Penambahan (P1 + P2 = 3x9
//  + 6x8
//  + 12x7 + 5x5 + 3x4
//  + 3x3
//  + 2x2 + 25) 

#include <stdio.h>
#include <stdlib.h>

#define MAX_DEGREE 10

typedef struct {
    int degree;
    int coef[MAX_DEGREE + 1];
} Polynomial;

void addPolynomial(const Polynomial *p1, const Polynomial *p2, Polynomial *result) {
    int i, maxDegree;

    if (p1->degree > p2->degree) {
        maxDegree = p1->degree;
    } else {
        maxDegree = p2->degree;
    }

    result->degree = maxDegree;

    for (i = 0; i <= maxDegree; i++) {
        result->coef[i] = p1->coef[i] + p2->coef[i];
    }
}

void printPolynomial(const Polynomial *p) {
    int i;

    for (i = p->degree; i >= 0; i--) {
        if (p->coef[i] != 0) {
            if (i == p->degree) {
                printf("%dx%d", p->coef[i], i);
            } else {
                printf(" + %dx%d", p->coef[i], i);
            }
        }
    }

    printf("\n");
}

int main() {
    Polynomial p1 = {8, {6, 8, 0, 5, 0, 0, 0, 0, 15}};
    Polynomial p2 = {9, {3, 0, 4, 0, 3, 2, 0, 2, 10, 0}};
    Polynomial result;

    addPolynomial(&p1, &p2, &result);

    printf("P1 + P2 = ");
    printPolynomial(&result);

    return 0;
}
