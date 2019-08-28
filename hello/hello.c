<<<<<<< HEAD
#include <stdio.h>

int main(){
    printf("Hooooooooola mundo\n\r");
    return 0;
=======
#include "./libhello.h"

int main(int argc, char **argv){
    int i = 0;
    for(i = 1; i < argc; i++){
        //printf("Hooooooooola %s\n", argv[i]);
        printHello(argv[i]);
    }
    return 255;
>>>>>>> 5543b4282953620e5b3bf39fbdb680eaaa1915c2
}