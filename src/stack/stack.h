//
// Created by denis on 07.04.18.
//

#ifndef C_HOMEWORK_STACK_H
#define C_HOMEWORK_STACK_H

struct my_stack_t {
    int size;
    int capacity;
    int* elements;
};

#ifdef __cplusplus
extern "C" {
#endif
/* Declarations of this file */
    struct my_stack_t* stack_init();
    void stack_push(struct my_stack_t *, int);
    int stack_pop(struct my_stack_t *);
    void stack_destroy(struct my_stack_t*);
    void stack_expand(struct my_stack_t*);
#ifdef __cplusplus
}
#endif

#endif //C_HOMEWORK_STACK_H
