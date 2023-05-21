
int DataRasstoyanie = 0; // Данные расстояния в см без фильтра
int RasstoyanieSrednee = 0; // Данные расстояния в см усредненное значение

byte massRasstoianie1 [180][4]; // угол растояние 0-100 см
//byte massRasstoianie2 [180][100]; // угол растояние 100-200 см
//byte massRasstoianie3 [180][100]; // угол растояние 200-300 см
//byte massRasstoianie4 [180][100]; // угол растояние 300-400 см

//byte numersMass =0;  // Счет номера масива или границы расстояний
bool napr = false;


void Raschet (void){

 DataRasstoyanie = Rasstoianie(); // Получаем расстояние с датчика

 RasstoyanieSrednee = midArifm2(DataRasstoyanie); // Среднее значение расстояния


// Забиваем масив значениями
 if((pos >= 0) && (pos <= 180)){


    if ((RasstoyanieSrednee >= 0) && (RasstoyanieSrednee < 100)){ // Увеличиваем номер масива
        massRasstoianie1 [pos][0] = RasstoyanieSrednee ;
       }

    if ((RasstoyanieSrednee >= 100) && (RasstoyanieSrednee < 200)){ // Увеличиваем номер масива
        massRasstoianie1 [pos][1] = RasstoyanieSrednee ;
       } 

    //  if ((RasstoyanieSrednee >= 200) && (RasstoyanieSrednee < 300)){ // Увеличиваем номер масива
    //     massRasstoianie1 [pos][2] = RasstoyanieSrednee ;
    //    }

    //  if ((RasstoyanieSrednee >= 300) && (RasstoyanieSrednee < 400)){ // Увеличиваем номер масива
    //     massRasstoianie1 [pos][3] = RasstoyanieSrednee ;
    //    }

//      if((pos > 0) && (napr == false)){
//    pos ++;
//    myservo.write(pos);
//    if (pos == 180) {napr = true;}
//  }

//   if((pos <= 180) && (napr == true)){
//    pos --;
//    myservo.write(pos);
//    if (pos == 0) {napr = false;}
//  }

   
delay(100); 


  
 }
  
}
