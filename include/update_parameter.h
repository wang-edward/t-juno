#include "architecture.h"
void update_hpf_frequency(double value) {
    voice *o=voices, *end=voices + number_voices;
    do {
        o->hpf->frequency(value);
    } while (++o < end);
}

void update_lpf_frequency(double value) {
    voice *o=voices, *end=voices + number_voices;
    do {
        o->lpf->frequency(value);
    } while (++o < end);
}

void update_lpf_resonance(double value) {
    voice *o=voices, *end=voices + number_voices;
    do {
        o->lpf->resonance(value);
    } while (++o < end);
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
    if (pwm_lfo_on) {
        
    }
}