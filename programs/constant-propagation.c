// C program for constant propagation

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void input();
void output();
void change(int p, char *res);
void constant();

struct expr {
    char op[2], op1[5], op2[5], res[5];
    int flag;  // to mark whether the expression has been optimized out
} arr[10];

int n;  // number of expressions

void main() {
    input();
    constant();
    output();
}

void input() {
    int i;
    printf("Enter the maximum number of expressions: ");
    scanf("%d", &n);
    printf("Enter the input (format: op op1 op2 result):\n");

    for (i = 0; i < n; i++) {
        scanf("%s %s %s %s", arr[i].op, arr[i].op1, arr[i].op2, arr[i].res);
        arr[i].flag = 0;
    }
}

void constant() {
    int i, op1, op2, res;
    char op, res1[5];

    for (i = 0; i < n; i++) {
        // Check if both operands are digits or if it's an assignment (op "=")
        if ((isdigit(arr[i].op1[0]) && isdigit(arr[i].op2[0])) || strcmp(arr[i].op, "=") == 0) {
            // Convert string operands to integers
            op1 = atoi(arr[i].op1);
            op2 = atoi(arr[i].op2);
            op = arr[i].op[0];

            // Perform the operation based on the operator
            switch (op) {
                case '+': res = op1 + op2; break;
                case '-': res = op1 - op2; break;
                case '*': res = op1 * op2; break;
                case '/': res = op1 / op2; break;
                case '=': res = op1; break;  // For assignments
            }

            // Store the result as a string
            sprintf(res1, "%d", res);

            // Mark this expression as replaced (optimized out)
            arr[i].flag = 1;

            // Propagate the constant to subsequent expressions
            change(i, res1);
        }
    }
}

void output() {
    int i;
    printf("\nOptimized code is:\n");
    for (i = 0; i < n; i++) {
        if (!arr[i].flag) {
            printf("%s %s %s %s\n", arr[i].op, arr[i].op1, arr[i].op2, arr[i].res);
        }
    }
}

// Function to replace the results in subsequent expressions
void change(int p, char *res) {
    int i;
    for (i = p + 1; i < n; i++) {
        if (strcmp(arr[p].res, arr[i].op1) == 0) {
            strcpy(arr[i].op1, res);
        }
        if (strcmp(arr[p].res, arr[i].op2) == 0) {
            strcpy(arr[i].op2, res);
        }
    }
}
