#include "types.h"
#include "user.h"

int main(void) {
    int fd1;
    int fd2;

    trace("./testFile.txt");
    
    fd1 = open("./testFile.txt",0);
    close(fd1);
    
    fd2 = open("./testFile.txt",0);
    close(fd2);
		
    int traceCount = gettracecount();
    printf(1, "Nombre d'ouvertures du fichier effectuées : %d\n", traceCount);
    
    exit();
}