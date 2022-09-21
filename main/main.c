/*
 * SPDX-FileCopyrightText: 2010-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <stdio.h>
#include "sdkconfig.h"
#include "zw800.h"

static const char *TAG = "zw-800";

void app_main(void) {

    // zw800 finger print sensor
    zw800_config_t zw800_config = ZW800_CONFIG_DEFAULT();
    zw800_init(&zw800_config);
}
