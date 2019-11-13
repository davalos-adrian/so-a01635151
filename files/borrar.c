#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

int main(int argc, char **argv){
    char *file = argv[1];
    char *pwd = getcwd(NULL, 0);
    char path[strlen(file) + strlen(pwd) + 2];
    sprintf(path, "%s/%s",pwd,file);
    // printf("path1 %s\n", path);

    int checkDel = unlink(path);

    if(checkDel == 0){
        printf("Archivo %s borrado correctamente\n", file);
    } else{
        printf("Error al tratar de borrar el archivo %s\n", file);
    }
}   