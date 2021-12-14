#include "parameter.cpp";


parameter masterVolume   = 0.8;
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
