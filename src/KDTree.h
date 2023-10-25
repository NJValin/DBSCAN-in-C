#include "point.c"
#include <stdlib.h>
#include <stdint.h>

typedef struct KDTreeS {
    Node* root;
    int (*insert)(point* pt);
    int (*isEmpty)();
    int (*createTree)(point* pt);
    
} KDTree;

typedef struct NodeS {
    point *data;
    uint8_t axis;
    double value;
    Node *left;
    Node *right;
} Node;

int insert(point* pt);
int isEmpty();
int createTree(point* pt);

