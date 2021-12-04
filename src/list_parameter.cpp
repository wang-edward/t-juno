#include "parameter.cpp"

// int n_midi_control, int n_mux_address, int n_mux_position, function <int (int)> n_scaling_function)

parameter master_volume (8, 1, 8, [](int value) -> int {
    return value/127.;
});

bool  polyOn = true;
bool  omniOn;
bool  velocityOn = true;

//bool sub or LFO idk

bool pulseOn = true; //default to true
bool sawOn = true;
//bool noiseOn = false; //start with false
//bool subOn = true;

bool pwmLfoOn;

parameter lfo_rate (101, 0, 0, [](int value) -> int {
    return 30 * (pow((value/127.),2));
});

parameter lfo_delay (104, 0, 1, [](int value) -> int {
    return 2000 * (pow((value/127.),2));
});

parameter osc_lfo_level (102, 0, 2, [](int value) -> int {
    return (pow((value/127.),2));
});

parameter pulse_width (24, 0, 3, [](int value) -> int {
    return (value/127.)*0.9+0.05;
});

parameter sub_level (86, 0, 4, [](int value) -> int {
    return value/127.;
});

parameter noise_level (87, 0, 5, [](int value) -> int {
    return max(0.01,value/127.);
});


bool  sustainPressed;

parameter channel_volume (7, 0, 12, [](int value) -> int {
    return value/127.;
});

// float panorama;
float pitchBend;  // -1/+1 oct
float pitchScale;
int   octCorr;

// 20-AUDIO_SAMPLE_RATE_EXACT/2.5
parameter lpf_frequency (14, 0, 7, [](int value) -> int {
    return min(float(pow(value, 2)),10000);
});

// 0.9-5.0
parameter lpf_resonance (15, 0, 8, [](int value) -> int {
    return value*4.1/127.+0.9;
});

parameter lpf_env_level (88, 0, 9, [](int value) -> int {
    return (value/127.) * 2;
});

parameter lpf_lfo_level (89, 0, 10, [](int value) -> int {
    return (value/127.) * 2;
});

parameter lpf_keyboard_level (90, 0, 11, [](int value) -> int {
    return (value/127.) * 2;
});

parameter lpf_mod_wheel_level (1, -1, -1, [](int value) -> int {
    return (value/127.)*2;
});

parameter hpf_frequency (75, 0, 6, [](int value) -> int {
    return pow(value,2);
});

parameter hpf_resonance (76, 0, 7, [](int value) -> int {
    return value*4.1/127.+0.9;
});

parameter envelope_attack(12, 1, 1, [](int value) -> int {
    return 1000 * (pow((value/127.),2));
});

parameter envelope_decay(22, 1, 2, [](int value) -> int {
    return value*200./127.;
});

parameter envelope_sustain(22, 1, 3, [](int value) -> int {
    return value/127.;
});

parameter envelope_release(13, 1, 4, [](int value) -> int {
    return 1000 * (pow((value/127.),2));
});

parameter flanger_offset(26, 0, 13, [](int value) -> int {
    return int(value/127.*8)*DELAY_LENGTH/8;
});

parameter flanger_depth(27, 0, 14, [](int value) -> int {
    return int(value/127.*8)*DELAY_LENGTH/8;
});

parameter flanger_frequency(28, 0, 15, [](int value) -> int {
    return value/127.*10.;
});

parameter flanger_frequency_fine(29, 1, 0, [](int value) -> int {
    return value/127.;
});

float lpfOctaveControl;
float sumLpfLevels; 
float maxLpfMod; // maximum amount of modulation without clipping

float lpfEnvGain;
float lpfLfoGain; 
float lpfKbdGain;
float lpfModWheelGain;


// envelope
bool  envOn = true;


// FX
bool  flangerOn;
int   flangerOffset;
int   flangerDepth;
float flangerFreqCoarse;
float flangerFreqFine;

// portamento
bool     portamentoOn = false;
uint16_t portamentoTime; //ms ?
int8_t   portamentoDir;
float    portamentoStep;
float    portamentoPos;
