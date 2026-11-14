#include "collector.h"
#include "droplet.h"

/* Mk3 controller: supports the revised shield and three droplet probes. */
void collector_init(void) {
    droplet_sensor_init(3);
    shield_enable();
}

uint32_t collector_yield_ml(void) {
    return droplet_count_take() * DROPLET_UL_MK3 / 1000U;
}
