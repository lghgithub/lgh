#include "stm32f10x_lib.h"
#include "sys.h"
//www.doflye.net	
/*------------------------------------------------------------
                           主函数
------------------------------------------------------------*/
int main()
{
    
    Stm32_Clock_Init();//系统时钟设置
	RCC->APB2ENR |= 0x00000001; //开启afio时钟
  //AFIO->MAPR = (0x00FFFFFF & AFIO->MAPR)|0x04000000;          //关闭JTAG 
				

	RCC->APB2ENR|=0X0000001c;//先使能外设IO PORTa,b,c时钟
	
	GPIOB->CRH=0X33333333;    //推挽输出
	GPIOB->CRL=0X33333333;    //推挽输出
	GPIOC->CRH=0X33333333;    //推挽输出
	GPIOC->CRL=0X33333333;    //推挽输出
	GPIOA->CRH=0X33333333;    //推挽输出
	GPIOA->CRL=0X33333333;    //推挽输出
	GPIOD->CRH=0X33333333;    //推挽输出
	GPIOD->CRL=0X33333333;    //推挽输出
	GPIOE->CRH=0X33333333;    //推挽输出
	GPIOE->CRL=0X33333333;    //推挽输出
	GPIOF->CRH=0X33333333;    //推挽输出
	GPIOF->CRL=0X33333333;    //推挽输出
	GPIOG->CRH=0X33333333;    //推挽输出
	GPIOG->CRL=0X33333333;    //推挽输出
	 while (1)
    {			
	delay_ms(50);
	     	 
	GPIOB->ODR=0;	  		 //全部输出0
	GPIOA->ODR=0;		
	GPIOC->ODR=0;
	GPIOD->ODR=0;
	GPIOE->ODR=0;
	GPIOF->ODR=0;
	GPIOG->ODR=0;

	delay_ms(50);
	
	GPIOB->ODR=0xffffffff;	 //全部输出1 
	GPIOA->ODR=0xffffffff;	  
	GPIOC->ODR=0xffffffff;
	GPIOD->ODR=0xffffffff;
	GPIOE->ODR=0xffffffff;
	GPIOF->ODR=0xffffffff;
	GPIOG->ODR=0xffffffff;
	}
}
