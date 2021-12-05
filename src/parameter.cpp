#include "parameter.h" 
#include "global_variables.cpp" // mux_array

parameter::parameter(int n_midi_control, int n_mux_address, int n_mux_position, function <int (int)> n_scaling_function) {
    midi_control = n_midi_control;
    mux_position = n_mux_position;
    mux_address = n_mux_address;
    scaling_function = n_scaling_function;
};


void parameter::initialize() {
    old_position = position = read();
}

int parameter::check() {
    int temp = read();
    if (temp != old_position) {
        old_position = position = temp;
        value = calculate(position);
    } else {
        return -1;
    }
};

int parameter::calculate(int n_position) {
    return scaling_function(n_position);
}

int parameter::read() {
    return mux_array[mux_address].Mux::read(mux_position);
}
