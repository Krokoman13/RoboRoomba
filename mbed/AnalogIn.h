/* mbed Microcontroller Library - AnalogIn
 * Copyright (c) 2006-2011 ARM Limited. All rights reserved.
 */ 

#ifndef MBED_ANALOGIN_H
#define MBED_ANALOGIN_H

#include "device.h"

#if DEVICE_ANALOGIN

#include "platform.h"
#include "PinNames.h"
#include "PeripheralNames.h"
#include "Base.h"

namespace mbed {

/** An analog input, used for reading the voltage on a pin 
 *
 * Example:
 * @code
 * // Print messages when the AnalogIn is greater than 50%
 * 
 * #include "mbed.h"
 * 
 * AnalogIn temperature(p20);
 * 
 * int main() {
 *     while(1) {
 *         if(temperature > 0.5) {
 *             printf("Too hot! (%f)", temperature.read());             
 *         }
 *     }
 * }
 * @endcode
 */
class AnalogIn :  public Base {

public:

    /** Create an AnalogIn, connected to the specified pin
     *
     * @param pin AnalogIn pin to connect to 
     * @param name (optional) A string to identify the object
     */
    AnalogIn(PinName pin, const char *name = NULL);
    
    /** Read the input voltage, represented as a float in the range [0.0, 1.0]
     *
     * @returns A floating-point value representing the current input voltage, measured as a percentage
     */
    float read();    

    /** Read the input voltage, represented as an unsigned short in the range [0x0, 0xFFFF]
     *
     * @returns
     *   16-bit unsigned short representing the current input voltage, normalised to a 16-bit value 
     */
    unsigned short read_u16();

#ifdef MBED_OPERATORS
    /** An operator shorthand for read()
     *
     * The float() operator can be used as a shorthand for read() to simplify common code sequences
     *
     * Example:
     * @code
     * float x = volume.read();
     * float x = volume;
     * 
     * if(volume.read() > 0.25) { ... }
     * if(volume > 0.25) { ... }
     * @endcode
     */
    operator float();
#endif

#ifdef MBED_RPC
    virtual const struct rpc_method *get_rpc_methods();
    static struct rpc_class *get_rpc_class();
#endif

protected:

    ADCName _adc;
    
};

} // namespace mbed

#endif

#endif
