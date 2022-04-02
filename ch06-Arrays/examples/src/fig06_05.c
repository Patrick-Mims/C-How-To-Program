/* Initialize the elements of array s to the even integers from 2 to 20
 * */
#include <stdio.h>
#include <string.h>

#define SUB_SCRIPT 10

void
create_histogram(int *h)
{
  int i = 0, j = 0;

  for(i = 0; i < SUB_SCRIPT; i++)
  {
    printf("%d. %d -> ", i, h[i]);
    for(j = 1; j <= h[i]; j++)
    {
      printf("%s", "*");
    }

    printf("\n");
  }
}

void
show_list(int *lb)
{
  for(int j = 0; j < SUB_SCRIPT; j++)
  {
    printf("Contents-> %d\n", lb[j]);
  }
}

void
initialize_list(int *lb)
{
  for(int i = 0; i < SUB_SCRIPT; i++)
  {
    lb[i] = 2 * 4 * i;
  }
}

int
main(void)
{
  /* A subscripted array is an lvalue, it can be used on the left side of an assignment */
  int list_a[SUB_SCRIPT] = { 30, 45, 72, 92, 3, 27, 13, 38, 42, 61 };
  int list_b[SUB_SCRIPT] = { 0 };

  printf("\nInitializing the elements of an array...\n");

  initialize_list(list_b);

  // Histogram of list_a[SUB_SCRIPT]
  create_histogram(list_a);

  show_list(list_b);

  return 0;
}
