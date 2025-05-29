

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

// builds deck 

void builddeck(uint8_t * array, int size) {
  
  array = (uint8_t *) calloc(size, sizeof(uint8_t));

  for (int d = 0; d < size; d++) {
    printf("%d ", d);
    array[d] = d;
  }
  
  printf("\n");
}

// copy deck values between two decks
// using this because memcpy introduced some issues

void copydeck(uint8_t * from, uint8_t * to) {

  for (int cd = 0; cd < size; cd++) {
    to[cd] = from[cd];
  }
}

