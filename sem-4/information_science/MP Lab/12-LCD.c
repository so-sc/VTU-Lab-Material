#include <LPC214x.h>
#define LCD_RS 0x40000000 // P0.30(0100 0000 0000 0000 0000 0000 0000 0000)
#define LCD_RW 0x20000000 // P0.29(0010 0000 0000 0000 0000 0000 0000 0000)
#define LCD_EN 0x10000000 // P0.28(0001 0000 0000 0000 0000 0000 0000 0000)
//........................... Functions defined..............................................................................
void lcd_cmd(unsigned char val) ; // Write Command
void lcd_data(unsigned char val) ; // Write LCD Display(ASCII)
void delay(unsigned int);
void gpio_init();
void lcd_clr();
//........................... ...............................................................................................
unsigned char cmd1[5]= {0x38,0x0e,0x06,0x01,0x80}; // LCD Commands
unsigned char msg1[]="PESIT-12345" ; // Commands to be displayed
int main()
 { unsigned int i;
gpio_init();
 for(i=0;i<5;i++)
 lcd_cmd(cmd1[i]);
 for(i=0;msg1[i]!='\0';i++)
 lcd_data(msg1[i]);
lcd_cmd(0xc0);
 for(i=0;msg2[i]!='\0';i++) //#
 lcd_data(msg2[i]); //#

 while(1);
 }
void gpio_init()
{
PINSEL1 = 0x00000000; // P0.16 to 31 as GPIO pins
PINSEL2 = 0x00000000; // P1.16 to 31 as GPIO pins
 IODIR0 = 0x70000000;
// P0.28,P0.29,P0.30 as output pins i.e If corrosponding bit is 1:OUTPUT 0:INPUT
 IODIR1 = 0x00FF0000; // P1.16 to P0,23 as OUTPUT
 IOCLR0 = 0x70000000; // P0.28,P0.29,P0.30 is cleared
 IOCLR1 = 0x00FF0000; // P1.16 to P0,23 is cleard
}
void lcd_cmd(unsigned char val)
 {
IO1PIN=(val<<16);
IO0CLR=LCD_RS; // RS=0; Command register is enabled in LCD
IO0CLR=LCD_RW; // RW=0; Write Operation
IO0SET=LCD_EN ; // EN=1
delay(50);
IO0CLR=LCD_EN ; // EN=0 i.e HIGH to LOW transition at EN pin
delay(5000);
}
void lcd_data(unsigned char val)
 {
IO1PIN=(val<<16);
IO0SET=LCD_RS ; // RS=1; Data register is enabled in LCD
IO0CLR=LCD_RW; // RW=0; Write Operation
IO0SET=LCD_EN ; // EN=1
delay(50);
IO0CLR=LCD_EN ; // EN=0 i.e HIGH to LOW transition at EN pin
delay(500000);
 }
void delay(unsigned int value)
{ unsigned int j;
 for(j=0;j<value;j++);
}