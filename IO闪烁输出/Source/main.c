#include "stm32f10x_lib.h"
#include "sys.h"
//www.doflye.net	
/*------------------------------------------------------------
                           ������
------------------------------------------------------------*/
int main()
{
    
    Stm32_Clock_Init();//ϵͳʱ������
	RCC->APB2ENR |= 0x00000001; //����afioʱ��
  //AFIO->MAPR = (0x00FFFFFF & AFIO->MAPR)|0x04000000;          //�ر�JTAG 
				

	RCC->APB2ENR|=0X0000001c;//��ʹ������IO PORTa,b,cʱ��
	
	GPIOB->CRH=0X33333333;    //�������
	GPIOB->CRL=0X33333333;    //�������
	GPIOC->CRH=0X33333333;    //�������
	GPIOC->CRL=0X33333333;    //�������
	GPIOA->CRH=0X33333333;    //�������
	GPIOA->CRL=0X33333333;    //�������
	GPIOD->CRH=0X33333333;    //�������
	GPIOD->CRL=0X33333333;    //�������
	GPIOE->CRH=0X33333333;    //�������
	GPIOE->CRL=0X33333333;    //�������
	GPIOF->CRH=0X33333333;    //�������
	GPIOF->CRL=0X33333333;    //�������
	GPIOG->CRH=0X33333333;    //�������
	GPIOG->CRL=0X33333333;    //�������
	 while (1)
    {			
	delay_ms(50);
	     	 
	GPIOB->ODR=0;	  		 //ȫ�����0
	GPIOA->ODR=0;		
	GPIOC->ODR=0;
	GPIOD->ODR=0;
	GPIOE->ODR=0;
	GPIOF->ODR=0;
	GPIOG->ODR=0;

	delay_ms(50);
	
	GPIOB->ODR=0xffffffff;	 //ȫ�����1 
	GPIOA->ODR=0xffffffff;	  
	GPIOC->ODR=0xffffffff;
	GPIOD->ODR=0xffffffff;
	GPIOE->ODR=0xffffffff;
	GPIOF->ODR=0xffffffff;
	GPIOG->ODR=0xffffffff;
	}
}
