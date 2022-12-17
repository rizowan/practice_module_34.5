#include <stdio.h>
int main()
{
    FILE *input;
    FILE *output;
    input = fopen("input.txt", "r");
    output = fopen("output.txt", "a");
    int n;
    fscanf(input, "%d", &n);
    if (n % 100 == 0 && n % 400 == 0 || n % 100 != 0 && n % 4 == 0)
        fprintf(output, "%d --> YES\n", n);
    else
        fprintf(output, "%d --> NO\n", n);
    return 0;
}