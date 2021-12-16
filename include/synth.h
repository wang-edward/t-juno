#include "global_variables.cpp"
// #include "parameter.h"
#include "voice.h"
// #include "architecture.h"
// #include "list_parameter.cpp"

class synth {
    public:
        

        long timer = 0;
        const int debounce_time = 5; //amount of time between checks, not total time

        

        #include "list_parameter.h"
        static const int number_voices = 8;
        voice voices[number_voices] = {
            { &pulse_lfo0, &saw0, &sub0, &noise0, &osc_mixer0, &hpf0, &lpf0, &lpf_mod_mixer0, & lpf_envelope0, &lfo_envelope0, &envelope0, -1, 0},
            { &pulse_lfo1, &saw1, &sub1, &noise1, &osc_mixer1, &hpf1, &lpf1, &lpf_mod_mixer1, & lpf_envelope1, &lfo_envelope1, &envelope1, -1, 0},
            { &pulse_lfo2, &saw2, &sub2, &noise2, &osc_mixer2, &hpf2, &lpf2, &lpf_mod_mixer2, & lpf_envelope2, &lfo_envelope2, &envelope2, -1, 0},
            { &pulse_lfo3, &saw3, &sub3, &noise3, &osc_mixer3, &hpf3, &lpf3, &lpf_mod_mixer3, & lpf_envelope3, &lfo_envelope3, &envelope3, -1, 0},
            { &pulse_lfo4, &saw4, &sub4, &noise4, &osc_mixer4, &hpf4, &lpf4, &lpf_mod_mixer4, & lpf_envelope4, &lfo_envelope4, &envelope4, -1, 0},
            { &pulse_lfo5, &saw5, &sub5, &noise5, &osc_mixer5, &hpf5, &lpf5, &lpf_mod_mixer5, & lpf_envelope5, &lfo_envelope5, &envelope5, -1, 0},
            { &pulse_lfo6, &saw6, &sub6, &noise6, &osc_mixer6, &hpf6, &lpf6, &lpf_mod_mixer6, & lpf_envelope6, &lfo_envelope6, &envelope6, -1, 0},
            { &pulse_lfo7, &saw7, &sub7, &noise7, &osc_mixer7, &hpf7, &lpf7, &lpf_mod_mixer7, & lpf_envelope7, &lfo_envelope7, &envelope7, -1, 0},
        };

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

        int check_all();

        void check_buttons();

        void check_parameters();
};

// VIRTUAL PARAMS

