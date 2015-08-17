/**
 * @file PeriodicBlink.ino
 * @version 1.0
 *
 * @section License
 * Copyright (C) 2015, Mikael Patel
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * @section Description
 * Demo Arduino Periodic Blocks: Blink RGB LED.
 */

#include <Periodic.h>

static int RED_LED = 13;
static int GREEN_LED = 12;
static int BLUE_LED = 11;

void setup()
{
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
}

void loop()
{
  periodic(250) {
    digitalWrite(RED_LED, !digitalRead(RED_LED));
  }

  periodic(500) {
    digitalWrite(GREEN_LED, !digitalRead(GREEN_LED));
  }

  periodic(1000) {
    digitalWrite(BLUE_LED, !digitalRead(BLUE_LED));
  }
}
