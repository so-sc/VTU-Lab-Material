#include <LPC214x.h>
void delay(unsigned int value);
void gpio_init();
unsigned char cmd1[4]= {0x11,0x22,0x44,0x88};
//unsigned int j;
int main()
 { unsigned int i;
 gpio_init();
while(1) //* // Loop forever
 {
for (i=0;i<4;i++)
 {
IO0PIN =cmd1[i]<<15;
 delay(0X5000);
 }
 }
 }
void gpio_init()
{
 PINSEL0 = 0x00000000; // P1.15 - P1.18 as GPIO
 IODIR0 |= 0x00078000; // Set Port0 as Output
 IOCLR0 = 0x00078000;
 }
void delay(unsigned int value)
{
unsigned int k;
 for(k=0;k<value;k++);
 {;
}
}