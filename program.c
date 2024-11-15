#include <stdio.h>

int main()
{
  while (1)
  {
    printf("The menu: \n");
    printf("0. Exit. \n");
    printf("1. Max Germain primes in range. \n");
    printf("2. Dates and updates. \n");
    int choise;
    int res = scanf("%d", &choise);
    if (choise == 0)
    {
      printf("You chose to end this program, bie bie\n");
      break;
    }
    else if (choise == 1)
    {
      printf("enter min range (2 up to 1000000): ");
      int finish_number;
      int start_number;
      while (1)
      {
        scanf("%d", &start_number);
        if (start_number < 2 || start_number > 1000000)
        {
          printf("Erorr!!! input  number with respect to limits\n");
        }
        else
          break;
      }
      int max_difference = 1000000 + start_number;
      printf("enter max range [%d up to %d: ]\n", start_number, max_difference);
      while (1)
      {
        scanf("%d", &finish_number);
        if (start_number > finish_number || finish_number > max_difference)
        {
          printf("Erorr!!! input number with respect to limits \n");
        }
        else
          break;
      }

      int max_level = 0;
      int max_level_owner = start_number;
      for (int test_number = start_number; test_number <= finish_number; test_number++)
      {
        int level_counter = 0;
        int prime_test = 1;
        int next_seq_item = test_number;
        do
        {
          if (next_seq_item > 1 && next_seq_item < 4)
            prime_test = 1;
          else
          {
            for (int i = 2; i < next_seq_item / 2; i++)
            {
              if (next_seq_item % i == 0)
              {
                prime_test = 0;
                break;
              }
              else
              {
                prime_test = 1;
              }
            }
          }

          if (prime_test == 1)
          {
            level_counter++;
            next_seq_item = 2 * next_seq_item + 1;
          }
          else
          {
            if (max_level < level_counter)
            {
              max_level = level_counter - 1;
              max_level_owner = test_number;
            }
          }
        } while (prime_test);
      }
      if (max_level == 0)
      {
        printf("no Germain number in range %d to %d\n", start_number, finish_number);
      }
      else
      {
      printf("Max level Germain number in range %d to %d is %d in  level %d\n", start_number, finish_number, max_level_owner, max_level);
      int germain_number = 1;
      int previus_number = max_level_owner;
      while (max_level + 1 > germain_number)
      {
        int current_item = 2 * previus_number + 1;
        printf("%d) %d is prime and %d is prime\n", germain_number, previus_number, current_item);
        previus_number = current_item;
        germain_number++;
      }
      int current_item = 2 * previus_number + 1;
      printf("%d is prime but %d is not prime\n", previus_number, current_item);
    }
    }
    else if (choise == 2)
    {
      printf("You chose Dates and updates, bie bie");
    }
    else
    {
      printf("Your choose is incorrect. Put attention on allow choises from menu!!!");
    }
  }
  return 0;
}
