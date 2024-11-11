// C program to demonstrate Shift Reduce Parsing technique for the grammar rules: E->E+T | T, T->T*F | F,  F->(E) | id


#include <stdio.h>
#include <string.h>

int k = 0, z = 0, i = 0, j = 0, c = 0;
char a[16], ac[20], stk[15], act[10];

void check();

int main() {
    // Display the grammar
    puts("GRAMMAR is:");
    puts("E -> E + E");
    puts("E -> E * E");
    puts("E -> (E)");
    puts("E -> id");
    
    // Input the string to be parsed
    printf("\nEnter input string: ");
    fgets(a, sizeof(a), stdin); // Use fgets instead of gets for safe input
    
    // Remove trailing newline character from input if any
    size_t len = strlen(a);
    if (len > 0 && a[len - 1] == '\n') {
        a[len - 1] = '\0';
    }

    c = strlen(a); // Length of input string
    strcpy(act, "SHIFT->");
    puts("stack \t input \t action");

    // Main parsing loop: shift each symbol
    for (k = 0, i = 0, j = 0; j < c; k++, i++, j++) {
        // Shift operation for 'id'
        if (a[j] == 'i' && a[j + 1] == 'd') {
            stk[i] = a[j];
            stk[i + 1] = a[j + 1];
            stk[i + 2] = '\0'; // Null-terminate the stack string
            a[j] = ' '; // Mark as shifted
            a[j + 1] = ' ';
            printf("\n$%s\t%s$\t%sid", stk, a, act);
            check(); // Perform reductions
            i++;     // Increment i for 'id'
        }
        // Shift operation for other symbols
        else {
            stk[i] = a[j];
            stk[i + 1] = '\0'; // Null-terminate the stack string
            a[j] = ' '; // Mark as shifted
            printf("\n$%s\t%s$\t%ssymbols", stk, a, act);
            check(); // Perform reductions
        }
    }

    return 0;
}

// Reduction function
void check() {
    strcpy(ac, "REDUCE TO E"); // Set action to REDUCE TO E

    // Reduction for 'id' -> E
    for (z = 0; z <= i; z++) {
        if (stk[z] == 'i' && stk[z + 1] == 'd') {
            stk[z] = 'E';
            stk[z + 1] = '\0'; // Null-terminate after reduction
            printf("\n$%s\t%s$\t%s", stk, a, ac);
            j++; // Skip the next character in input as 'id' is handled
        }
    }

    // Reduction for E + E -> E
    for (z = 0; z <= i; z++) {
        if (stk[z] == 'E' && stk[z + 1] == '+' && stk[z + 2] == 'E') {
            stk[z] = 'E';
            stk[z + 1] = '\0';
            stk[z + 2] = '\0'; // Null-terminate after reduction
            printf("\n$%s\t%s$\t%s", stk, a, ac);
            i -= 2; // Adjust stack index after reduction
        }
    }

    // Reduction for E * E -> E
    for (z = 0; z <= i; z++) {
        if (stk[z] == 'E' && stk[z + 1] == '*' && stk[z + 2] == 'E') {
            stk[z] = 'E';
            stk[z + 1] = '\0';
            stk[z + 2] = '\0'; // Null-terminate after reduction
            printf("\n$%s\t%s$\t%s", stk, a, ac);
            i -= 2; // Adjust stack index after reduction
        }
    }

    // Reduction for (E) -> E
    for (z = 0; z <= i; z++) {
        if (stk[z] == '(' && stk[z + 1] == 'E' && stk[z + 2] == ')') {
            stk[z] = 'E';
            stk[z + 1] = '\0';
            stk[z + 2] = '\0'; // Null-terminate after reduction
            printf("\n$%s\t%s$\t%s", stk, a, ac);
            i -= 2; // Adjust stack index after reduction
        }
    }
}
