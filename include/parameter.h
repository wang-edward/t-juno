#include <functional>

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

        parameter(int n_midi_control, int n_mux_address, int n_mux_position, function <int (int)> n_scaling_function);
        
        void initialize();

        int check();

        int calculate(int n_position);

        virtual int read();
};


