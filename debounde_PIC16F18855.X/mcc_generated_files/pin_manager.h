/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 3.15.0
        Device            :  PIC16F18855
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.20

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set D2 aliases
#define D2_TRIS               TRISA0
#define D2_LAT                LATA0
#define D2_PORT               RA0
#define D2_WPU                WPUA0
#define D2_ANS                ANSA0
#define D2_SetHigh()    do { LATA0 = 1; } while(0)
#define D2_SetLow()   do { LATA0 = 0; } while(0)
#define D2_Toggle()   do { LATA0 = ~LATA0; } while(0)
#define D2_GetValue()         PORTAbits.RA0
#define D2_SetDigitalInput()    do { TRISA0 = 1; } while(0)
#define D2_SetDigitalOutput()   do { TRISA0 = 0; } while(0)

#define D2_SetPullup()    do { WPUA0 = 1; } while(0)
#define D2_ResetPullup()   do { WPUA0 = 0; } while(0)
#define D2_SetAnalogMode()   do { ANSA0 = 1; } while(0)
#define D2_SetDigitalMode()   do { ANSA0 = 0; } while(0)


// get/set D3 aliases
#define D3_TRIS               TRISA1
#define D3_LAT                LATA1
#define D3_PORT               RA1
#define D3_WPU                WPUA1
#define D3_ANS                ANSA1
#define D3_SetHigh()    do { LATA1 = 1; } while(0)
#define D3_SetLow()   do { LATA1 = 0; } while(0)
#define D3_Toggle()   do { LATA1 = ~LATA1; } while(0)
#define D3_GetValue()         PORTAbits.RA1
#define D3_SetDigitalInput()    do { TRISA1 = 1; } while(0)
#define D3_SetDigitalOutput()   do { TRISA1 = 0; } while(0)

#define D3_SetPullup()    do { WPUA1 = 1; } while(0)
#define D3_ResetPullup()   do { WPUA1 = 0; } while(0)
#define D3_SetAnalogMode()   do { ANSA1 = 1; } while(0)
#define D3_SetDigitalMode()   do { ANSA1 = 0; } while(0)


// get/set D4 aliases
#define D4_TRIS               TRISA2
#define D4_LAT                LATA2
#define D4_PORT               RA2
#define D4_WPU                WPUA2
#define D4_ANS                ANSA2
#define D4_SetHigh()    do { LATA2 = 1; } while(0)
#define D4_SetLow()   do { LATA2 = 0; } while(0)
#define D4_Toggle()   do { LATA2 = ~LATA2; } while(0)
#define D4_GetValue()         PORTAbits.RA2
#define D4_SetDigitalInput()    do { TRISA2 = 1; } while(0)
#define D4_SetDigitalOutput()   do { TRISA2 = 0; } while(0)

#define D4_SetPullup()    do { WPUA2 = 1; } while(0)
#define D4_ResetPullup()   do { WPUA2 = 0; } while(0)
#define D4_SetAnalogMode()   do { ANSA2 = 1; } while(0)
#define D4_SetDigitalMode()   do { ANSA2 = 0; } while(0)


// get/set D5 aliases
#define D5_TRIS               TRISA3
#define D5_LAT                LATA3
#define D5_PORT               RA3
#define D5_WPU                WPUA3
#define D5_ANS                ANSA3
#define D5_SetHigh()    do { LATA3 = 1; } while(0)
#define D5_SetLow()   do { LATA3 = 0; } while(0)
#define D5_Toggle()   do { LATA3 = ~LATA3; } while(0)
#define D5_GetValue()         PORTAbits.RA3
#define D5_SetDigitalInput()    do { TRISA3 = 1; } while(0)
#define D5_SetDigitalOutput()   do { TRISA3 = 0; } while(0)

#define D5_SetPullup()    do { WPUA3 = 1; } while(0)
#define D5_ResetPullup()   do { WPUA3 = 0; } while(0)
#define D5_SetAnalogMode()   do { ANSA3 = 1; } while(0)
#define D5_SetDigitalMode()   do { ANSA3 = 0; } while(0)


// get/set D5 aliases
#define D5_TRIS               TRISA3
#define D5_LAT                LATA3
#define D5_PORT               RA3
#define D5_WPU                WPUA3
#define D5_ANS                ANSA3
#define D5_SetHigh()    do { LATA3 = 1; } while(0)
#define D5_SetLow()   do { LATA3 = 0; } while(0)
#define D5_Toggle()   do { LATA3 = ~LATA3; } while(0)
#define D5_GetValue()         PORTAbits.RA3
#define D5_SetDigitalInput()    do { TRISA3 = 1; } while(0)
#define D5_SetDigitalOutput()   do { TRISA3 = 0; } while(0)

#define D5_SetPullup()    do { WPUA3 = 1; } while(0)
#define D5_ResetPullup()   do { WPUA3 = 0; } while(0)
#define D5_SetAnalogMode()   do { ANSA3 = 1; } while(0)
#define D5_SetDigitalMode()   do { ANSA3 = 0; } while(0)



/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);

#endif // PIN_MANAGER_H
/**
 End of File
*/