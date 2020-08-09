/*
 * registers.h
 *
 *  Created on: Oct 21, 2019
 *      Author: Sprints
 */

#ifndef REGISTERS_H_
#define REGISTERS_H_
#include "std_types.h"
#include <avr/io.h>
/*0x3B PCIFR 7:0           PCIF2 PCIF1 PCIF0
0x3C EIFR 7:0             INTF1 INTF0
0x3D EIMSK 7:0             INT1 INT0
0x3E GPIOR0 7:0 GPIOR0[7:0]
0x3F EECR 7:0     EEPM1 EEPM0 EERIE EEMPE EEPE EERE
0x40 EEDR 7:0 EEDR[7:0]
0x41 EEARL 7:0 EEAR7 EEAR6 EEAR5 EEAR4 EEAR3 EEAR2 EEAR1 EEAR0
0x42 EEARH 7:0             EEAR9 EEAR8
0x43 GTCCR 7:0 TSM           PSRASY PSRSYNC
0x44 TCCR0A 7:0 COM0A1 COM0A0 COM0B1 COM0B0     WGM01 WGM00
0x45 TCCR0B 7:0 FOC0A FOC0B     WGM02 CS0[2:0]
0x46 TCNT0 7:0 TCNT0[7:0]
0x47 OCR0A 7:0 OCR0A[7:0]
0x48 OCR0B 7:0 OCR0B[7:0

0x4A GPIOR1 7:0 GPIOR1[7:0]
0x4B GPIOR2 7:0 GPIOR2[7:0]
0x4C SPCR0 7:0 SPIE0 SPE0 DORD0 MSTR0 CPOL0 CPHA0 SPR01 SPR00
0x4D SPSR0 7:0 SPIF0 WCOL0           SPI2X0
0x4E SPDR0 7:0 SPID[7:0

0x50 ACSR 7:0 ACD ACBG ACO ACI ACIE ACIC ACIS1 ACIS0
0x51 DWDR 7:0 DWDR[7:0]
0x53 SMCR 7:0         SM2 SM1 SM0 SE
0x54 MCUSR 7:0         WDRF BORF EXTRF PORF
0x55 MCUCR 7:0       PUD     IVSEL IVCE
0x57 SPMCSR 7:0 SPMIE RWWSB SIGRD RWWSRE BLBSET PGWRT PGERS SPMEN
0x5D SPL 7:0 (SP[7:0]) SPL
0x5E SPH 7:0           (SP[10:8]) SPH
0x5F SREG 7:0 I T H S V N Z C
0x60 WDTCSR 7:0 WDIF WDIE WDP[3] WDCE WDE WDP[2:0]
0x61 CLKPR 7:0 CLKPCE       CLKPS3 CLKPS2 CLKPS1 CLKPS0
0x64 PRR 7:0 PRTWI0 PRTIM2 PRTIM0   PRTIM1 PRSPI0 PRUSART0 PRADC

0x66 OSCCAL 7:0 CAL7 CAL6 CAL5 CAL4 CAL3 CAL2 CAL1 CAL0
0x68 PCICR 7:0           PCIE2 PCIE1 PCIE0
0x69 EICRA 7:0         ISC11 ISC10 ISC01 ISC00


0x6B PCMSK0 7:0 PCINT7 PCINT6 PCINT5 PCINT4 PCINT3 PCINT2 PCINT1 PCINT0
0x6C PCMSK1 7:0   PCINT14 PCINT13 PCINT12 PCINT11 PCINT10 PCINT9 PCINT8
0x6D PCMSK2 7:0 PCINT23 PCINT22 PCINT21 PCINT20 PCINT19 PCINT18 PCINT17 PCINT16
0x6E TIMSK0 7:0           OCIEB OCIEA TOIE
0x6F TIMSK1 7:0     ICIE     OCIEB OCIEA TOIE
0x70 TIMSK2 7:0           OCIEB OCIEA TOIE

0x78 ADCL 7:0 ADC7 ADC6 ADC5 ADC4 ADC3 ADC2 ADC1 ADC0
0x79 ADCH 7:0             ADC9 ADC8
0x7A ADCSRA 7:0 ADEN ADSC ADATE ADIF ADIE ADPS2 ADPS1 ADPS0
0x7B ADCSRB 7:0   ACME       ADTS2 ADTS1 ADTS0
0x7C ADMUX 7:0 REFS1 REFS0 ADLAR   MUX3 MUX2 MUX1 MUX0



0x7E DIDR0 7:0 ADC7D ADC6D ADC5D ADC4D ADC3D ADC2D ADC1D ADC0D
0x7F DIDR1 7:0 Reserved5 Reserved4 Reserved3 Reserved2 Reserved1 Reserved0 AIN1D AIN0D
0x80 TCCR1A 7:0 COM1 COM1 COM1 COM1     WGM11 WGM10
0x81 TCCR1B 7:0 ICNC1 ICES1   WGM13 WGM12 CS12 CS11 CS10
0x82 TCCR1C 7:0 FOC1A FOC1B
0x84 TCNT1L 7:0 TCNT1L[7:0]
0x85 TCNT1H 7:0 TCNT1H[7:0]
0x86 ICR1L 7:0 ICR1L[7:0]
0x87 ICR1H 7:0 ICR1H[7:0]
0x88 OCR1AL 7:0 OCR1AL[7:0]


0x89 OCR1AH 7:0 OCR1AH[7:0]
0x8A OCR1BL 7:0 OCR1BL[7:0]
0x8B OCR1BH 7:0 OCR1BH[7:0]

0xB0 TCCR2A 7:0 COM2A1 COM2A0 COM2B1 COM2B0     WGM21 WGM20
0xB1 TCCR2B 7:0 FOC2A FOC2B     WGM22 CS2[2:0]
0xB2 TCNT2 7:0 TCNT2[7:0]
0xB3 OCR2A 7:0 OCR2A[7:0]
0xB4 OCR2B 7:0 OCR2B[7:0]
0xB6 ASSR 7:0   EXCLK AS2 TCN2UB OCR2AUB OCR2BUB TCR2AUB TCR2BUB

0xB8 TWBR 7:0 TWBR7 TWBR6 TWBR5 TWBR4 TWBR3 TWBR2 TWBR1 TWBR0
0xB9 TWSR 7:0 TWS7 TWS6 TWS5 TWS4 TWS3 TWPS[1:0]
0xBA TWAR 7:0 TWA6 TWA5 TWA4 TWA3 TWA2 TWA1 TWA0 TWGCE
0xBB TWDR 7:0 TWD7 TWD6 TWD5 TWD4 TWD3 TWD2 TWD1 TWD0
0xBC TWCR 7:0 TWINT TWEA TWSTA TWSTO TWWC TWEN TWIE
0xBD TWAMR 7:0 TWAM6 TWAM5 TWAM4 TWAM3 TWAM2 TWAM1 TWAM0
0xC0 UCSR0A 7:0 RXC0 TXC0 UDRE0 FE0 DOR0 UPE0 U2X0 MPCM0
0xC1 UCSR0B 7:0 RXCIE0 TXCIE0 UDRIE0 RXEN0 TXEN0 UCSZ02 RXB80 TXB80
0xC2 UCSR0C 7:0 UMSEL01 UMSEL00 UPM01 UPM00 USBS0
0xC4 UBRR0L 7:0 UBRR0[7:0]
0xC5 UBRR0H 7:0         UBRR0[3:0]
0xC6 UDR0 7:0 TXB / RXB[7:0]
*/
/*
 * General Registers
 *//*not yet*/
