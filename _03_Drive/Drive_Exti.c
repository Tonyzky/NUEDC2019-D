/*
*********************************************************************************************************
*                                              _04_OS
* File			 : Drive_Exti.c
* By  			 : Muhe
* platform   : STM32F407ZG
*	Data   		 : 2018/7/16
* function 	 : �ⲿ�ж����ó���
*********************************************************************************************************
*/
#include "Drive_Exti.h"

/* ˽�к궨�� ----------------------------------------------------------------*/

/* ˽�У���̬���������� ------------------------------------------------------*/

/* ȫ�ֱ������� --------------------------------------------------------------*/
 
/* ȫ�ֺ�����д --------------------------------------------------------------*/
/**----------------------------------------------------------------------------
* @FunctionName  : Exti0_Init()     
* @Description   : None 
* @Data          : 2016/7/11
* @Explain       : ���������
------------------------------------------------------------------------------*/ 
void Exti0_Init(void)
{
	NVIC_InitTypeDef   NVIC_InitStructure;
	EXTI_InitTypeDef   EXTI_InitStructure;
	
	GPIO_InitTypeDef  GPIO_InitStructure;

	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);//ʹ��GPIOA,GPIOEʱ��
 
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0; 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;//��ͨ����ģʽ
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100M
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;//����
	GPIO_Init(GPIOC, &GPIO_InitStructure);//��ʼ��GPIOE0,2
	 
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);//ʹ��SYSCFGʱ��
	
	SYSCFG_EXTILineConfig(EXTI_PortSourceGPIOC, EXTI_PinSource0);//PE0 ���ӵ��ж���0  
  
	/* ����EXTI_Line0 */
	EXTI_InitStructure.EXTI_Line = EXTI_Line0;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;//�ж��¼�
	EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling; //�½��ش���
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;//�ж���ʹ��
	EXTI_Init(&EXTI_InitStructure);//����
	
	NVIC_InitStructure.NVIC_IRQChannel = EXTI0_IRQn;//�ⲿ�ж�0
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0x03;//��ռ���ȼ�0
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0x01;//�����ȼ�2
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;//ʹ���ⲿ�ж�ͨ�� 
	 
	NVIC_Init(&NVIC_InitStructure);//����
	EXTI_ClearITPendingBit(EXTI_Line0); //���LINE0�ϵ��жϱ�־λ    


	
}

/**----------------------------------------------------------------------------
* @FunctionName  : Exti1_Init()     
* @Description   : None 
* @Data          : 2016/7/11
* @Explain       : None
------------------------------------------------------------------------------*/ 
void Exti1_Init(void)
{
	NVIC_InitTypeDef   NVIC_InitStructure;
	EXTI_InitTypeDef   EXTI_InitStructure;
	
	GPIO_InitTypeDef  GPIO_InitStructure;

	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);//ʹ��GPIOA,GPIOEʱ��
 
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1; 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;//��ͨ����ģʽ
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100M
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;//����
	GPIO_Init(GPIOC, &GPIO_InitStructure);//��ʼ��GPIOE0,2
	 
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);//ʹ��SYSCFGʱ��
	
	SYSCFG_EXTILineConfig(EXTI_PortSourceGPIOC, EXTI_PinSource1);//PE0 ���ӵ��ж���0  
  
	/* ����EXTI_Line0 */
	EXTI_InitStructure.EXTI_Line = EXTI_Line1;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;//�ж��¼�
	EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling; //�½��ش���
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;//�ж���ʹ��
	EXTI_Init(&EXTI_InitStructure);//����
	
	NVIC_InitStructure.NVIC_IRQChannel = EXTI1_IRQn;//�ⲿ�ж�0
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0x03;//��ռ���ȼ�0
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0x01;//�����ȼ�2
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;//ʹ���ⲿ�ж�ͨ�� 
	 
	NVIC_Init(&NVIC_InitStructure);//����
	EXTI_ClearITPendingBit(EXTI_Line1); //���LINE0�ϵ��жϱ�־λ    
	
}

