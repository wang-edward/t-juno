#include <functional>
#include <Mux.h>
using namespace admux;


Mux muxArr[] = {
    Mux(Pin(24, INPUT, PinType::Analog),Pinset(29,30,31,32)), 
    Mux(Pin(25, INPUT, PinType::Analog),Pinset(29,30,31,32)),
    Mux(Pin(26, INPUT, PinType::Analog),Pinset(29,30,31,32))
};

using namespace std;
class parameter {
    public:
        int midi_control; // midi control number (0-127);
        double value; //calculated value
        int position; // physical position of potentiometer (0-1023)
        int old_position; // old physical position (0-1023)

        const int mux_position; // which pin of the mux to read (0-15)
        const int mux_address; // which mux to search in (0-2)
        
        void check() {
            
        };

        double calculate_value(int value, function<int (int)> func) {
            return func(value);
        };
        int updateOld() {
            old_position = read();
        };
        int read() {
            return muxArr[mux_address].read(mux_position);
        };
};


        // void check() {
        //     if (value!=oldValue) {
        //         oldValue = read();
        //     } else {
                
        //     }
        //     if (read()!= oldValue) {

        //         }
        //         value = analogRead();
            
        // }
        // void update(void (*func) ()) {
        //     value = oldValue;
        //     func(value);
        // }
