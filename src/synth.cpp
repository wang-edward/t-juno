#include "synth.h"
#include "time.h"
void synth::check_parameters() {
    for (parameter *p : parameters) {
        p->check();
    }
}

void synth::check_buttons() {
    long current_time = millis(); // get current time
    if (current_time - timer > debounce_time) {
        for (button *b : buttons) {
            b->update();
        }
    }
}

void synth::check_all() {
    check_parameters();
    check_buttons();
}
void synth::update_hpf_frequency(double value) {
    voice *o=voices, *end=voices + number_voices;
    do {
        o->hpf->frequency(value);
    } while (++o < end);
}

void synth::update_lpf_frequency(double value) {
    voice *o=voices, *end=voices + number_voices;
    do {
        o->lpf->frequency(value);
    } while (++o < end);
}

void synth::update_lpf_resonance(double value) {
    voice *o=voices, *end=voices + number_voices;
    do {
        o->lpf->resonance(value);
    } while (++o < end);
}


// VIRTUAL PARAMS

