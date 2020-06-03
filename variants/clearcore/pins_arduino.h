/*
  pins_arduino.h - Pin definition functions for Arduino
  Part of Arduino - http://www.arduino.cc/

  Copyright 2020, Teknic, Inc.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA
*/

#include "variant.h"
#include "SysManager.h"

// Arduino-esque pin names
#define IO0 CLEARCORE_PIN_IO0
#define IO1 CLEARCORE_PIN_IO1
#define IO2 CLEARCORE_PIN_IO2
#define IO3 CLEARCORE_PIN_IO3
#define IO4 CLEARCORE_PIN_IO4
#define IO5 CLEARCORE_PIN_IO5

#define DI6 CLEARCORE_PIN_DI6
#define DI7 CLEARCORE_PIN_DI7
#define DI8 CLEARCORE_PIN_DI8

#define A9  CLEARCORE_PIN_A9
#define A10 CLEARCORE_PIN_A10
#define A11 CLEARCORE_PIN_A11
#define A12 CLEARCORE_PIN_A12

#define M0 CLEARCORE_PIN_M0
#define M1 CLEARCORE_PIN_M1
#define M2 CLEARCORE_PIN_M2
#define M3 CLEARCORE_PIN_M3

#define M0INA CLEARCORE_PIN_INA_M0
#define M0INB CLEARCORE_PIN_INB_M0
#define M1INA CLEARCORE_PIN_INA_M1
#define M1INB CLEARCORE_PIN_INB_M1
#define M2INA CLEARCORE_PIN_INA_M2
#define M2INB CLEARCORE_PIN_INB_M2
#define M3INA CLEARCORE_PIN_INA_M3
#define M3INB CLEARCORE_PIN_INB_M3

// CCIO-8 pin names 
#define CCIOA0 CLEARCORE_PIN_CCIOA0
#define CCIOA1 CLEARCORE_PIN_CCIOA1
#define CCIOA2 CLEARCORE_PIN_CCIOA2
#define CCIOA3 CLEARCORE_PIN_CCIOA3
#define CCIOA4 CLEARCORE_PIN_CCIOA4
#define CCIOA5 CLEARCORE_PIN_CCIOA5
#define CCIOA6 CLEARCORE_PIN_CCIOA6
#define CCIOA7 CLEARCORE_PIN_CCIOA7
#define CCIOB0 CLEARCORE_PIN_CCIOB0
#define CCIOB1 CLEARCORE_PIN_CCIOB1
#define CCIOB2 CLEARCORE_PIN_CCIOB2
#define CCIOB3 CLEARCORE_PIN_CCIOB3
#define CCIOB4 CLEARCORE_PIN_CCIOB4
#define CCIOB5 CLEARCORE_PIN_CCIOB5
#define CCIOB6 CLEARCORE_PIN_CCIOB6
#define CCIOB7 CLEARCORE_PIN_CCIOB7
#define CCIOC0 CLEARCORE_PIN_CCIOC0
#define CCIOC1 CLEARCORE_PIN_CCIOC1
#define CCIOC2 CLEARCORE_PIN_CCIOC2
#define CCIOC3 CLEARCORE_PIN_CCIOC3
#define CCIOC4 CLEARCORE_PIN_CCIOC4
#define CCIOC5 CLEARCORE_PIN_CCIOC5
#define CCIOC6 CLEARCORE_PIN_CCIOC6
#define CCIOC7 CLEARCORE_PIN_CCIOC7
#define CCIOD0 CLEARCORE_PIN_CCIOD0
#define CCIOD1 CLEARCORE_PIN_CCIOD1
#define CCIOD2 CLEARCORE_PIN_CCIOD2
#define CCIOD3 CLEARCORE_PIN_CCIOD3
#define CCIOD4 CLEARCORE_PIN_CCIOD4
#define CCIOD5 CLEARCORE_PIN_CCIOD5
#define CCIOD6 CLEARCORE_PIN_CCIOD6
#define CCIOD7 CLEARCORE_PIN_CCIOD7
#define CCIOE0 CLEARCORE_PIN_CCIOE0
#define CCIOE1 CLEARCORE_PIN_CCIOE1
#define CCIOE2 CLEARCORE_PIN_CCIOE2
#define CCIOE3 CLEARCORE_PIN_CCIOE3
#define CCIOE4 CLEARCORE_PIN_CCIOE4
#define CCIOE5 CLEARCORE_PIN_CCIOE5
#define CCIOE6 CLEARCORE_PIN_CCIOE6
#define CCIOE7 CLEARCORE_PIN_CCIOE7
#define CCIOF0 CLEARCORE_PIN_CCIOF0
#define CCIOF1 CLEARCORE_PIN_CCIOF1
#define CCIOF2 CLEARCORE_PIN_CCIOF2
#define CCIOF3 CLEARCORE_PIN_CCIOF3
#define CCIOF4 CLEARCORE_PIN_CCIOF4
#define CCIOF5 CLEARCORE_PIN_CCIOF5
#define CCIOF6 CLEARCORE_PIN_CCIOF6
#define CCIOF7 CLEARCORE_PIN_CCIOF7
#define CCIOG0 CLEARCORE_PIN_CCIOG0
#define CCIOG1 CLEARCORE_PIN_CCIOG1
#define CCIOG2 CLEARCORE_PIN_CCIOG2
#define CCIOG3 CLEARCORE_PIN_CCIOG3
#define CCIOG4 CLEARCORE_PIN_CCIOG4
#define CCIOG5 CLEARCORE_PIN_CCIOG5
#define CCIOG6 CLEARCORE_PIN_CCIOG6
#define CCIOG7 CLEARCORE_PIN_CCIOG7
#define CCIOH0 CLEARCORE_PIN_CCIOH0
#define CCIOH1 CLEARCORE_PIN_CCIOH1
#define CCIOH2 CLEARCORE_PIN_CCIOH2
#define CCIOH3 CLEARCORE_PIN_CCIOH3
#define CCIOH4 CLEARCORE_PIN_CCIOH4
#define CCIOH5 CLEARCORE_PIN_CCIOH5
#define CCIOH6 CLEARCORE_PIN_CCIOH6
#define CCIOH7 CLEARCORE_PIN_CCIOH7


#define SS   CLEARCORE_PIN_INVALID
#define MOSI CLEARCORE_PIN_INVALID
#define MISO CLEARCORE_PIN_INVALID
#define SCK  CLEARCORE_PIN_INVALID

#define SDCARD_SPI SPI2
