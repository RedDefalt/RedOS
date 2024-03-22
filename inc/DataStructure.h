//
// Created by reddefaltos on 3/22/24.
//

#ifndef DATASTRUCTURE_H
#define DATASTRUCTURE_H
#include <stdlib.h>
#include <stdio.h>

typedef struct ObjectData{
    char name[127];
    int file;
    int *dataptr[50];
    int number_of_ptr;
} StructureObjectData;

StructureObjectData* InitObject(void) {
    StructureObjectData* Object = malloc(sizeof(StructureObjectData));
    if (Object == NULL) {
        printf("OUT OF MEM");
        exit(-1);
    }
    return Object;
}

#endif //DATASTRUCTURE_H
