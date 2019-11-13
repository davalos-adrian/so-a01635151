#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

int main(int argc, char **argv){
    char *fileOld = argv[1];
    char *fileNew = argv[2];
    char *pwd = getcwd(NULL,0);
    char path1[strlen(fileOld)+strlen(pwd)+2];
    char path2[strlen(fileNew)+strlen(pwd)+2];
    sprintf(path1,"%s/%s",pwd,fileOld);
    sprintf(path2,"%s/%s",pwd,fileNew);

    int linkFiles = link(fileOld, fileNew);

    int delOld = unlink(fileOld);
    if(delOld == 0){
        printf("Archivo renombrado exitosamente de %s a %s\n", fileOld, fileNew);;
    }else{
        printf("Error al tratar de borrar el archivo %s\n", fileOld);
    }

}