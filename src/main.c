/**
 * @file main.c
 * @author Hrayr Mirzoyan
 * @brief Main file of RedOS
 */

#include <stdio.h>
#include "../inc/DataStructure.h"

int main(void) {
    StructureObjectData* root = InitRoot();
    MakeDirectory(root, "Bonjour");
    ListDirectory(root);
    MakeDirectory(root, "Yasmine");
    ListDirectory(root);
    return 0;
}
