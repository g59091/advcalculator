#include <stdio.h>
#include <stdlib.h>
#include "phyfunc.h"

#define m "meters"
#define s "seconds"
#define g "grams"
#define divis " / "


void prntfunc(char *funcname)
{
  printf("\n=======================\n");
  printf("%s\n", funcname);
  printf("=======================\n\n");
}

void velocity()
{
  float distance, time, vel;
  prntfunc("Velocity");
  scanf("%f", &distance);
  printf("Distance is equal to %0.2f", distance);
}
