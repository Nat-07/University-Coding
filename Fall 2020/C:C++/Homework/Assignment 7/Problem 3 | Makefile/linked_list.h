/*
    CH-230-A
    a7 p1.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

// set struct
struct list{
    int info;
    struct list *next;
};

// building linked list
struct list a;
struct list *my_list;

// prototype

struct list *push_back(struct list * my_list, int value);
struct list *push_front(struct list *my_list, int value);
void print_list(struct list *my_list);
void dispose_list(struct list *my_list);
struct list *dispose_firstElem(struct list *my_list);
