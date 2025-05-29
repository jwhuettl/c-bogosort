

#include "bogo.h"

int size = 3;
int limit = 10; 

int main() {
  
  printf("starting...\n");


  

  for (int i = size; i < limit; i++) {
    
    uint8_t * init_array = (uint8_t *) calloc(size, sizeof(uint8_t));
    
    for (int j = 0; j < size; j++) {
      init_array[j] = j;
    }

    shuffle(init_array);

    
    printdeck(init_array);
    
    uint8_t * workarray = (uint8_t *) calloc(size, sizeof(uint8_t));

    copydeck(init_array, workarray);

    shuffle(workarray);

    printdeck(workarray);
    
    printf("\n");

    size++;
    free(init_array);
    free(workarray);
    
  }

  

  return 1;
}
