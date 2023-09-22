#include "swap.h"

void Swap(char *left, char *right)
{
	char p;
	p = *left;
	*left = *right;
	*right = p;
}
