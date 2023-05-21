

https://github.com/saniadremont/AvtoControll.git


// Библиотеки
#include <Wire.h>               // Only needed for Arduino 1.6.5 and earlier
#include "SSD1306Wire.h"        // legacy: #include "SSD1306.h"
#include "fontsRus.h"
#include <NewPing.h> 
  

#include <ESP32Servo.h>
//ESP32PWM pwm;
//int freq = 1000;

SSD1306Wire display(0x3c, 5, 4);  // Подлючаем дисплей
//int counter = 1;


// Настройка HC-CR04 - эхолокатор
 #define PIN_TRIG 11    // Вывод TRIG 
 #define PIN_ECHO 12    // Вывод ECHO
 #define MAX_DISTANCE 400 // Константа для определения максимального расстояния


// Настройка сервопривода
Servo servo1; 
//int minUs = 1000;
// int maxUs = 2000; 
#define pinServo1  25

int pos = 0;  // Первоночальное положение сервопривода

// Настройка эхллота
NewPing sonar(PIN_TRIG, PIN_ECHO, MAX_DISTANCE); // Подключаемся


void setup() {

  Serial.begin(115200);
  display.init(); //  Инициализируем дисплей
  display.flipScreenVertically(); // Устанавливаем зеркальное отображение экрана, к примеру, удобно, если вы хотите желтую область сделать вверху
  display.setFontTableLookupFunction(FontUtf8Rus);

  initial();     // Инициализация данных
  settings(); // Настройка контроллера
}

void loop() {

for (pos = 0; pos <= 180; pos += 1) { // sweep from 0 degrees to 180 degrees
		// in steps of 1 degree
		 servo1.write(pos);
		delay(150);             // waits 20ms for the servo to reach the position
	}
	for (pos = 180; pos >= 0; pos -= 1) { // sweep from 180 degrees to 0 degrees
		servo1.write(pos);
		delay(150);
	}
  
// Raschet ();  // Получение и расчет 
 //Ypravlenie(); // Управление  
 
}







