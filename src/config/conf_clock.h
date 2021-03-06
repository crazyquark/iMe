// Header guard
#ifndef CONF_CLOCK_H
#define CONF_CLOCK_H


// Use cycle accurate delays
#define __DELAY_CYCLE_INTRINSICS__


// Use internal oscillator at 24MHz
#define CONFIG_SYSCLK_SOURCE SYSCLK_SRC_RC32MHZ
#define CONFIG_SYSCLK_PSADIV SYSCLK_PSADIV_2
#define CONFIG_SYSCLK_PSBCDIV SYSCLK_PSBCDIV_1_1


// Configure USB
#define CONFIG_USBCLK_SOURCE USBCLK_SRC_RCOSC
#define CONFIG_OSC_RC32_CAL 48000000
#define CONFIG_OSC_AUTOCAL_RC32MHZ_REF_OSC OSC_ID_USBSOF


#endif
