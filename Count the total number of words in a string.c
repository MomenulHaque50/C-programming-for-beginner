
#include <stdio.h>

 main()
{
    char s[400];
    int i, w;

    printf("Enter any string: ");
    gets(s);

    i = 0;
    w = 1;


    while(s[i] != '\0')
    {
        if(s[i]==' ' || s[i]=='\n' || s[i]=='\t')
        {
            w++;
        }

        i++;
    }

    printf("Total number of words = %d", w);

}
