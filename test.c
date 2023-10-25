#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
int stringHash(char *key, int tableSize)
{
    int q[strlen(key)];
    for (; *key != 0; key++)
    {
        for (int i = 7; i >= 0; i--)
        {
            q[i] = (*key >> i) & 1;
        }
    }
    free(key);
    unsigned int resultnotMod = 0;
    int z = 4;
    for (int j = 0; j < sizeof(q); j++)
    {
        resultnotMod = q[j] * (int)pow(z, j);
    }
    free(q);
    int result = (int)(resultnotMod % tableSize);
    return result;
}
int main (char argc, char **argv) {
    printf("hello world\n");
    char* x = argv[1];
    int sizeChar = strlen(x);
    int q[sizeChar];
    for (; *x!=0; x++) {
        for (int i = 7; i>=0; i--)
        {
            q[i] = (*x >> i) & 1;
            printf("%d", q[i]);
        }
        printf("\n");
    }
    
    free(x);
    printf("\n%d", (int)'a');
    int w = stringHash(argv[1], 50);
    printf("\n%d", w);
    return 1;
}




