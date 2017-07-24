#include "screen.h"
void clear_screen(){
  // uint16_t data = 0x0f | 'a';
  // uint16_t data2 = 0x0f | 'b';
  // uint16_t data3 = 0x0f | 'c';
  // uint16_t data4 = 0x0f | 'd';
  // uint16_t *vgaptr = (uint16_t *)0xb800;
  // uint16_t *vgaptr2 = (uint16_t *)0xb802;
  // uint16_t *vgaptr3 = (uint16_t *)0xb804;
  // uint16_t *vgaptr4 = (uint16_t *)0xb806;
  // *vgaptr = data;
  // *vgaptr2 = data2;
  // *vgaptr3 = data3;
  // *vgaptr4 = data4;
  for (uint16_t i = 0xb800; i<= 0xcabf; i+=2) {
      uint16_t data = 0x1c | 'a';
      uint16_t *vgaptr = (uint16_t *)i;
      *vgaptr = data;
  }
  set_cursor(0,0);
}
void set_cursor(uint8_t row, uint8_t column){
  cursor = 0xb800;
}

void get_cursor(uint8_t *row, uint8_t *column){

}

void set_color(uint8_t fgcolor, uint8_t bgcolor){

}

void get_color(uint8_t *fgcolor, uint8_t *bgcolor){

}

void put_char(uint8_t ch){

}

void puts(char *str){

}

void put_decimal(uint32_t n){

}
