#include<string.h>
#include<stdio.h>
int main(){
	char s[34];
	int l, c = 0, max = 0,C[100],m[100];
	gets(s);
	l = strlen(s);
	for(int i = 0 ; i < l ; i++){
		if(s[i] != ' '){
                C[i]=s[i];
			c++;
		}
		else{
			if(c > max)
                max = c;
                m[100]=C[100];
			c = 0;

		}
	}
	if(c > max)
        max = c;
      m[100]=C[100];

	printf("Length: %d\n", max);
	printf("Length: %s\n", m[100]);
	return 0;
}
