#include <functional>
#include <Mux.h>
#include "global_variables.cpp"

using namespace std;
class parameter {
    public:
        int midi_control; // midi control number (0-127);
        double value; //calculated value
        int position; // physical position of potentiometer (0-1023)
        int old_position; // old physical position (0-1023)

        int mux_position; // which pin of the mux to read (0-15)
        int mux_address; // which mux to search in (0-2)

        function <int (int)> scaling_function; //function to convert raw value into useable

        parameter(int n_midi_control, int n_mux_position, int n_mux_address, function <int (int)> n_scaling_function);
        
        int initialize();

        int check();

        int calculate(int n_position);

        virtual int read();
};


