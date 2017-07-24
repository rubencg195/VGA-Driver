#ifndef SCREEN_H
# define SCREEN_HMY_HEADER
#include "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h"

uint16_t cursor;
uint16_t foreground;
uint16_t background;

void clear_screen();

void set_cursor(uint8_t row, uint8_t column);

void get_cursor(uint8_t *row, uint8_t *column);

void set_color(uint8_t fgcolor, uint8_t bgcolor);

void get_color(uint8_t *fgcolor, uint8_t *bgcolor);

void put_char(uint8_t ch);

void put(char *str);

void put_decimal(uint32_t n);

#endif
