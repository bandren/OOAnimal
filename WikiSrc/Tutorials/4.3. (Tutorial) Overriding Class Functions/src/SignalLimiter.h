/* Copyright (C) 2014 Brendan Bruner
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * bbruner@ualberta.ca
 * 
 * Created: Dec. 2, 2014
 */
#ifndef SIGNAL_LIMITER_H_
#define SIGNAL_LIMITER_H_

#include "Class.h"

Class(SignalLimiter)
  Data
    double _max;
    double _min;
    double _dcBias;
  Methods
    void (*setMin)(SignalLimiter *, double);
    void (*setMax)(SignalLimiter *, double);
    void (*setDCBias)(SignalLimiter *, double);
    double (*hook)(SignalLimiter *, double);
    double (*signal)(SignalLimiter *, double);
EndClass;

#endif /* SIGNAL_LIMITER_H_ */
