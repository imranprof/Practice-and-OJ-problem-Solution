#line 1 "F:/MY WORK/Practice/mic program/led flash.c"
void main()
{
 porta=0x00;
 trisa=0x00;
 while(1)
 {
 porta=0b1111;
 delay_ms(250);
 porta=0b0000;
 delay_ms(250);
 porta=0b1010;
 delay_ms(250);
 porta=0b0101;
 delay_ms(250);

 porta=0b1110;
 delay_ms(250);
 porta=0b0111;
 delay_ms(250);
 porta=0b0000;
 delay_ms(1000);


 }

}
