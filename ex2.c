#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
// for 10 sec
  for(int i=0; i<10; i++){
 //init pointer to allocated memory
  int* a=NULL;
  //allocate 10 MB of memory
  a = (int*)malloc(1024*1024*10);
  //fill memory with zeros
  memset(a,0,1024*1024*10);
  //call sleep function for 1 second
  sleep(1);
  }
  
  return 0;
}
