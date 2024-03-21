/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef MAIN_H
#define MAIN_H
#define COOKING_MODE_DISPLAY    0x01
#define MICRO_MODE              0x02
#define GRILL_MODE              0x03
#define CONVECTION_MODE         0x04
#define START_MODE              0x05
#define TIME_DISPLAY            0x06
#define STOP                    0x07
#define PAUSE                   0x08
     
#define MICRO_MODE_RESET        0X11
#define RESET_NOTHING           0x0F
#define GRILL_MODE_RESET        0x12
#define RESET_TIME              0x13
#define RESET_TEMP              0X14
#define BUZZER                  RC1
#define BUZZER_DDR              TRISC1
#define FAN                     RC2
#define FAN_DDR                 TRISC2 
#define ON                      1
#define OFF                     0
#define DOOR                    RB3
#define OPEN                    0
#define CLOSED                  1
#define FAILURE                 1
#define SUCCESS                 0

void power_on_screen(void);
void cooking_mode_display(void);
void clear_display(void);
void set_time(unsigned char key);
void opearation_call(unsigned char key);
void time_display(void);
char set_temp(unsigned char key);

#endif
