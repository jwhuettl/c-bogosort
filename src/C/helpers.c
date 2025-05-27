

#include "bogo.h"

// shuffle function
// using fisher-yates

void shuffle(uint8_t * array) {
  
  srand(time(NULL));

  // reverse for loop
  for (int i = (size - 1); i -- > 0;) {
    
    int j = rand() % (size - 1);

    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
  }

}

// prints out deck

void printdeck(uint8_t * array) {
  
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }

  printf("\n");
}
