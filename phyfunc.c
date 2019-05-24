#include <stdio.h>
#include <stdlib.h>
#include "phyfunc.h"

void prntfunc(char *funcname)
{
  printf("====================================\n");
  printf("%s\n", funcname);
  printf("====================================\n");
}

void endfunc()
{
	printf("=====================================\n");
	printf("Press - to bring the menu. = to quit.\n");
	printf("=====================================\n");
}

void velocity()
{
  float distance, time;
  prntfunc("Velocity");
  printf("Distance (in meters): ");
  scanf_s("%f", &distance, sizeof(distance));
  printf("Time (in secs): ");
  scanf_s("%f", &time, sizeof(time));
  printf("Velocity is equal to %0.5f m/s.\n", distance / time);
  endfunc();
}

void density()
{
	float mass, volume;
  prntfunc("Density");
  printf("Mass (in kg): ");
  scanf_s("%f", &mass, sizeof(mass));
  printf("Volume (in m^3): ");
  scanf_s("%f", &volume, sizeof(volume));
  printf("Density is equal to %0.5f m/s.\n", mass / volume);
  endfunc();
}
