#include <stdio.h>
int main()
{
    FILE *input;
    FILE *output;
    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");
    int t;
    fscanf(input, "%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a;
        fscanf(input, "%d", &a);
        if (a > 0)
        {
            for (int i = a; i >= (-1) * a; i--)
            {
                fprintf(output, "%d ", i);
            }
        }
        else
        {
            for (int i = a; i <= (-1) * a; i++)
            {
                fprintf(output, "%d ", i);
            }
        }
        fprintf(output, "\n");
    }

    return 0;
}