#include "global_variables.cpp"
#include "parameter.h"
#include "button.h"

class synth {

    long timer = 0;
    const int debounce_time = 5; //amount of time between checks, not total time

    parameter* parameters[22] = {
        &master_volume,
        &lfo_rate,
        &lfo_delay,
        &osc_lfo_level,
        &pulse_width,
        &sub_level,
        &noise_level,
        &hpf_frequency,
        &lpf_frequency,
        &lpf_resonance,
        &lpf_env_level,
        &lpf_lfo_level,
        &lpf_keyboard_level,
        &channel_volume,
        &flanger_offset,
        &flanger_depth,
        &flanger_frequency,
        &flanger_frequency_fine,
        &envelope_attack,
        &envelope_decay,
        &envelope_sustain,
        &envelope_release
    };

    button* buttons[9] = {

    };

    void check_all();
    
    void check_buttons();

    void check_parameters();

};

// VIRTUAL PARAMS

