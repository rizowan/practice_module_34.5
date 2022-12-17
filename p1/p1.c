#include <stdio.h>
int main()
{
    FILE *input;
    FILE *output;
    input = fopen("input.txt","r");
    output = fopen("output.txt","w");
    while(1)
    {
        char ch=fgetc(input);
        if(ch==EOF)
            break;
        fputc(ch,output);
    }
    return 0;
}