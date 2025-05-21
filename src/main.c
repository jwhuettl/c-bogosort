

#include "bogo.h"


void printdeck(uint8_t * array) {
  
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }

  printf("\n");
}


// using fisher-yates for shuffle

uint8_t * shuffle(uint8_t * array) {
  
  srand(time(NULL));

  shuffled_array = (uint8_t *) calloc(size, sizeof(uint8_t));

  memcpy(&shuffled_array, &array, size * sizeof(uint8_t));

  for (int i = (size - 1); i -- > 0;) {
    int j = rand() % (size - 1);

    int temp = shuffled_array[i];
    shuffled_array[i] = shuffled_array[j];
    shuffled_array[j] = temp;
  }

  return shuffled_array;

}

// 0 == false
// 1 == true

int bogosort(uint8_t * array, int size) {
  
  int sorted = 0;
  int counter = 0;

  while (!sorted) {
    
    sorted = 1;
    counter++;

    uint8_t * sorted_arr = shuffle(array);

    printdeck(sorted_arr);

    for (int i = 0; i < size; i++) {
      if (sorted_arr[i] != i) {
        sorted = 0;
      }
    }


    // trying to catch overflows
    if (counter == INT_MAX - 1) {
      overflows++;
      counter = 0;
    }
  }

  return counter;

}


int main() {

  size = 2;

  while (size > 53) {

    counter = 0;

    init_array = (uint8_t *) calloc(size, sizeof(uint8_t));

    for (int i = 0; i < size; i++) {
      init_array[i] = i;
    }

    // shuffle
    shuffle(init_array);
  
    // start bogosort
    bogosort(shuffled_array);


    // loging should happen here


    // free mem
    // reset counter / overflow 
    free(init_array);
    overflow = 0;
    counter = 0;
  }
  
  
  

}
