// c-bogosort header


// imports
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <limits.h>
#include <stdint.h>

// variables
extern uint8_t * init_array;
extern uint8_t * shuffled_array;
extern uint8_t * sorted_array;
extern uint32_t counter;
extern uint32_t overflows;
extern int size;


// helper functions
void shuffle(uint8_t * array);
void printdeck(uint8_t * array);
void builddeck(uint8_t * array, int size);
void copydeck(uint8_t * from, uint8_t * to);

// bogosort
int bogosort(uint8_t * array);
