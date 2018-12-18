#ifndef CONFIG_H
#define CONFIG_H

#define     BOARD_ACC_ORGIN_MSG_ID      0x0824f7c0

#define ADC_ARRY_LEN	12
#define VOLTAG_LEN		8
#define TEMP_LEN		4

#define ADC_REF_VOL			3000
#define CAN_ERROR_CNT       1
#define CAN_CONNECT_CNT     3000
#define CRIRC_TIMER_MS         10

#define SEND_BOARD_CONFIG               0x0811C0F7
#define SEND_CMD_TEST                        0xC3            //保护板进入测试模式
#define SEND_CMD_ACC                        0xC6            //保护板标定数据

#endif // CONFIG_H
