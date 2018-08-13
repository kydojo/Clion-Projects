#include "circularList.h"
#include <stdio.h>

int main()
{
    struct CircularList* deque = circularListCreate();
    circularListAddBack(deque, (TYPE)1);
    circularListPrint(deque);

    circularListAddBack(deque, (TYPE)2);
    circularListPrint(deque);

    circularListAddBack(deque, (TYPE)3);
    circularListPrint(deque);

    circularListAddFront(deque, (TYPE)4);
    circularListPrint(deque);

    circularListAddFront(deque, (TYPE)5);
    circularListPrint(deque);

    circularListAddFront(deque, (TYPE)6);
    circularListPrint(deque);

    printf("%f\n", circularListFront(deque));
    printf("%f\n", circularListBack(deque));

    circularListRemoveFront(deque);
    circularListPrint(deque);

    circularListRemoveBack(deque);
    circularListPrint(deque);

    circularListReverse(deque);
    circularListPrint(deque);

    circularListDestroy(deque);
//    circularListPrint(deque);

    return 0;
}
