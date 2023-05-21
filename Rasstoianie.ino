


const int NUM_READ = 5;  // количество усреднений для средних арифм. фильтров
int distance = 0;  //Дистанция в см



int Rasstoianie (){
  return distance = sonar.ping_cm(); // Получаем расстояние
//return distance;
}



int midArifm2(int newVal) {
  static byte counter = 0;     // счётчик
  static int prevResult = 0; // хранит предыдущее готовое значение
  static int sum = 0;  // сумма
  sum += newVal;   // суммируем новое значение
  counter++;       // счётчик++
  if (counter == NUM_READ) {      // достигли кол-ва измерений
    prevResult = sum / NUM_READ;  // считаем среднее
    sum = 0;                      // обнуляем сумму
    counter = 0;                  // сброс счётчика
  }
  return prevResult;
}
