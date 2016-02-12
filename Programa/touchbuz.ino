int Led= 13;
int buzzer = 8 ;// setting controls the digital IO foot buzzer

int buttonpin = 3;
int val;

void setup(){
  pinMode(13,OUTPUT);
  pinMode(3,INPUT);
  pinMode (buzzer, OUTPUT) ;// set the digital IO pin mode, OUTPUT out of Wen

}

void loop(){
  val = digitalRead(buttonpin);
  if (val == HIGH){
    digitalWrite(Led,HIGH);
      unsigned char i, j ;// define variables
       for (i = 0; i <80; i++) // Wen a frequency sound
      {
        digitalWrite (buzzer, HIGH) ;// send voice
        delay (1) ;// Delay 1ms
        digitalWrite (buzzer, LOW) ;// do not send voice
        delay (1) ;// delay ms
      }
      for (i = 0; i <100; i++) // Wen Qie out another frequency sound
      {
        digitalWrite (buzzer, HIGH) ;// send voice
        delay (2) ;// delay 2ms
        digitalWrite (buzzer, LOW) ;// do not send voice
        delay (2) ;// delay 2ms
    }
  }
    
  }else{
    digitalWrite(Led,LOW);
  }
}