#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "seqSieve.c"


int main(int argc, char **argv){
  int maxInt = 100;
  if(argc > 1)  maxInt = atoi(argv[1]);
  
  seqSieve(maxInt);
  
  int i;
  for(i=0;i<count;i++) printf("%d ",primes[i]);
  printf("\n");
  exit(1);
}

  
