#include <stdio.h>
int main()
{
    FILE *input;
    FILE *output;
    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");
    int n;
    fscanf(input,"%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int space = i; space < n; space++)
        {
            fprintf(output," ");
        }
        for (int j = 0; j < n; j++)
        {
            fprintf(output,"#");
        }
        fprintf(output,"\n");
        
        
    }
    
    return 0;
}