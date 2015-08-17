/*  Copyright (c) 2015 by Umar Dockrat<umarfd ~A~t~ gmail.com>

    This file is part of the Arduino TLC5955 Library.

 */

/** \file
    TLC5955 library header file. */
    
extern uint8_t tlc_register[97];

/** The main Tlc5955 class for the entire library. */
class TLC5955
{
  public:
    void init(uint16_t initialValue = 0);
    void setAll(uint16_t value);
    void setLED(uint16_t led, uint16_t value);
    void writeCD(DC,MC,BC,FC);
    void writeGS();
    void tlc_Latch();
};