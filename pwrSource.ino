//test to test switching between power modes.

#define pwrSource 0  // 0- powered by DC adapter, 1- powered from coin cell
#define pwrReadPin A0 

int pwrSensorValue = 0; 

void setup() {
  Serial.begin(9600);
  Serial.println("Power Source Test");
}

void loop() {

      pwrSensorValue = analogRead(pwrReadPin);
      if(pwrSensorValue > 0){
        Serial.println(pwrSensorValue);
        delay(100);
      }
      else{
        
          
      }
}
