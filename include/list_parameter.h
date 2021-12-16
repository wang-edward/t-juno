#include <math.h>
#include "parameter.h"
#include "update_parameter.h"
#include <functional>
//virtual params

// parameter hpf_resonance (76, -1, -1, [](double value) -> double {
//     return value*4.1/127.+0.9;
// }
// );

// parameter lpf_mod_wheel_level (1, -1, -1, [](double value) -> double {
//     return (value/127.)*2;
// }
// );

//REAL PARAMS

parameter master_volume (8, 1, 8, [](double value) -> double {
    return value/127.;
},&update_master_volume
);

parameter lfo_rate (101, 0, 0, [](double value) -> double {
    return 30 * (pow((value/127.),2));
},&update_lfo_rate
);

parameter lfo_delay (104, 0, 1, [](double value) -> double {
    return 2000 * (pow((value/127.),2));
}, &update_lfo_delay
);

parameter osc_lfo_level (102, 0, 2, [](double value) -> double {
    return (pow((value/127.),2));
},&update_osc_lfo_level
);

parameter pulse_width (24, 0, 3, [](double value) -> double {
    return (value/127.)*0.9+0.05;
},
);

parameter sub_level (86, 0, 4, [](double value) -> double {
    return value/127.;
});

parameter noise_level (87, 0, 5, [](double value) -> double {
    return max(0.01,value/127.);
});




parameter hpf_frequency (75, 0, 6, [](double value) -> double {
    return pow(value,2);
});

// 20-AUDIO_SAMPLE_RATE_EXACT/2.5
parameter lpf_frequency (14, 0, 7, [](double value) -> double {
    return std::min((double)(pow(value,2)),10000);
});

// 0.9-5.0
parameter lpf_resonance (15, 0, 8, [](double value) -> double {
    return value*4.1/127.+0.9;
});

parameter lpf_env_level (88, 0, 9, [](double value) -> double {
    return (value/127.) * 2;
});

parameter lpf_lfo_level (89, 0, 10, [](double value) -> double {
    return (value/127.) * 2;
});

parameter lpf_keyboard_level (90, 0, 11, [](double value) -> double {
    return (value/127.) * 2;
});

parameter channel_volume (7, 0, 12, [](double value) -> double {
    return value/127.;
});

parameter flanger_offset(26, 0, 13, [](double value) -> double {
    return double(value/127.*8)*DELAY_LENGTH/8;
});

parameter flanger_depth(27, 0, 14, [](double value) -> double {
    return double(value/127.*8)*DELAY_LENGTH/8;
});

parameter flanger_frequency(28, 0, 15, [](double value) -> double {
    return value/127.*10.;
});

parameter flanger_frequency_fine(29, 1, 0, [](double value) -> double {
    return value/127.;
});

parameter envelope_attack(12, 1, 1, [](double value) -> double {
    return 1000 * (pow((value/127.),2));
});

parameter envelope_decay(22, 1, 2, [](double value) -> double {
    return value*200./127.;
});

parameter envelope_sustain(22, 1, 3, [](double value) -> double {
    return value/127.;
});

parameter envelope_release(13, 1, 4, [](double value) -> double {
    return 1000 * (pow((value/127.),2));
});

// button polyphony_on(); //use potentiometer for poly
// button omni
button velocity_on();
button pulse_on();
button saw_on();
button pwm_lfo_on();
button envelope_on();
button flanger_on();
button portamento_on();





//uint8_t currentProgram = WAVEFORM_SAWTOOTH;

bool  polyOn = true;
bool  omniOn;
bool  velocityOn = true;

//bool sub or LFO idk

bool pulseOn = true; //default to true
bool sawOn = true;
//bool noiseOn = false; //start with false
//bool subOn = true;

bool pwmLfoOn;

float lfoRate;
float lfoDelay; // not yet
float pulseWidth; // 0.05-0.95
float oscLfoLevel;
float noiseLevel;
float subLevel;

bool  sustainPressed;
float channelVolume = 1.0;
float panorama;
float pitchBend;  // -1/+1 oct
float pitchScale;
int   octCorr;

// filter
//FilterMode_t filterMode;
float lpfFreq; // 20-AUDIO_SAMPLE_RATE_EXACT/2.5
float lpfReso; // 0.9-5.0
float lpfLfoLevel; //amt mod from lfo
float lpfEnvLevel; //AMOUNT OF MODULATION FROM ENVELOPE
float lpfKbdLevel; //amt mod from keyboard
float lpfModWheelLevel; // modulation from mod wheel
//float lpfAtt;  // 0-1

float lpfOctaveControl;
float sumLpfLevels; 
float maxLpfMod; // maximum amount of modulation without clipping

float lpfEnvGain;
float lpfLfoGain; 
float lpfKbdGain;
float lpfModWheelGain;

float hpfFreq; // 20-AUDIO_SAMPLE_RATE_EXACT/2.5
float hpfReso; // 0.9-5.0
//float hpfAtt;  // 0-1

// envelope
bool  envOn = true;
float envDelay;   // 0-200
float envAttack;  // 0-200
float envHold;    // 0-200
float envDecay;   // 0-200
float envSustain; // 0-1
float envRelease; // 0-200

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
