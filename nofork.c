
#include <stdio.h>
#include <unistd.h>

int main(void)
{
int childProcess;
int count1 = 0;
int count2 = 0;

printf("Starting … \n");

while (count1 <= 10)
{
printf ("Execute child %d\n", count1);
sleep (1);
count1++;
}

while (count2 <= 10)
{
printf ("Execute parent %d\n", count2);
sleep (10);
count2++;
}

return 0;
}

