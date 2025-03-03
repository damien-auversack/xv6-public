#include "types.h"
#include "user.h"

int main(void) {
    int fd1;
    int fd2;
    int fd3;

    trace("./testFile.txt");
    
    fd1 = open("./testFile.txt",0);
    close(fd1);

    // trace("./testFile.txt");
    // test si l'appel à trace() remet bien le compteur à 0
    
    fd3 = open("./testFile2.txt",0);
    close(fd3);
    // test si le compteur est bien incrémenté seulement pour le fichier tracé

    fd2 = open("./testFile.txt",0);
    close(fd2);
		
    int traceCount = gettracecount();
    printf(1, "Nombre d'ouvertures du fichier effectuées : %d\n", traceCount);
    
    exit();
}