#include <omp.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
int i = 0;
#pragma omp parallel for
for(i = 0; i < 10; i++)
{
printf("I am a parallel region.\n");
sleep(1);
}
return 0;
}
