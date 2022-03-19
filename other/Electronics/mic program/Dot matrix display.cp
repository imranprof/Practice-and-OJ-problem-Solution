#line 1 "I:/MY WORK/Practice/mic program/Dot matrix display.c"
void main() {

porta=0x00;
trisa=0x00;
portb=0x00;
trisb=0x00;
while(1)
{
 porta=0b000001;
 portb=0b11111110;
 delay_ms(5);
 porta=0b000010;
 portb=0b1111101;
 delay_ms(5);
 porta=0b000100;
 portb=0b11111011;
 delay_ms(5);
 porta=0b000010;
 portb=0b1111011;
 delay_ms(5);
 porta=0b000010;
 portb=0b11111101;
 delay_ms(5);
 porta=0b001000;
 portb=0b11111110;
 delay_ms(5);
 porta=0b010000;
 portb=0b000100;
 delay_ms(5);
 porta=0b100000;
 portb=0b11111011;
 delay_ms(5);
}


}