/**----------------------------------------------------------------------------
* @FunctionName  : Exti2_Init()     
* @Description   : None 
* @Data          : 2016/7/11
* @Explain       : None
------------------------------------------------------------------------------*/ 
void Exti2_Init(void)
{
	NVIC_InitTypeDef   NVIC_InitStructure;
	EXTI_InitTypeDef   EXTI_InitStructure;
	
	GPIO_InitTypeDef  GPIO_InitStructure;

	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);//ʹ��GPIOA,GPIOEʱ��
 
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2; 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;//��ͨ����ģʽ
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100M
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;//����
	GPIO_Init(GPIOC, &GPIO_InitStructure);//��ʼ��GPIOE0,2
	 
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);//ʹ��SYSCFGʱ��
	
	SYSCFG_EXTILineConfig(EXTI_PortSourceGPIOC, EXTI_PinSource2);//PE0 ���ӵ��ж���0  
  
	/* ����EXTI_Line0 */
	EXTI_InitStructure.EXTI_Line = EXTI_Line2;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;//�ж��¼�
	EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling; //�½��ش���
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;//�ж���ʹ��
	EXTI_Init(&EXTI_InitStructure);//����
	
	NVIC_InitStructure.NVIC_IRQChannel = EXTI2_IRQn;//�ⲿ�ж�0
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0x03;//��ռ���ȼ�0
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0x01;//�����ȼ�2
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;//ʹ���ⲿ�ж�ͨ�� 
	 
	NVIC_Init(&NVIC_InitStructure);//����
	EXTI_ClearITPendingBit(EXTI_Line2); //���LINE0�ϵ��жϱ�־λ    
	
}

/**----------------------------------------------------------------------------
* @FunctionName  : Exti3_Init()     
* @Description   : None 
* @Data          : 2016/7/11
* @Explain       : None
------------------------------------------------------------------------------*/ 
void Exti3_Init(void)
{
	NVIC_InitTypeDef   NVIC_InitStructure;
	EXTI_InitTypeDef   EXTI_InitStructure;
	
	GPIO_InitTypeDef  GPIO_InitStructure;

	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);//ʹ��GPIOA,GPIOEʱ��
 
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3; 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;//��ͨ����ģʽ
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100M
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;//����
	GPIO_Init(GPIOC, &GPIO_InitStructure);//��ʼ��GPIOE0,2
	 
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);//ʹ��SYSCFGʱ��
	
	SYSCFG_EXTILineConfig(EXTI_PortSourceGPIOC, EXTI_PinSource3);//PE0 ���ӵ��ж���0  
  
	/* ����EXTI_Line0 */
	EXTI_InitStructure.EXTI_Line = EXTI_Line3;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;//�ж��¼�
	EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling; //�½��ش���
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;//�ж���ʹ��
	EXTI_Init(&EXTI_InitStructure);//����
	
	NVIC_InitStructure.NVIC_IRQChannel = EXTI3_IRQn;//�ⲿ�ж�0
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0x03;//��ռ���ȼ�0
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0x01;//�����ȼ�2
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;//ʹ���ⲿ�ж�ͨ�� 
	 
	NVIC_Init(&NVIC_InitStructure);//����
	EXTI_ClearITPendingBit(EXTI_Line3); //���LINE0�ϵ��жϱ�־λ    
	
}

/**----------------------------------------------------------------------------
* @FunctionName  : Exti4_Init()     
* @Description   : None
* @Data          : 2016/7/11
* @Explain       : None
------------------------------------------------------------------------------*/ 
void Exti4_Init(void)
{
	NVIC_InitTypeDef   NVIC_InitStructure;
	EXTI_InitTypeDef   EXTI_InitStructure;
	
	GPIO_InitTypeDef  GPIO_InitStructure;

	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE, ENABLE);//ʹ��GPIOʱ��
 
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4; 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;//��ͨ����ģʽ
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100M
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;//����
	GPIO_Init(GPIOE, &GPIO_InitStructure);//��ʼ��GPIO
	 
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);//ʹ��SYSCFGʱ��
	
	SYSCFG_EXTILineConfig(EXTI_PortSourceGPIOE, EXTI_PinSource4);// ���ӵ��ж��� 
  
	/* ����EXTI_Line */
	EXTI_InitStructure.EXTI_Line = EXTI_Line4;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;//�ж��¼�
	EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling; //�½��ش���
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;//�ж���ʹ��
	EXTI_Init(&EXTI_InitStructure);//����
	
	NVIC_InitStructure.NVIC_IRQChannel = EXTI4_IRQn;//�ⲿ�ж�0
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0x02;//��ռ���ȼ�
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0x01;//�����ȼ�
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;//ʹ���ⲿ�ж�ͨ�� 
	 
	NVIC_Init(&NVIC_InitStructure);//����
	EXTI_ClearITPendingBit(EXTI_Line4); //���LINE�ϵ��жϱ�־λ    
	
}

