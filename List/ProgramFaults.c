#include "ProgramFaults.h"

#pragma once

void checkMemoryAllocation(void *pointer) {
    if (pointer == NULL) {
        exit(1);
    }
}
