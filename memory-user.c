#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <bytes>\n", argv[0]);
        return 1;
    }

    int bytes = atoi(argv[1]);
    int *arrayPtr = (int *)malloc(bytes);
    if (arrayPtr == NULL) {
        return 1;
    }

    int arraySize = (bytes) / sizeof(int); 
    int *startPtr = arrayPtr;

    while (1) {
        printf("%d ", *arrayPtr);
        arrayPtr++; 

        if (arrayPtr == startPtr + arraySize) {
            arrayPtr = startPtr;
        }
    }

    free(startPtr);
    return 0;
}
