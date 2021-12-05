#include "global_variables.cpp"
#include "parameter.h"

class synth {
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

    int check_all();
};

// VIRTUAL PARAMS

