//use : make && valgrind ./test_list
#include <stdlib.h>
#include <stdio.h>

#include <list.h>

int main(void)
{
  list_t l = list_new();

  l = list_add_first(l, 42);
  l = list_add_first(l, 51);

  printf("Listes : ");
  list_print(l);
  printf("\n");

  list_del(l);

  exit(EXIT_SUCCESS);
}
