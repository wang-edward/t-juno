#include "synth.h"
int synth::check_all() {
        for (parameter *p : parameters) {
            p->check();
        }
        return 0;
    }


// VIRTUAL PARAMS

