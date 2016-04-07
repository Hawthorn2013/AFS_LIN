/*
 * bsp.h
 *
 *  Created on: Mar 27, 2016
 *      Author: JiaoJian
 */

#ifndef BSP_H_
#define BSP_H_

//Define LED
#define LED1 (SIU .GPDO[68].B.PDO)
#define LED2 (SIU .GPDO[69].B.PDO)
#define LED3 (SIU .GPDO[70].B.PDO)
#define LED4 (SIU .GPDO[71].B.PDO)

#define LIN_ID_TEST (3)

void Test_LIN(void);
int LIN_TX(int id, int len, const uint8_t *data);
int LIN_RX(int id, int len, uint8_t *data);

void Delay_us(uint32_t us);
void Delay_ms(uint32_t ms);

uint16_t Swap_data_with_33905(uint16_t data);

#endif /* BSP_H_ */
