#include<stdio.h>
main(){
    char s[100];
    int l,i;
    gets(s);
    l=strlen(s);
    strrev(s);
    for(i=0;i<l;i++)
    {
        printf("%c\n",s[i]);
    }
}
