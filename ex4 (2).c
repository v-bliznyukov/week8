#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#include <unistd.h>
#include <sys/resource.h>

int main() { 
  //declare variables;
 struct rusage* using; 
 int i;
 for(i = 0; i < 10; i++) { 
   //introduce pointer to the allocatedd memory location
  int *a= NULL;
  //allocate 10MB of memory
  a = malloc(1024*1024*10); 
  //fill memory with zeros
  memset(a, 0, 1024*1024*10); 
  //call resouce ussage function of the calling process
  getrusage(RUSAGE_SELF, using); 
  //output data
  printf("Max process set size used in kilobytes: %ld\n", using->ru_maxrss); 
  printf("The num of page faults without I/O activity: %ld\n", using->ru_minflt); 
  printf("Page faults that require I/O activity %ld\n", using->ru_majflt); 
   printf("Integral shared memory size %ld\n", using->ru_ixrss); 
   printf("Integral unshared data size %ld\n", using->ru_idrss);
  printf("\n"); 
  sleep(1);  
 }  
 
 return 0; 
}
