

#include "bogo.h"

int size = 1;
int limit = 10; 

int main() {
  
  printf("starting...\n");


  uint8_t * init_array = (uint8_t *) calloc(size, sizeof(uint8_t));

  for (int i = size; i < limit; i++)  {
      
    // build deck
    for (int j = 0; j < size; j++) {
      init_array[j] = j;
    }

    // shuffle it
    shuffle(init_array);

    printdeck(init_array);

    printf("\n");


    size++;
  }

  return 1;
}
