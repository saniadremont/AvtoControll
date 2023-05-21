



void settings (void){

  
 //pinMode(motor, OUTPUT);
//digitalWrite(motor, LOW);

// Allow allocation of all timers
	 ESP32PWM::allocateTimer(0);
	ESP32PWM::allocateTimer(1);
	 ESP32PWM::allocateTimer(2);
	ESP32PWM::allocateTimer(3);
	servo1.setPeriodHertz(150);    // standard 50 hz servo
	servo1.attach(pinServo1, 1000, 1800); // attaches the servo on pin 18 to the servo object
	// using default min/max of 1000us and 2000us
	// different servos may require different min/max settings
	// for an accurate 0 to 180 sweep
 
 
}
