/**
 * @file PeriodicDemo.ino
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
 * Demo Arduino Periodic Blocks.
 */

#include <Periodic.h>

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  // Counters for each period
  static uint16_t x10 = 0;
  static uint16_t x100 = 0;
  static uint16_t x1000 = 0;
  static uint16_t x10000 = 0;

  // Delay to simulate some processing
  delay(10);
  x10 += 1;

  // Run every 100 ms
  periodic(100) {
    x100 += 1;
  }

  // Run every 1.000 ms
  periodic(1000) {
    x1000 += 1;
  }

  // Run every 10.000 ms
  periodic(10000) {
    x10000 += 1;
  }

  // Run every 5.000 ms
  periodic(5000) {
    Serial.print(millis());
    Serial.print(' ');
    Serial.print(x10);
    Serial.print(' ');
    Serial.print(x100);
    Serial.print(' ');
    Serial.print(x1000);
    Serial.print(' ');
    Serial.print(x10000);
    Serial.println();
  }
}
