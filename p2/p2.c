#include <stdio.h>
int main()
{   
    FILE *input;
    FILE *output;
    input = fopen("input.txt","r");
    output = fopen("output.txt","w");
    int n;
    fscanf(input,"%d",&n);
    for (int i = 1; i <= n; i++)
    {
        fprintf(output,"%d ",i);
    }
    
    return 0;
}