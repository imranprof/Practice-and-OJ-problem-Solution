sbit LCD_RS at RD2_bit;
sbit LCD_EN at RD3_bit;
sbit LCD_D4 at RD4_bit;
sbit LCD_D5 at RD5_bit;
sbit LCD_D6 at RD6_bit;
sbit LCD_D7 at RD7_bit;


sbit LCD_RS_direction at trisd2_bit;
sbit LCD_EN_direction at trisd3_bit;
sbit LCD_D4_direction at trisd4_bit;
sbit LCD_D5_direction at trisd5_bit;
sbit LCD_D6_direction at trisd6_bit;
sbit LCD_D7_direction at trisd7_bit;


void main() {

   Lcd_Init();
   while(1)
   
   {

     LCD_cmd(_Lcd_clear);
     Lcd_cmd(_Lcd_cursor_off);
     
     Lcd_out(1,1,"MICROCONTROLLER");
     Lcd_out(2,2,"Comilla");
     delay_ms(2000);
     Lcd_cmd(_Lcd_clear);
     lcd_out(1,4,"IMRAN");
     lcd_out(2,3,"FALL");
     Delay_ms(2000);
     Lcd_cmd(_lcd_clear);
     lcd_out(1,3,"IN");
     LCD_out(2,4,"LOVE");
     Delay_ms(2000);
     lcd_cmd(_lcd_clear);
     
     lcd_out(1,2,"SAZZAD");
     LCD_OUT(2,3,"HOSSEN");
     delay_ms(2000);
     lcd_cmd(_lcd_clear);
     
     
   }
}