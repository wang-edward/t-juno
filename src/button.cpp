#include "button.h"
int button::read() {
    return mux_array[mux_address].Mux::read(mux_position);
}