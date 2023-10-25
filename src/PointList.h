#include <stdlib.h>
#include "point.h"

typedef struct Node_ {
    point *pt;
    ListNode* next;
    ListNode* prev;
}ListNode;

typedef struct PointList_ {
    unsigned int size;
    ListNode* head;
    int (*add)(point* pt);
    int (*addFirst)(point* pt);
}PointList;

int add(PointList* list, point* pt);
int addFirst(PointList* list, point* pt);

