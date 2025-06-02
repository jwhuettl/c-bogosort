
#include "bogo.h"

int bogosort(uint8_t * array) {
  
  int sorted = 0;
  counter = 0;
  overflows = 0;

  uint8_t * sorted_array = (uint8_t *) calloc(size, sizeof(uint8_t));

  sorted = 0;

  do {

    sorted = 1;

    copydeck(array, sorted_array);
    
    shuffle(sorted_array);

    // printdeck(sorted_array);

    for (int ch = 0; ch < size; ch++) {
      if (sorted_array[ch] != ch) {
        sorted = 0;
      }
    }

    if (counter == INT_MAX - 1) {
      overflows++;
      counter = 0;
    }
    
    counter++;

  } while (!sorted);
  
  

}
