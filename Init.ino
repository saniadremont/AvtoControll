

void initial(void){
  
  display.clear(); // Очищаем экран

  display.setFont(ArialRus_Plain_10); // Шрифт кегль 10
  display.setTextAlignment(TEXT_ALIGN_CENTER);
  display.drawString(64, 22, "Контроль за горизонтом!");
  display.display(); // Выводим на экран
  delay(1000);
  display.clear(); // Очищаем экран



  display.setColor(WHITE);
  display.fillCircle(64, 61, 3);
   display.display(); // Выводим на экран

  for (int i = 1; i < 3; i++) {
    display.setColor(WHITE);
    display.drawCircle(64, 60, i * 25);
  }
  display.display(); // Выводим на экран


  
    //display.setPixel(10, 10);
    display.fillRect(12, 12, 20, 20);
  
  display.display(); // Выводим на экран

  // display.drawRect(12, 12, 20, 20);

  // // Fill the rectangle
  // display.fillRect(14, 14, 17, 17);

  // // Draw a line horizontally
  // display.drawHorizontalLine(0, 40, 20);

  // // Draw a line horizontally
  // display.drawVerticalLine(40, 0, 20);
}