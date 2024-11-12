#include <stdio.h>

int main (){
  while (1)
  {
    printf("The menu: \n");
    printf("0. Exit. \n");
    printf("1. Max Germain primes in range. \n");
    printf("2. Dates and updates. \n");
    int choise;
    int res = scanf("%d", &choise);
    if (res == -1)
      printf("Please use only numbers... Try again");
    else if (choise == 0) {
        printf("You chose to end this program, bie bie");
        break;
    }
    else if (choise == 1) {
        printf("You chose max Germain primes in range, bie bie");
    }
    else if (choise == 2) {
        printf("You chose Dates and updates, bie bie");
    }
    else{
        printf("Your choose is incorrect. Put attention on allow choises from menu!!!");
    }
  }
  return 0;
}
