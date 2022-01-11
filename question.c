#include  <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void forkexample()

{

// return calcue zero so child presecc

if(fork() ==0)
printf("Hellow i am child\n");

else

printf("hellow i am parent\n");
//return  no-zero so child presecc

}

int  main(){

int processID;
int count = 0;
while(1){
processID = fork();
printf("Puning process %d\n", processID);
count++;
}
return 0;
}


