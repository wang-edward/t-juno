#include <Mux.h>
#include "list_parameter.cpp"

using namespace admux;
extern Mux mux_array[] = {
    Mux(Pin(24, INPUT, PinType::Analog),Pinset(29,30,31,32)), 
    Mux(Pin(25, INPUT, PinType::Analog),Pinset(29,30,31,32)),
    Mux(Pin(26, INPUT, PinType::Analog),Pinset(29,30,31,32))
};

const int num_params = 21;

extern parameter parameters[] = {
    &hpf_resonance
};

cout<<hpf_resonance.read();

const int DELAY_LENGTH = 1;