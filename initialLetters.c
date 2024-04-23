#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Herflerin bash herflerini tapan proqram

int main(int argc, char *argv[])
{
    char text[100];
    printf(" Enter Text :");
    gets(text);
    int n = strlen(text);

    int i;

    printf(" %c ", text[0]);

    for(i=0; i<n; i++)
    {
        if(text[i] == ' ')
        printf(" %c ", text[i+1]);
    }
    return 0;
}