
// imports
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <limits.h>

// deck struct
// might not use this
typedef struct deck {
  uint8_t size;
  uint8_t * p_deck;
  uint32_t counter;
  uint32_t overflows;
} deck;

// variables
uint8_t size; // how many items we are trying to sort
uint32_t counter; // how many attempts
uint32_t overflows; // when it gets real bad
uint8_t * shuffled_array; // array we are trying to sort
uint8_t * sorted_array;  // each sorting attempt
uint8_t * init_array; // the starting array
