
#include "bogo.h"

int bogosort(uint8_t * array) {
  
  int sorted = 0;
  uint32_t counter = 0;
  uint32_t overflows = 0;

  uint8_t * sorted_array = (uint8_t *) calloc(size, sizeof(uint8_t));

  sorted = 0;

  do {
    
    memcpy(&sorted_array, &array, size * sizeof(uint8_t));

    printdeck(sorted_array);
    

    counter++;

  } while (counter == 0);
  
  

}
