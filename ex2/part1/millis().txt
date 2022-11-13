int period = 500;
bool High = false;
unsigned long time_now = 0;

void setup() {
    Serial.begin(115200);
    pinMode(13,OUTPUT);
    digitalWrite(13,HIGH);
}

void loop() {
    time_now = millis();

    if (High == true){
        digitalWrite(13, HIGH);
        High = false;
      }
    else{
        digitalWrite(13,LOW);
        High = true;
      }
        
    while(millis() < time_now + period){
      //do nothing
    }
}