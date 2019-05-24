/*
  Written by g59091
  Updated: 5/21/2019
*/
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include "phyfunc.h"
#include "compfunc.h"
#include "calcfunc.h"

void sloop()
{
  // Cross platform, just in case
  #ifdef _WIN32 
  Sleep(3000);
  #else
  usleep(3000); 
  #endif
}

void firstScreen()
{
  printf(
  "=====================================================\n"
  "*        Welcome to the MegaCalculator v.1.0.0.0    *\n"
  "*           Maintained by Lamsten Corp.             *\n"
  "=====================================================\n"
  "\nPlease type a number below to do that operation.\n"
  "- COMPUTER SCIENCE - \n"
  "1. Base to Another Base Conversion\t"
  "2. \n"
  "3. \t"
  "4. \n"
  "5. \t"
  "6. \n"
  "7. \t"
  "8. \n"
  "9. \t"
  "10. \n\n"
  "- CALCULUS - \n "
  "11. \t"
  "12. \n"
  "13. \t"
  "14. \n"
  "15. \t"
  "16. \n"
  "17. \t"
  "18. \n"
  "19. \t"
  "20. \n\n"
  "- PHYSICS - \n"
  "21. Velocity\t"
  "22. Density\n"
  "23. \t"
  "24. \n"
  "25. \t"
  "26. \n"
  "27. \t"
  "28. \n"
  "29. \t"
  "30. \n\n"

	"\"=\" = Exit the software\n"
	);
}

int main()
{
  //int inputnum;
  char input[10];
  int innum;
  firstScreen();
  fgets(input, sizeof(input), stdin);
  while (input[0] != '=')
  {
    if (input[0] == "-")
      firstScreen();
    innum = strtol(input, NULL, 10);
    switch (innum)
    {
      case 0: break;
      case 21: 
        velocity();
        break;
      case 22: 
        density();
        break;
      default: printf("Error: please enter a valid number.\n");
        break;
    }
    innum = strtol(input, NULL, 10);
    fgets(input, sizeof(input), stdin);
  }
  printf("Thanks for using the software!");
  sloop();
  return 0;
}
