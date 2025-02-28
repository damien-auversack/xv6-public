#include "types.h"
#include "user.h"

int main(void) {
    int readCount = getreadcount();
    printf(1, "Nombre de lectures effectuées : %d\n", readCount);
    exit();
}
