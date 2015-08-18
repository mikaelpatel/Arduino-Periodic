/**
 * @file Periodic.h
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
 */

#ifndef PERIODIC_H
#define PERIODIC_H

/**
 * Create unique name from given parameter and line number.
 * @param[in] name of parameter.
 * @return name to concatenated with line number.
 */
#define __UNIQUE(name) __CONCAT(name,__LINE__)

/**
 * Syntactic sugar for periodic blocks. Used in the form:
 * @code
 * void loop()
 * {
 *   periodic(ms) {
 *     ...
 *   }
 * }
 * @endcode
 * May be used several times in the loop block. Creates an unique
 * timer for each instance.
 * @param[in] ms period in milli-seconds.
 */
#define periodic(ms)							\
  static uint32_t __UNIQUE(timer) = 0L;					\
  for (int __UNIQUE(i) = 1;						\
       (__UNIQUE(i) != 0) && ((millis() - __UNIQUE(timer)) >= ms);	\
       __UNIQUE(i)--, __UNIQUE(timer) += ms)

#endif
