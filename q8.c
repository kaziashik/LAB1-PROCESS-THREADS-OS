#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


int main(){
int processID;
int count = 0;
while(1){
processID = fork();
printf("Runnig process %d\n", processID);
count++;
}


return 0;
}
