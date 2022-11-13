int period = 500;
bool High = false;
unsigned long time_now = 0;
int pre_level = 12;
int next_level = 13;
int buttonState;

void setup() {
    Serial.begin(115200);
    
    pinMode(13,OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(1,INPUT);

    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
}

void loop() {
    time_now = millis();
    buttonState = digitalRead(1);
    if (buttonState == LOW)
    {
      switch (next_level) {
        case 13:
          digitalWrite(next_level, HIGH);
          digitalWrite(pre_level, LOW);
          pre_level = 13;
          next_level = 12;
          break;

        case 12:
          digitalWrite(next_level, HIGH);
          digitalWrite(pre_level, LOW);
          next_level = 12 + next_level - pre_level;    
          pre_level = 12; 
          break;

        case 11:
          digitalWrite(next_level, HIGH);
          digitalWrite(pre_level, LOW);
          next_level = 11 + next_level - pre_level;    
          pre_level = 11; 
          break;

        case 10:
          digitalWrite(next_level, HIGH);
          digitalWrite(pre_level, LOW);
          next_level = 10 + next_level - pre_level;    
          pre_level = 10; 
          break;

        case 9:
          digitalWrite(next_level, HIGH);
          digitalWrite(pre_level, LOW);
          next_level = 9 + next_level - pre_level;    
          pre_level = 9; 
          break;

        case 8:
          digitalWrite(next_level, HIGH);
          digitalWrite(pre_level, LOW);
          next_level = 8 + next_level - pre_level;    
          pre_level = 8; 
          break;

        case 7:
          digitalWrite(next_level, HIGH);
          digitalWrite(pre_level, LOW);
          next_level = 7 + next_level - pre_level;    
          pre_level = 7; 
          break;

        case 6:
          digitalWrite(next_level, HIGH);
          digitalWrite(pre_level, LOW);
          next_level = 7;    
          pre_level = 6; 
          break;

        default:
          break;
      }
    }
          
    while(millis() < time_now + period){
      //do nothing
    }
}