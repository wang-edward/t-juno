#include "architecture.h"
void update_hpf_frequency(double value) {
    voice *v=voices, *end=voices + number_voices;
    do {
        v->hpf->frequency(value);
    } while (++v < end);
}

void update_lpf_frequency(double value) {
    voice *v=voices, *end=voices + number_voices;
    do {
        v->lpf->frequency(value);
    } while (++v < end);
}

void update_lpf_resonance(double value) {
    voice *v=voices, *end=voices + number_voices;
    do {
        v->lpf->resonance(value);
    } while (++v < end);
}

void update_master_volume(double value) {
    sgtl5000_1.volume(value);
}

void update_lfo_rate(double value) {
    lfo.frequency(value);
}

void update_lfo_delay(double value) {
    lfo_envelope.delay(value);
}

void update_osc_lfo_level(double value) {
    osc_lfo_amp.gain(value);
}

void update_pulse_width(double value) {
    if (pwm_lfo_on.state) {
        pwm_mixer.gain(0,value); //set lfo pwm level
        pwm_mixer.gain(1,0); //turn off manual pwm
    } else {
        pwm_mixer.gain(1,value); //set manual pwm level
        pwm_mixer.gain(0,0); // turn off lfo pwm
    }
}

//update sub level and noise level
void update_sub_level(double value) {
    if (value>0) {
        voice *v=oscs,*end=oscs+number_voices;
        float velocity;
        do {
        if (v->note < 0) continue;
            velocity = velocity_on.state ? v->velocity/127. : 1;
            // v->sub->amplitude(velocity*channelVolume*GAIN_OSC*value);
            v->sub->amplitude(velocity * channel_volume.value * value);
        } while(++v < end);
    }
}