/*
 * afs.h
 *
 *  Created on: Apr 10, 2016
 *      Author: JiaoJian
 */

#ifndef AFS_H_
#define AFS_H_

#define AFS_LIN_FEAME_ID_AFL_MOTOR_CMD (0x20)
#define AFS_LIN_FEAME_ID_DHL_MOTOR_CMD (0x23)
#define AFS_LIN_FEAME_ID_LEFT_SLAVE_NODE_QUERY (0x24)
#define AFS_LIN_FEAME_ID_RIGHT_SLAVE_NODE_QUERY (0x25)
#define AFS_LIN_FEAME_ID_MOTOR_FREQUENCY_CONFIG (0x26)

typedef union {
	uint32_t R;
	struct {
		uint32_t AFL_Status_Config_1 :8;
		uint32_t Left_AFL_Position_Config :8;
		uint32_t Right_AFL_Position_Config :8;
		uint32_t Lfet_AFL_Status_Config_2 :4;
		uint32_t Right_AFL_Status_Config_2 :4;
	} B;
} FRAME_AFL_MOTOR_CMD;

typedef union {
	uint32_t R;
	struct {
		uint32_t DHL_Status_Config_1 :8;
		uint32_t DHL_Position_Config_1 :8;
		uint32_t DHL_Status_Config_2 :8;
		uint32_t DHL_Position_Config_2 :8;
	} B;
} FRAME_DHL_MOTOR_CMD;

typedef union {
	uint32_t R;
	struct {
		uint32_t :1;
		uint32_t Digital_Power_Flow_Alarm :1;
		uint32_t :1;
		uint32_t AFL_Motor_Drive_Over_Temperature :1;
		uint32_t :1;
		uint32_t Over_Voltage_Fault_Alarm :1;
		uint32_t Low_Voltage_Fault_Alarm :1;
		uint32_t :1;
		uint32_t :2;
		uint32_t DHL_Motor_Short_Circuit_Fault_Alarm :1;
		uint32_t DHL_Motor_Drive_Over_Temperature :1;
		uint32_t :2;
		uint32_t HID_Ballast_Status :2;
		uint32_t AFL_Motor_Status :8;
		uint32_t DHL_Motor_Status :8;
	} B;
} FEAME_LEFT_SLAVE_NODE_QUERY;

typedef FEAME_LEFT_SLAVE_NODE_QUERY FEAME_RIGHT_SLAVE_NODE_QUERY;

typedef union {
	uint32_t R;
	struct {
		uint32_t Left_AFL_Motor_Work_Frequency :8;
		uint32_t Right_AFL_Motor_Work_Frequency :8;
		uint32_t DHL_Motor_Work_Frequency :8;
		uint32_t :8;
	} B;
} FRAME_MOTOR_FREQUENCY_CONFIG;

#endif /* AFS_H_ */