/**----------------------------------------------------------------------------
* @FunctionName  : Exti5_9_Init()     
* @Description   : None
* @Data          : 2016/7/11
* @Explain       : None
------------------------------------------------------------------------------*/ 
void Exti5_9_Init(void)
{
	NVIC_InitTypeDef   NVIC_InitStructure;
	EXTI_InitTypeDef   EXTI_InitStructure;
	
	GPIO_InitTypeDef  GPIO_InitStructure;

	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);//ʹ��GPIOʱ��
 
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5; 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;//��ͨ����ģʽ
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100M
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;//����
	GPIO_Init(GPIOF, &GPIO_InitStructure);//��ʼ��GPIO
	 
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);//ʹ��SYSCFGʱ��
	
	SYSCFG_EXTILineConfig(EXTI_PortSourceGPIOF, EXTI_PinSource5);// ���ӵ��ж��� 
  
	/* ����EXTI_Line */
	EXTI_InitStructure.EXTI_Line = EXTI_Line5;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;//�ж��¼�
	EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling; //�½��ش���
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;//�ж���ʹ��
	EXTI_Init(&EXTI_InitStructure);//����
	
	NVIC_InitStructure.NVIC_IRQChannel = EXTI9_5_IRQn;//�ⲿ�ж�0
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0x02;//��ռ���ȼ�
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0x01;//�����ȼ�
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;//ʹ���ⲿ�ж�ͨ�� 
	 
	NVIC_Init(&NVIC_InitStructure);//����
	EXTI_ClearITPendingBit(EXTI_Line5); //���LINE�ϵ��жϱ�־λ    
	
}

/**----------------------------------------------------------------------------
* @FunctionName  : Exti10_15_Init()     
* @Description   : None
* @Data          : 2016/7/11
* @Explain       : None
------------------------------------------------------------------------------*/ 
void Exti10_15_Init(void)
{
	NVIC_InitTypeDef   NVIC_InitStructure;
	EXTI_InitTypeDef   EXTI_InitStructure;
	
	GPIO_InitTypeDef  GPIO_InitStructure;

	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);//ʹ��GPIOʱ��
 
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10; 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;//��ͨ����ģʽ
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100M
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;//����
	GPIO_Init(GPIOE, &GPIO_InitStructure);//��ʼ��GPIO
	 
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);//ʹ��SYSCFGʱ��
	
	SYSCFG_EXTILineConfig(EXTI_PortSourceGPIOE, EXTI_PinSource10);// ���ӵ��ж��� 
  
	/* ����EXTI_Line */
  EXTI_InitStructure.EXTI_Line = EXTI_Line10;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;//�ж��¼�
	EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling; //�½��ش���
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;//�ж���ʹ��
	EXTI_Init(&EXTI_InitStructure);//����
	
	NVIC_InitStructure.NVIC_IRQChannel = EXTI9_5_IRQn;//�ⲿ�ж�0
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0x02;//��ռ���ȼ�
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0x01;//�����ȼ�
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;//ʹ���ⲿ�ж�ͨ�� 
	 
	NVIC_Init(&NVIC_InitStructure);//����
	EXTI_ClearITPendingBit(EXTI_Line10); //���LINE�ϵ��жϱ�־λ    
	
}


