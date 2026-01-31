#include <windows.h>
#include <iostream>
#include <conio.h>

using namespace std;

// Definir funciones
void pulsar_tecla();



int main() {
	// while para repetirlo
	while(1){
		if(GetKeyState(VK_F1)){
			// llamamos la funcion
			pulsar_tecla(); 
		}
		// un sleep para evitar mucho gasto de recursos
		Sleep(1);
	}
}

void pulsar_tecla(){
	INPUT kg[2] = {0};
	
	// Pulsando tecla F2
	kg[0].type = INPUT_KEYBOARD;
	kg[0].ki.wScan = 0x3c;
	kg[0].ki.dwFlags = KEYEVENTF_SCANCODE;
		
	// soltando tecla F2
	kg[1].type = INPUT_KEYBOARD;
	kg[1].ki.wScan = 0x3c;
	kg[1].ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
	
	SendInput(2,kg,sizeof(INPUT));
}
