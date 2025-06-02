

#include "bogo.h"

int size = 3;
int limit = 10; 
uint32_t counter = 0;
uint32_t overflows = 0;

int main() {
  
  printf("starting...\n");


  

  for (int i = size; i < limit; i++) {
    
    printf("size :: %d\n", size);

    uint8_t * init_array = (uint8_t *) calloc(size, sizeof(uint8_t));
    
    for (int j = 0; j < size; j++) {
      init_array[j] = j;
    }

    shuffle(init_array);

    
    printdeck(init_array);
    
    bogosort(init_array);
    
    printf("\n");

    size++;
    free(init_array);
    
    printf("  counter   :: %d\n", counter);
    printf("  overflows :: %d\n\n\n", overflows);
  }

  

  return 1;
}
