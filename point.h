#include <stdlib.h>
#include <stdint.h>

typedef struct pointC {
    double x;
    double y;
    double z;
    double (*distance)(point *);
    double (*get)(point *);
} point;

double innerProd(point *p1, point *p2);

/**
 * @brief Returns the coordinate at the given index
 * 
 * @param index a number between 0-2
 * @return double 
 */
double get(uint8_t index);
/**
 * @brief 
 * 
 * @param pt 
 * @return double 
 */
double distance(point *pt);
/**
 * @brief 
 * 
 * @param index 
 * @return double 
 */
double get(uint8_t index);
