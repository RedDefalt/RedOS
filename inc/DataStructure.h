//
// Created by reddefaltos on 3/22/24.
//

#ifndef DATASTRUCTURE_H
#define DATASTRUCTURE_H

typedef struct ObjectData{
    char name[127];
    int file;
    int *dataptr[50];
    int number_of_ptr;
} StructureObjectData;


#endif //DATASTRUCTURE_H
