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
// VIRTUAL PARAMS

