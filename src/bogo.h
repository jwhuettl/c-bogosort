
// imports
#include <stdio.h>
#include <stdlib.h>

// struct ?

typedef struct deck {
  uint8_t * ptr;
  uint8_t size;
  uint32_t count;
  uint32_t overflows; 
} deck;

