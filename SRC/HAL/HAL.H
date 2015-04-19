#ifndef __HAL_H__
#define __HAL_H__

#include "Delay.H"
#include "IIC.H"
#include "SPI.H"
#include "PWM.H"
#include "MPU6050.H"
#include "NRF24L01.H"
#include "IO_Bits.H"
#include "Fusion.H"
#include "DMA.H"
#include "USART.H"
#include "Control.H"

//-----�ӿڶ���-----//
//-----LED-----//
#define LED1 PAout(0)
#define LED2 PAout(1)
#define LED3 PAout(2)
#define LED4 PAout(3)
//-----PWM_LED-----//
#define PWM1_LED PBout(6)
#define PWM2_LED PBout(7)
#define PWM3_LED PBout(8)
#define PWM4_LED PBout(9)

//-----�����ڲ�Ӳ��ģ������ú���-----//
extern void RCC_Configuration(void);		// RCC����
extern void GPIO_Configuration(void);		// GPIO����
extern void NVIC_Configuration(void);		// NVIC����
extern void ADC_Configuration(void);		// ADC����
extern void USART_Configuration(void);		// USART����
extern void TIMx_Configuration(void);		// TIMx����
extern void Delay_Init(void);				// �ӳٳ�ʼ��

//-----Ӳ����ʼ��-----//
extern void ChipHal_Init(void);				// Ƭ��Ӳ����ʼ��
extern void ChipOutHal_Init(void);			// Ƭ��Ӳ����ʼ��

#endif