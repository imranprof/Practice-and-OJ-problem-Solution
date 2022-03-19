#line 1 "G:/Imran/Protius/mic program/led flashing 2.c"
void main() {
 portc=0x00;
 trisc=0x00;
 while(1)
 {
 portc=0b11111111;
 delay_ms(250);
 portc=0b00000000;
 delay_ms(250);
 portc=0b11001100;
 delay_ms(250);
 portc=0b01010101;
 delay_ms(250);
 portc=0b10101010;
 delay_ms(250);


 }
}
