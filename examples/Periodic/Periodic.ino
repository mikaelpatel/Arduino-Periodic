/**
 * @file Periodic.ino
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
 * Demo Periodic Blocks.
 */

#include <Periodic.h>

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  static uint16_t nr = 0;
  static uint16_t x = 0;
  static uint16_t y = 0;
  static uint16_t z = 0;

  delay(10);
  nr += 1;

  periodic(100) {
    x += 1;
  }

  periodic(1000) {
    y += 1;
  }

  periodic(10000) {
    z += 1;
  }

  periodic(5000) {
    Serial.print(millis());
    Serial.print(' ');
    Serial.print(nr);
    Serial.print(' ');
    Serial.print(x);
    Serial.print(' ');
    Serial.print(y);
    Serial.print(' ');
    Serial.print(z);
    Serial.println();
  }
}

