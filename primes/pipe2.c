#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  int num = 0;
  int primo = 0;
  scanf("%d\n",&primo);
  fprintf(stderr, "Primo: %d\n",primo);
  while(1){
    scanf("%d\n",&num);
    //noten que leo de stdout
    if(num == -1){
      break;
    }
    if(num % primo != 0){
      printf("%d\n",num);
    }
  }
  printf("%d\n",-1);

}