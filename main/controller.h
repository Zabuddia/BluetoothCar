#ifndef CONTROL_H
#define CONTROL_H

#include <stdio.h>
#include <stdbool.h>
#include "btn.h"
#include "joy.h"
#include "pin.h"
#include "bluetooth.h"

void controller_init();
void controller_tick();

#endif // CONTROL_H