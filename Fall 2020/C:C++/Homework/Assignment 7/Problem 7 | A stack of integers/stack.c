/*
    CH-230-A
    a7 p7.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *     Function:  <Function_name>
  * ----------------------------------
  * The function <function_name> ...
  * 
  * -Inputs:
  *     <variable_type> <variable_name>: <What_is_stored_in_this_variable?>
  * -returns: 
  *     <return_type> <return_variable_name>: <What_is_given_back_by_this_variable?>
  * 
  */
struct stack *init(){
    struct stack *s =(struct stack*)malloc(sizeof(struct stack));
    s->count = 0;
    return s;
}
/**
  *     Function:  <Function_name>
  * ----------------------------------
  * The function <function_name> ...
  * 
  * -Inputs:
  *     <variable_type> <variable_name>: <What_is_stored_in_this_variable?>
  * -returns: 
  *     <return_type> <return_variable_name>: <What_is_given_back_by_this_variable?>
  * 
  */
struct stack *push(int n, struct stack *s){
    if(isFull(s)==1){
        printf("Stack Overflow");
        return s;
    }
    s->count = s->count +1;
    s->array[s->count] = n;
    printf("%d", n);
    
    return s;
}
/**
  *     Function:  <Function_name>
  * ----------------------------------
  * The function <function_name> ...
  * 
  * -Inputs:
  *     <variable_type> <variable_name>: <What_is_stored_in_this_variable?>
  * -returns: 
  *     <return_type> <return_variable_name>: <What_is_given_back_by_this_variable?>
  * 
  */
struct stack *pop(struct stack *s){
    if(isEmpty(s)){
        printf("Stack Underflow");
        return s;
    }
    printf("%d", s->array[s->count]);
    s->count = s->count -1;
return s;
}
/**
  *     Function:  <Function_name>
  * ----------------------------------
  * The function <function_name> ...
  * 
  * -Inputs:
  *     <variable_type> <variable_name>: <What_is_stored_in_this_variable?>
  * -returns: 
  *     <return_type> <return_variable_name>: <What_is_given_back_by_this_variable?>
  * 
  */
struct stack *empty(struct stack *s){
    printf("Emptying Stack ");
    int n = s->count;
    for(int i = 0; i<n; i++){
        pop(s);
        printf(" ");
    }
printf("\n");
return s;
}
/**
  *     Function:  <Function_name>
  * ----------------------------------
  * The function <function_name> ...
  * 
  * -Inputs:
  *     <variable_type> <variable_name>: <What_is_stored_in_this_variable?>
  * -returns: 
  *     <return_type> <return_variable_name>: <What_is_given_back_by_this_variable?>
  * 
  */
int isEmpty(struct stack *s){
    if(s->count == 0){
        return 1;
    }
    else{
        return 0;
    }
}
/**
  *     Function:  <Function_name>
  * ----------------------------------
  * The function <function_name> ...
  * 
  * -Inputs:
  *     <variable_type> <variable_name>: <What_is_stored_in_this_variable?>
  * -returns: 
  *     <return_type> <return_variable_name>: <What_is_given_back_by_this_variable?>
  * 
  */
int isFull(struct stack *s){
    if(s->count == 12){
        return 1;
    }
    else{
        return 0;
    }
}