#include "parameter.cpp"
// #include <cstdint>
class button: public parameter {

    public:

        bool state;
        static uint16_t int_state;

        parameter::parameter;
        // bool read() override {};
        bool read_raw() {};
        bool debounce() {};
        bool update() {};

};