#define MCUCR        *((reg_type8_t)(0x55))
#define MCUCSR        *((reg_type8_t)(0x54))
#define GICR        *((reg_type8_t)(0x5B))
#define GIFR        *((reg_type8_t)(0X5A))
#define SREG        *((reg_type8_t)(0x5F))
/*
 * PORTx registers
 */

#define PORTB_DATA     PORTB
#define PORTB_DIR      DDRB
#define PORTB_PIN      PINB 

#define PORTC_DATA     PORTC
#define PORTC_DIR      DDRC
#define PORTC_PIN      PINC


#define PORTD_DATA     PORTD
#define PORTD_DIR      DDRD
#define PORTD_PIN      PIND


/*
 * General Timer registers
 */
//#define TIMSK       *((reg_type8_t)(0x35))
#define TIFR0        *((reg_type8_t)(0x35))
#define TIFR1        *((reg_type8_t)(0x36))
#define TIFR2        *((reg_type8_t)(0x37))

/*
 * Timer 0 Registers
 */

#define TCCR0       *((reg_type8_t)(0x53))
#define TCNT0       *((reg_type8_t)(0x52))
#define OCR0        *((reg_type8_t)(0x5C))
#define TOV0      0
#define OCF0      1
#define TOV1      2
#define OCF1B     3
#define OCF1A     4
#define ICF1      5
#define TOV2      6
#define OCF2      7
/***************************************************/
/* OCF2 TOV2 ICF1 OCF1A OCF1B TOV1 OCF0 TOV0<<TIFRReg */
/***************************************************/
/*
 * Timer 1 Registers
 */

#define TCCR1A        *((reg_type8_t)(0X4F))
#define TCCR1B        *((reg_type8_t)(0X4E))
#define TCCR1       *((reg_type16_t)(0x4E))

#define TCNT1H        *((reg_type8_t)(0X4D))
#define TCNT1L        *((reg_type8_t)(0X4C))
#define TCNT1       *((reg_type16_t)(0X4C))

#define OCR1AH        *((reg_type8_t)(0X4B))
#define OCR1AL        *((reg_type8_t)(0x4A))
#define OCR1A       *((reg_type16_t)(0x4A))

#define OCR1BH        *((reg_type8_t)(0X49))
#define OCR1BL        *((reg_type8_t)(0x48))
#define OCR1B       *((reg_type16_t)(0x48))

#define ICR1H       *((reg_type8_t)(0x47))
#define ICR1L       *((reg_type8_t)(0x46))
#define ICR1        *((reg_type16_t)(0x46))


/*
 * Timer 2 Registers
 */
#define TCCR2       *((reg_type8_t)(0x45))
#define TCNT2       *((reg_type8_t)(0X44))
#define OCR2        *((reg_type8_t)(0x43))
#define ASSR        *((reg_type8_t)(0x42))
/*UART*/
#define UDR         *((reg_type8_t)(0x2C))             /*USART IO Data Register 159 $0C*/
#define UCSRA       *((reg_type8_t)(0x2B))
#define UCSRB       *((reg_type8_t)(0x2A))
#define UCSRC       *((reg_type8_t)(0x40))  /*This Address is chared with UBBRH*/
#define UBRRL       *((reg_type8_t)(0x29))

/*SPI*/
#define SPDR    *((reg_type8_t)(0x2F))
#define SPSR    *((reg_type8_t)(0x2E))
#define SPCR        *((reg_type8_t)(0x2D))


#endif /* REGISTERS_H_ */
