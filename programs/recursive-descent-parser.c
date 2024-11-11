// recursive-descent-parser

#include <stdio.h>
#include <string.h>

// Function declarations for each grammar rule
void E();
void E_prime();
void T();
void T_prime();
void F();

// Global variables for input string and parsing index
char input[20];
int i = 0, error = 0;

int main() {
    // Input string for the parser
    printf("Enter input string: ");
    scanf("%s", input);

    // Call the starting grammar rule
    printf("\nStack\t\tInput\t\tAction\n");
    printf("----------------------------------------\n");
    E();

    // Check if parsing was successful
    if (strlen(input) == i && error == 0) {
        printf("\nStack\t\tInput\t\tAction\n");
        printf("----------------------------------------\n");
        printf("\t\t\t%s\t\tAccepted\n", input);
    } else {
        printf("\nStack\t\tInput\t\tAction\n");
        printf("----------------------------------------\n");
        printf("\t\t\t%s\t\tError\n", input);
    }

    return 0;
}

// E -> T E'
void E() {
    printf("E -> T E'\t\t%s\t\tParsing E\n", &input[i]);
    T();
    E_prime();
}

// E' -> + T E' | ε
void E_prime() {
    if (input[i] == '+') {
        printf("E' -> + T E'\t\t%s\t\tParsing E'\n", &input[i]);
        i++; // consume '+'
        T();
        E_prime();
    } else {
        printf("E' -> ε\t\t%s\t\tE' -> ε\n", &input[i]);
    }
}

// T -> F T'
void T() {
    printf("T -> F T'\t\t%s\t\tParsing T\n", &input[i]);
    F();
    T_prime();
}

// T' -> * F T' | ε
void T_prime() {
    if (input[i] == '*') {
        printf("T' -> * F T'\t\t%s\t\tParsing T'\n", &input[i]);
        i++; // consume '*'
        F();
        T_prime();
    } else {
        printf("T' -> ε\t\t%s\t\tT' -> ε\n", &input[i]);
    }
}

// F -> ( E ) | id
void F() {
    if (input[i] == '(') {
        printf("F -> ( E )\t\t%s\t\tParsing F\n", &input[i]);
        i++; // consume '('
        E();
        if (input[i] == ')') {
            i++; // consume ')'
        } else {
            error = 1; // Error if closing parenthesis is not found
        }
    } else if (input[i] == 'i' && input[i + 1] == 'd') {
        printf("F -> id\t\t%s\t\tParsing F\n", &input[i]);
        i += 2; // consume 'id'
    } else {
        error = 1; // Error if the input is neither '(' nor 'id'
    }
}
