#ifndef DATASTRUCTURE_H
#define DATASTRUCTURE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct StructureObjectData {
    char name[127];
    int file;
    struct StructureObjectData *dataptr[50];
    int number_of_ptr;
} StructureObjectData;

StructureObjectData* InitObject(void) {
    StructureObjectData* Object = malloc(sizeof(StructureObjectData));
    if (Object == NULL) {
        printf("OUT OF MEM");
        exit(-1);
    }
    Object -> number_of_ptr = 0;
    return Object;
}

StructureObjectData* InitRoot(void) {
    StructureObjectData* Root = malloc(sizeof(StructureObjectData));
    if (Root == NULL) {
        printf("OUT OF MEM");
        exit(-1);
    }
    Root -> number_of_ptr = 2;
    Root -> dataptr[0] = Root;
    Root -> dataptr[1] = Root;
    return Root;
}

void MakeDirectory(StructureObjectData *object, char directory_name[]) {
    StructureObjectData* directory = InitObject();
    directory->file = 0;
    strcpy(directory->name, directory_name);
    directory->dataptr[0] = directory;
    directory->dataptr[1] = object;
    object->dataptr[object->number_of_ptr] = directory;
    object->number_of_ptr = object->number_of_ptr + 1;
}

void ListDirectory(StructureObjectData *folder) {
    for (int i = 0; i < folder->number_of_ptr; i++) {
        if (i == 0) {
            printf("%c ", '.');
        } else if (i == 1) {
            printf("%s ", "..");
        } else {
            printf("%s ", (folder->dataptr[i])->name);
        }
    }
    printf("\n");
}

#endif //DATASTRUCTURE_H
