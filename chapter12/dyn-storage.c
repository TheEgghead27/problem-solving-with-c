//
// "I forgor 💀"
//              - Egg
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
struct temp {
    char name[50];
    int num[300];
} big[150];     // uses a lot of memory, which will likely not be needed
                // Instead, we can dynamically allocate storage as we need it using malloc() from stdlib.h or malloc.h
 */
/*
 * MALLOC:
 * pointer = (type) malloc(size); size is an unsigned int representing the bytes
 * Example: pointer = (int *) malloc(sizeof(int)); to malloc an integer
 * malloc allocates {size} bytes and returns a pointer to that location in memory
 * sizeof(type) conveniently returns the size of a type in bytes which we use as input
 * You will need to bring your own bointer variable
 */
struct empll * getnode(int struc_size);
struct empll * appendnode(struct empll *);
struct empll * insertnode(struct empll **list, unsigned int num);
void deletenode(struct empll **list, unsigned int num);

struct empll {
    char name[20];
    int empnum;
    double salary;
    struct empll *next;
};


int main(void) {
        struct emp {
            char name[20];
            int empnum;
            double salary;
        };
        struct emp *worker1;

        worker1 = (struct emp *) malloc(sizeof(struct emp));
        strcpy(worker1 -> name, "John Sullivan");
        worker1 -> empnum = 123;
        (*worker1).salary = 240.78;

        puts(worker1 -> name);

        (*worker1).salary += 0.25 * worker1 -> salary;

        // if we were to call malloc again, it would make a new pointer, and if we assigned that to worker1, we would lose the location of worker1 before
        // this data cannot be read, edited, or removed, so it is garbage only accessible by the kernel
        // this is why we need a second pointer if we want to allocate another worker, making two structures

        // although it is legal to assign one pointer variable to another, this also overwrites the old value of the pointer variable being written to
        // we will have two pointers pointing to the same place, while any old space pointed to is lost to us

        // we could also use an array of pointers, which we malloc to every time we add a new object

        struct emp *worker[100];  // array of pointers
        worker[4] = (struct emp *) malloc(sizeof(struct emp));
        // although it may look like we're using a lot of storage, it is ok, as a pointer is only a few bytes, while a structure can take up many, which may not be necessary.
        // by dynamically allocating, we are only taking up necessary space, not kilobytes of unneeded space that could potentially be used

        // Using linked lists, we can achieve even more dynamic allocation more efficiently
        // We include a pointer to a "next" object of the type we want and should every following object also contain such a pointer, we have a list of objects that link to the next in the sequence
        // Each object is a node in this linked list

        struct empll *list;   // nothing in our list yet, so pointer points at null

        // list = (struct empll *) malloc(sizeof(struct empll));
        list = getnode(sizeof(struct empll));
        strcpy(list -> name, "John Sullivan");
        list -> empnum = 123;
        (*list).salary = 240.78;
        // list -> next = NULL;  // nothing past this node yet
        list -> next = getnode(sizeof(struct empll));
        strcpy(list -> next -> name, "John Cena");
        list -> next -> empnum = 124;
        (*((*list).next)).salary = 2400.78;

        // we can now only allocate as much storage as we need, we don't need to waste space on a constant array

        struct empll *listptr;
        listptr = list;
        while (listptr != NULL) {  // traverse a list by reading next pointers until we hit a NULL end of list
                printf("%s\n", listptr -> name);
                listptr = listptr -> next;
        }

        // prepend to a linked list
        struct empll *p;
        p = getnode(sizeof(struct emp));
        p -> next = list;  // put the stuff now in front of p up ahead
        list = p; // set p as the start of the list

        // setting a pointer to NULL does not delete the malloc()ed data and free memory
        // instead, we lose access to the data
        // free(pointer) is used to free the data associated with a pointer

        // deleting the start of a linked list
        p = list;
        if (p != NULL) { // list is not empty
                list = p -> next;  // start of list is now the next bit
                // p -> next = NULL;  // as a formality, clean out p's link to the list (not necessary)
                free(p);
        }

        listptr = list;
        while (listptr != NULL) {  // traverse a list by reading next pointers until we hit a NULL end of list
                printf("%s\n", listptr -> name);
                listptr = listptr -> next;
        }

        // be careful to not make a dangling pointer
        int *p1, *p2;
        p1 = (int *) malloc(sizeof(int));
        *p1 = 15;
        p2 = p1;
        free(p1);  // this deallocates the space of p1, but p2 is still pointing to that space
        // printf("%d\n", *p2);  // prints garbage or segfaults, as p2 is not NULL


        p = insertnode(&list, 1);
        strcpy(p -> name, "Juan Juan");

        p = insertnode(&list, 0);
        strcpy(p -> name, "Juan One");

        // p = appendnode(list);
        p = insertnode(&list, 4);
        strcpy(p -> name, "Juan More Time");

        listptr = list;
        printf("\n");
        while (listptr != NULL) {  // traverse a list by reading next pointers until we hit a NULL end of list
                printf("%s\n", listptr -> name);
                listptr = listptr -> next;
        }

        deletenode(&list, 1);
        deletenode(&list, 0);
        deletenode(&list, 2);

        listptr = list;
        printf("\n");
        while (listptr != NULL) {  // traverse a list by reading next pointers until we hit a NULL end of list
                printf("%s\n", listptr -> name);
                listptr = listptr -> next;
        }

        return 0;
}

// node pointer inits are typically managed by a function to make the action more simple yet emphasized
/* allocate a node with struc_size bytes
 * and return a pointer of type struct empll */
struct empll * getnode(int struc_size) {
        struct empll *p;
        p = (struct empll *) malloc(struc_size);
        p -> next = NULL;
        return p;
}

struct empll * appendnode(struct empll *list) {
        struct empll *newnode, *listptr;
        newnode = getnode(sizeof(struct empll));
        newnode -> next = NULL;
        listptr = list;
        while (listptr -> next != NULL)  // traverse a list by reading next pointers until we hit a NULL end of list
                listptr = listptr -> next;
        listptr -> next = newnode;
        return newnode;
}


struct empll * insertnode(struct empll **list, unsigned int num) {
        struct empll *newnode;
        newnode = getnode(sizeof(struct empll));
        if (num < 0) {
                fprintf(stderr, "Negative indices are not supported");  // unsigned should prevent this entirely
                exit(1);
        }
        if (num == 0) {
                // special case because there is no node before our target position
                newnode -> next = *list;
                *list = newnode;  // i am the captain now
        }
        else {
                struct empll *targetpointer = *list;
                int i;
                for (i = 1; i < num; i++)
                        targetpointer = targetpointer -> next;
                newnode -> next = targetpointer -> next;
                targetpointer -> next = newnode;
        }


        return newnode;
}


void deletenode(struct empll **list, unsigned int num) {
        if (num < 0) {
                fprintf(stderr, "Negative indices are not supported");  // unsigned should prevent this entirely
                exit(1);
        }
        struct empll *targetpointer = *list;
        if (num == 0) {
                // special case because there is no node before our target position
                *list = ((*list) -> next);  // set start of list to the second node

                free(targetpointer);  // delete first node
        }
        else {
                int i;
                struct empll *deletepointer;
                for (i = 1; i < num; i++)
                        targetpointer = targetpointer -> next;  // target pointer points to node before the node to be deleted
                deletepointer = targetpointer -> next; // delete pointer points to node to be deleted
                targetpointer -> next = (targetpointer -> next) -> next;  // target pointer now points to node after the one we are about to purge
                free(deletepointer);
        }
        return;
}