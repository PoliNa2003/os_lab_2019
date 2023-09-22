#include "revert_string.h"

void RevertString(char *str)
{
	int a = 0;
	int b = strlen(str) - 1;
	char x;
	while (a < b){
		x = str[a];
		str[a] = str[b];
		str[b] = x;
		a += 1;
		b -= 1;
	}
}

