#include "button.h"
bool button::read_raw() {
    int temp = mux_array[mux_address].Mux::read(mux_position);
    if (temp>600) {
        return true;
    } return false;
}

// debounce
// Service routine called by a timer interrupt
bool button::debounce() {
    int_state = 0; // Current debounce status
    int_state=(int_state<<1) | !read_raw() | 0xe000;
    if(int_state==0xf000)return true;
    return false;
}

void button::update() {
    state = debounce();
}