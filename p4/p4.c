#include <stdio.h>
int main()
{
    FILE *input;
    FILE *output;
    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");
    int n,sum=0;
    fscanf(input,"%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        fscanf(input,"%d",&a[i]);
        sum+=(a[i]%10);
    }
    fprintf(output,"Sum = %d",sum);
    
    return 0;
}