#include <Keypad.h>

const byte FILAS = 4;
const byte COLUMNAS = 4;

char matriz[FILAS][COLUMNAS]={
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};


byte pinesFilas[FILAS] = {9,8,7,6};
byte pinesColumnas[COLUMNAS] = {5,4,3,2};

Keypad teclado = Keypad(makeKeymap(matriz),pinesFilas,pinesColumnas,FILAS,COLUMNAS);

char Tecla;



void setup() {
 Serial.begin(9600);
}

void loop() {
 
Tecla = teclado.getKey();

Serial.print(Tecla);
}
