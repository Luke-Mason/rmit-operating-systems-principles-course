#include <stdio.h>

int main()
{
	//Refresher on pointers
	int i = 0;
	int *j = &i;
	*j+5;
	printf("%d",*j);
	luke2(luke());
}
int luke()
{
	printf("LUKE");
	return 12;
}
void luke2(function x)
{
	printf("Luke is %d years old",x);
}
