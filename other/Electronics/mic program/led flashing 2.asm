
_main:

;led flashing 2.c,1 :: 		void main() {
;led flashing 2.c,2 :: 		portc=0x00;
	CLRF       PORTC+0
;led flashing 2.c,3 :: 		trisc=0x00;
	CLRF       TRISC+0
;led flashing 2.c,4 :: 		while(1)
L_main0:
;led flashing 2.c,6 :: 		portc=0b11111111;
	MOVLW      255
	MOVWF      PORTC+0
;led flashing 2.c,7 :: 		delay_ms(250);
	MOVLW      3
	MOVWF      R11+0
	MOVLW      138
	MOVWF      R12+0
	MOVLW      85
	MOVWF      R13+0
L_main2:
	DECFSZ     R13+0, 1
	GOTO       L_main2
	DECFSZ     R12+0, 1
	GOTO       L_main2
	DECFSZ     R11+0, 1
	GOTO       L_main2
	NOP
	NOP
;led flashing 2.c,8 :: 		portc=0b00000000;
	CLRF       PORTC+0
;led flashing 2.c,9 :: 		delay_ms(250);
	MOVLW      3
	MOVWF      R11+0
	MOVLW      138
	MOVWF      R12+0
	MOVLW      85
	MOVWF      R13+0
L_main3:
	DECFSZ     R13+0, 1
	GOTO       L_main3
	DECFSZ     R12+0, 1
	GOTO       L_main3
	DECFSZ     R11+0, 1
	GOTO       L_main3
	NOP
	NOP
;led flashing 2.c,10 :: 		portc=0b11001100;
	MOVLW      204
	MOVWF      PORTC+0
;led flashing 2.c,11 :: 		delay_ms(250);
	MOVLW      3
	MOVWF      R11+0
	MOVLW      138
	MOVWF      R12+0
	MOVLW      85
	MOVWF      R13+0
L_main4:
	DECFSZ     R13+0, 1
	GOTO       L_main4
	DECFSZ     R12+0, 1
	GOTO       L_main4
	DECFSZ     R11+0, 1
	GOTO       L_main4
	NOP
	NOP
;led flashing 2.c,12 :: 		portc=0b01010101;
	MOVLW      85
	MOVWF      PORTC+0
;led flashing 2.c,13 :: 		delay_ms(250);
	MOVLW      3
	MOVWF      R11+0
	MOVLW      138
	MOVWF      R12+0
	MOVLW      85
	MOVWF      R13+0
L_main5:
	DECFSZ     R13+0, 1
	GOTO       L_main5
	DECFSZ     R12+0, 1
	GOTO       L_main5
	DECFSZ     R11+0, 1
	GOTO       L_main5
	NOP
	NOP
;led flashing 2.c,14 :: 		portc=0b10101010;
	MOVLW      170
	MOVWF      PORTC+0
;led flashing 2.c,15 :: 		delay_ms(250);
	MOVLW      3
	MOVWF      R11+0
	MOVLW      138
	MOVWF      R12+0
	MOVLW      85
	MOVWF      R13+0
L_main6:
	DECFSZ     R13+0, 1
	GOTO       L_main6
	DECFSZ     R12+0, 1
	GOTO       L_main6
	DECFSZ     R11+0, 1
	GOTO       L_main6
	NOP
	NOP
;led flashing 2.c,18 :: 		}
	GOTO       L_main0
;led flashing 2.c,19 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
