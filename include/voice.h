#include <Audio.h>
class voice {
    public:
        AudioSynthWaveformModulated*  pulse_lfo;
        AudioSynthWaveformModulated*  saw;
        AudioSynthWaveformModulated*  sub;
        AudioSynthNoiseWhite*         noise;

        AudioMixer4*                  osc_mixer;
        
        AudioFilterStateVariable*     hpf;
        AudioFilterLadder*     lpf;
        
        AudioMixer4*                  lpf_mod_mixer;
        AudioEffectEnvelope*          lpf_envelope;
        AudioEffectEnvelope*          lfo_envelope;
        AudioEffectEnvelope*          envelope;
        
        int8_t  note;
        uint8_t velocity;
};