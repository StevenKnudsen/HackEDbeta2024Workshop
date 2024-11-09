/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "pico/stdlib.h"
#include "hardware/gpio.h"

const uint8_t RGB_PIN1 = 0;
const uint8_t RGB_PIN2 = 1;
const uint8_t RGB_PIN3 = 2;

int main() {
    gpio_init(RGB_PIN1);
    gpio_set_dir(RGB_PIN1, GPIO_OUT);
    gpio_init(RGB_PIN2);
    gpio_set_dir(RGB_PIN2, GPIO_OUT);
    gpio_init(RGB_PIN3);
    gpio_set_dir(RGB_PIN3, GPIO_OUT);
    while (true) {
        gpio_put(RGB_PIN1, 0);
        gpio_put(RGB_PIN2, 1);
        gpio_put(RGB_PIN3, 1);
        sleep_ms(250);
        gpio_put(RGB_PIN1, 1);
        gpio_put(RGB_PIN2, 0);
        gpio_put(RGB_PIN3, 1);
        sleep_ms(250);
        gpio_put(RGB_PIN1, 1);
        gpio_put(RGB_PIN2, 1);
        gpio_put(RGB_PIN3, 0);
        sleep_ms(250);
    }
}
