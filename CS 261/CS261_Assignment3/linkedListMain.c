#include "linkedList.h"
// Kyle Johnson
// CS 261 - Summer 2018
// Assignment 3 - Part 1

#include <stdio.h>

int main(){
    struct LinkedList* l = linkedListCreate();
    printf("Adding 1 to front\n");
    linkedListAddFront(l, (TYPE)1);
    linkedListPrint(l);

    printf("Adding 2 to back\n");
    linkedListAddBack(l, (TYPE)2);
    linkedListPrint(l);

    printf("Adding 3 to back\n");
    linkedListAddBack(l, (TYPE)3);
    linkedListPrint(l);

    printf("Adding 4 to front\n");
    linkedListAddFront(l, (TYPE)4);
    linkedListPrint(l);

    printf("Adding 5 to front\n");
    linkedListAddFront(l, (TYPE)5);
    linkedListPrint(l);

    printf("Adding 6 to back\n");
    linkedListAddBack(l, (TYPE)6);
    linkedListPrint(l);

    printf("Front: %i\n", linkedListFront(l));
    printf("Back:  %i\n", linkedListBack(l));

    printf("Removing front\n");
    linkedListRemoveFront(l);

    printf("Removing back\n");
    linkedListRemoveBack(l);
    linkedListPrint(l);
    linkedListDestroy(l);

/* BAG */

    struct LinkedList* k = linkedListCreate();
    linkedListPrint(k);

    linkedListAdd (k, (TYPE)10);
    linkedListPrint(k);

    linkedListAdd (k, (TYPE)11);
    linkedListPrint(k);

    linkedListAdd (k, (TYPE)13);
    linkedListPrint(k);

    linkedListAdd(k, (TYPE)14);
    linkedListPrint(k);

    linkedListRemove(k, (TYPE)11);

    linkedListPrint(k); // keep
    linkedListDestroy(k);
    return 0;
}

