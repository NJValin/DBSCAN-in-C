#include "PointList.h"
    
int addFirst(PointList* lst, point* pt) {
    ListNode* x;
    if (lst->size == 0 || lst->size==NULL) {
        x->pt = pt;
        free(pt);
        lst->head->next = x;
        x->next = lst->head;
        x->prev = lst->head;
        lst->size++;
        return 1;
    }
    x->pt = pt;
}