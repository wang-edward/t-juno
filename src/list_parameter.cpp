#include <algorithm>
#include <math.h>
#include "parameter.h"
#include "global_variables.cpp"
// #include "global_variables.cpp"

// int n_midi_control, int n_mux_address, int n_mux_position, function <int (int)> n_scaling_function)

bool  polyOn = true;
bool  omniOn;
bool  velocityOn = true;

//bool sub or LFO idk

bool pulseOn = true; //default to true
bool sawOn = true;
//bool noiseOn = false; //start with false
//bool subOn = true;

bool pwmLfoOn;

bool  sustainPressed;

// float panorama;
float pitchBend;  // -1/+1 oct
float pitchScale;
int   octCorr;

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

// portamento
bool     portamentoOn = false;
uint16_t portamentoTime; //ms ?
int8_t   portamentoDir;
float    portamentoStep;
float    portamentoPos;




