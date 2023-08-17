#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h>

int main() {
    char input[10];

    printf("Enter the data type name (or \"all\" to display all): ");
    scanf("%s", input);

    if (strcmp(input, "all") == 0) {
        printf("Size of int: %zu bytes\n", sizeof(int));
        printf("Value range of int: %d to %d\n", INT_MIN, INT_MAX);

        printf("Size of float: %zu bytes\n", sizeof(float));
        printf("Value range of float: %e to %e\n", -FLT_MAX, FLT_MAX);

        printf("Size of double: %zu bytes\n", sizeof(double));
        printf("Value range of double: %e to %e\n", -DBL_MAX, DBL_MAX);

        printf("Size of char: %zu bytes\n", sizeof(char));
    } else if (strcmp(input, "int") == 0) {
        printf("Size of int: %zu bytes\n", sizeof(int));
        printf("Value range of int: %d to %d\n", INT_MIN, INT_MAX);
    } else if (strcmp(input, "float") == 0) {
        printf("Size of float: %zu bytes\n", sizeof(float));
        printf("Value range of float: %e to %e\n", -FLT_MAX, FLT_MAX);
    } else if (strcmp(input, "double") == 0) {
        printf("Size of double: %zu bytes\n", sizeof(double));
        printf("Value range of double: %e to %e\n", -DBL_MAX, DBL_MAX);
    } else if (strcmp(input, "char") == 0) {
        printf("Size of char: %zu bytes\n", sizeof(char));
    } else {
        printf("Unknown data type: %s\n", input);
    }

    return 0;
}
