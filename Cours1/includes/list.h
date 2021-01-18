#include <stddef.h>
#include <element.h>

#ifndef _LIST_H_ //GUARD
#define _LIST_H_

struct link_t;

typedef struct link_t *list_t;

list_t    list_new(void);
int       list_is_empty(list_t l);
list_t    list_add_first(list_t l, element_t e);
list_t    list_del_first(list_t l);
void      list_del(list_t l);
void      list_print(list_t l);
size_t    list_lenght(list_t l);
element_t list_first(list_t l);

#endif
