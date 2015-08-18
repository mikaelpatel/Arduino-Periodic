/**
 * @file BlinkWithoutDelay.ino
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
 * Classical Blink without Delay example sketch rewritten with
 * the periodic library.
 *
 * @section Reference
 * 1. https://www.arduino.cc/en/Tutorial/BlinkWithoutDelay
 */

#include <Periodic.h>

static const int LED = 13;
static const long INTERVAL = 1000L;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  periodic(INTERVAL) digitalWrite(LED, !digitalRead(LED));
}
