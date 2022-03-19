
_main:

;Dot matrix display.c,1 :: 		void main() {
;Dot matrix display.c,3 :: 		porta=0x00;
	CLRF       PORTA+0
;Dot matrix display.c,4 :: 		trisa=0x00;
	CLRF       TRISA+0
;Dot matrix display.c,5 :: 		portb=0x00;
	CLRF       PORTB+0
;Dot matrix display.c,6 :: 		trisb=0x00;
	CLRF       TRISB+0
;Dot matrix display.c,7 :: 		while(1)
L_main0:
;Dot matrix display.c,9 :: 		porta=0b000001;
	MOVLW      1
	MOVWF      PORTA+0
;Dot matrix display.c,10 :: 		portb=0b11111110;
	MOVLW      254
	MOVWF      PORTB+0
;Dot matrix display.c,11 :: 		delay_ms(5);
	MOVLW      13
	MOVWF      R12+0
	MOVLW      251
	MOVWF      R13+0
L_main2:
	DECFSZ     R13+0, 1
	GOTO       L_main2
	DECFSZ     R12+0, 1
	GOTO       L_main2
	NOP
	NOP
;Dot matrix display.c,12 :: 		porta=0b000010;
	MOVLW      2
	MOVWF      PORTA+0
;Dot matrix display.c,13 :: 		portb=0b1111101;
	MOVLW      125
	MOVWF      PORTB+0
;Dot matrix display.c,14 :: 		delay_ms(5);
	MOVLW      13
	MOVWF      R12+0
	MOVLW      251
	MOVWF      R13+0
L_main3:
	DECFSZ     R13+0, 1
	GOTO       L_main3
	DECFSZ     R12+0, 1
	GOTO       L_main3
	NOP
	NOP
;Dot matrix display.c,15 :: 		porta=0b000100;
	MOVLW      4
	MOVWF      PORTA+0
;Dot matrix display.c,16 :: 		portb=0b11111011;
	MOVLW      251
	MOVWF      PORTB+0
;Dot matrix display.c,17 :: 		delay_ms(5);
	MOVLW      13
	MOVWF      R12+0
	MOVLW      251
	MOVWF      R13+0
L_main4:
	DECFSZ     R13+0, 1
	GOTO       L_main4
	DECFSZ     R12+0, 1
	GOTO       L_main4
	NOP
	NOP
;Dot matrix display.c,18 :: 		porta=0b000010;
	MOVLW      2
	MOVWF      PORTA+0
;Dot matrix display.c,19 :: 		portb=0b1111011;
	MOVLW      123
	MOVWF      PORTB+0
;Dot matrix display.c,20 :: 		delay_ms(5);
	MOVLW      13
	MOVWF      R12+0
	MOVLW      251
	MOVWF      R13+0
L_main5:
	DECFSZ     R13+0, 1
	GOTO       L_main5
	DECFSZ     R12+0, 1
	GOTO       L_main5
	NOP
	NOP
;Dot matrix display.c,21 :: 		porta=0b000010;
	MOVLW      2
	MOVWF      PORTA+0
;Dot matrix display.c,22 :: 		portb=0b11111101;
	MOVLW      253
	MOVWF      PORTB+0
;Dot matrix display.c,23 :: 		delay_ms(5);
	MOVLW      13
	MOVWF      R12+0
	MOVLW      251
	MOVWF      R13+0
L_main6:
	DECFSZ     R13+0, 1
	GOTO       L_main6
	DECFSZ     R12+0, 1
	GOTO       L_main6
	NOP
	NOP
;Dot matrix display.c,24 :: 		porta=0b001000;
	MOVLW      8
	MOVWF      PORTA+0
;Dot matrix display.c,25 :: 		portb=0b11111110;
	MOVLW      254
	MOVWF      PORTB+0
;Dot matrix display.c,26 :: 		delay_ms(5);
	MOVLW      13
	MOVWF      R12+0
	MOVLW      251
	MOVWF      R13+0
L_main7:
	DECFSZ     R13+0, 1
	GOTO       L_main7
	DECFSZ     R12+0, 1
	GOTO       L_main7
	NOP
	NOP
;Dot matrix display.c,27 :: 		porta=0b010000;
	MOVLW      16
	MOVWF      PORTA+0
;Dot matrix display.c,28 :: 		portb=0b000100;
	MOVLW      4
	MOVWF      PORTB+0
;Dot matrix display.c,29 :: 		delay_ms(5);
	MOVLW      13
	MOVWF      R12+0
	MOVLW      251
	MOVWF      R13+0
L_main8:
	DECFSZ     R13+0, 1
	GOTO       L_main8
	DECFSZ     R12+0, 1
	GOTO       L_main8
	NOP
	NOP
;Dot matrix display.c,30 :: 		porta=0b100000;
	MOVLW      32
	MOVWF      PORTA+0
;Dot matrix display.c,31 :: 		portb=0b11111011;
	MOVLW      251
	MOVWF      PORTB+0
;Dot matrix display.c,32 :: 		delay_ms(5);
	MOVLW      13
	MOVWF      R12+0
	MOVLW      251
	MOVWF      R13+0
L_main9:
	DECFSZ     R13+0, 1
	GOTO       L_main9
	DECFSZ     R12+0, 1
	GOTO       L_main9
	NOP
	NOP
;Dot matrix display.c,33 :: 		}
	GOTO       L_main0
;Dot matrix display.c,36 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
