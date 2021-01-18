#include <list.h>
#include <assert.h>
#include <stdlib.h>

struct link_t
{
  element_t val;
  struct link_t *next;
};

#define NIL NULL

/*Renvoyer une liste vide*/
list_t list_new(void)
{
  return NIL;
}
int list_is_empty(list_t l)
{
  if(l == NIL)
    return 1;
  else
    return 0;
}
list_t list_add_first(list_t l, element_t e)
{
  struct link_t *new_link = calloc(1,sizeof(*new_link));

  new_link->val = e;
  new_link->next = l;

  return(new_link);
}
list_t list_del_first(list_t l)
{
  list_t rest;

  assert(!list_is_empty(l));

  rest = l->next;

  free(l);
  return(rest);
}
void list_del(list_t l)
{
  while(!list_is_empty(l))
  {
    l = list_del_first(l);
  }
}
void list_print(list_t l)
{
  while(!list_is_empty(l))
  {
    element_print(l->val);
    l = l->next;
  }
}
size_t list_lenght(list_t l)
{
  size_t len =0;
  while(!list_is_empty(l))
  {
    len++;
    l = l->next;
  }
  return(len);
}
element_t list_first(list_t l)
{
  assert(!list_is_empty(l));
  return(l->val);
}