void Exti_Enable(u8 Exti_Num)
{
	EXTI_InitTypeDef   EXTI_InitStructure; 
	/* ����EXTI_Line */  
	if(Exti_Num == 0) 			EXTI_InitStructure.EXTI_Line = EXTI_Line0; 
	else if(Exti_Num == 1) 		EXTI_InitStructure.EXTI_Line = EXTI_Line1; 
	else if(Exti_Num == 2) 		EXTI_InitStructure.EXTI_Line = EXTI_Line2; 
	else if(Exti_Num == 3) 		EXTI_InitStructure.EXTI_Line = EXTI_Line3; 
	else if(Exti_Num == 4) 		EXTI_InitStructure.EXTI_Line = EXTI_Line4; 
	else if(Exti_Num == 5)  	EXTI_InitStructure.EXTI_Line = EXTI_Line5;
	else if(Exti_Num == 6)  	EXTI_InitStructure.EXTI_Line = EXTI_Line6; 
	else if(Exti_Num == 7)  	EXTI_InitStructure.EXTI_Line = EXTI_Line7; 
	else if(Exti_Num == 8)  	EXTI_InitStructure.EXTI_Line = EXTI_Line8; 
	else if(Exti_Num == 9)  	EXTI_InitStructure.EXTI_Line = EXTI_Line9; 
	else if(Exti_Num == 10)  	EXTI_InitStructure.EXTI_Line = EXTI_Line10; 
	else if(Exti_Num == 11)  	EXTI_InitStructure.EXTI_Line = EXTI_Line11; 	
	else if(Exti_Num == 12)  	EXTI_InitStructure.EXTI_Line = EXTI_Line12;
	else if(Exti_Num == 13)  	EXTI_InitStructure.EXTI_Line = EXTI_Line13;
	else if(Exti_Num == 14)  	EXTI_InitStructure.EXTI_Line = EXTI_Line14;
	else if(Exti_Num == 15)  	EXTI_InitStructure.EXTI_Line = EXTI_Line15;	
	else return; 
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;//�ж��¼�
	EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Rising; //�����ش���
	
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;//�ж���ʹ�� 
	EXTI_Init(&EXTI_InitStructure);//����
		
}


void Exti_Disable(u8 Exti_Num)
{ 
	EXTI_InitTypeDef   EXTI_InitStructure; 
	/* ����EXTI_Line */
	if(Exti_Num == 0) 			EXTI_InitStructure.EXTI_Line = EXTI_Line0;
	else if(Exti_Num == 1)		EXTI_InitStructure.EXTI_Line = EXTI_Line1;
	else if(Exti_Num == 2) 		EXTI_InitStructure.EXTI_Line = EXTI_Line2;	
	else if(Exti_Num == 3) 		EXTI_InitStructure.EXTI_Line = EXTI_Line3;	
	else if(Exti_Num == 4) 		EXTI_InitStructure.EXTI_Line = EXTI_Line4;
	else if(Exti_Num == 5)  	EXTI_InitStructure.EXTI_Line = EXTI_Line5;
	else if(Exti_Num == 6)  	EXTI_InitStructure.EXTI_Line = EXTI_Line6; 
	else if(Exti_Num == 7)  	EXTI_InitStructure.EXTI_Line = EXTI_Line7; 
	else if(Exti_Num == 8)  	EXTI_InitStructure.EXTI_Line = EXTI_Line8; 
	else if(Exti_Num == 9)  	EXTI_InitStructure.EXTI_Line = EXTI_Line9; 
	else if(Exti_Num == 10)  	EXTI_InitStructure.EXTI_Line = EXTI_Line10; 
	else if(Exti_Num == 11)  	EXTI_InitStructure.EXTI_Line = EXTI_Line11; 	
	else if(Exti_Num == 12)  	EXTI_InitStructure.EXTI_Line = EXTI_Line12;
	else if(Exti_Num == 13)  	EXTI_InitStructure.EXTI_Line = EXTI_Line13;
	else if(Exti_Num == 14)  	EXTI_InitStructure.EXTI_Line = EXTI_Line14;
	else if(Exti_Num == 15)  	EXTI_InitStructure.EXTI_Line = EXTI_Line15;
	else return; 
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;//�ж��¼�
	EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Rising; //�����ش���
	
	EXTI_InitStructure.EXTI_LineCmd = DISABLE;//�ж���ʹ�� 
	EXTI_Init(&EXTI_InitStructure);//����
}




