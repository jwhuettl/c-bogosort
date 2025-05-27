
#include "bogo.h"

int bogosort(uint8_t * array) {
  
  int sorted = 1;
  uint32_t counter = 0;
  uint32_t overflows = 0;

  do {
    
    // shuffle array
    shuffle(array);

    // check for sortedness
    int tmp_sorted = 0;

    for (int i = 0; i < size; i++) {
      if (array[i] != i) {
        tmp_sorted = 1;
      }
    }
    
    counter++;

  } while (!sorted);

}
