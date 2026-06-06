#ifndef LIST_H
#define LIST_H

#define LIST(type, growth_factor, init_alloc_size) LIST_DEFINE(type) LIST_CREATE(type, init_alloc_size) LIST_ADD(type, growth_factor) LIST_FREE(type)

#define LIST_DEFINE(type) #typedef struct List##type { \
    size_t len; \
    size_t alloc_len; \
    type* ptr; \
} List##type;

#define LIST_CREATE(type, init_alloc_size) List##type* list_create_##type() { \
    List##type* list = malloc(sizeof(List##type)); \
    List##type->len = 0; \
    List##type->alloc_len = init_alloc_size; \
\
    List##type->ptr = malloc(sizeof(type) * init_alloc_size); \
\
    return list; \
}

#define LIST_ADD(type, growth_factor) void list_add_##type(List##type* list, type item) { \
    if(list->len >= list->alloc_len) { \
        list->alloc_len *= growth_factor; \
        list->ptr = realloc(list->ptr, sizeof(type) * list->alloc_len); \
    } \
\
    list->ptr[list->len] = item; \
    ++list->len; \
}

#define LIST_FREE(type) void list_free_##type(List##type* list) {\
    free(list->ptr); \
    free(list); \
}

#endif