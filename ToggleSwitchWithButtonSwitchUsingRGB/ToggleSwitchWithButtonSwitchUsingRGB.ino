int redBut = 2;
int greenBut = 3;
int blueBut = 4;
int redPin = 10;
int greenPin = 9;
int bluePin = 8;
int butValR = 1;
int butValOldR = 1;
int butValG = 1;
int butValOldG = 1;
int butValB = 1;
int butValOldB = 1;
int ledStateR = 0;
int ledStateG = 0;
int ledStateB = 0;

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(redBut, INPUT);
  pinMode(greenBut, INPUT);
  pinMode(blueBut, INPUT);

  // put your setup code here, to run once:

}

void loop() {
  butValR = digitalRead(redBut);
  if(butValOldR == 0 && butValR == 1){
    if(ledStateR == 0){
      digitalWrite(redPin, HIGH);
    }
    if(ledStateR == 1){
      digitalWrite(redPin, LOW);
    }
    ledStateR = !ledStateR;
  }

  butValG = digitalRead(greenBut);
  if(butValOldG == 0 && butValG == 1){
    if(ledStateG == 0){
      digitalWrite(greenPin, HIGH);
    }
    if(ledStateG == 1){
      digitalWrite(greenPin, LOW);
    }
    ledStateG = !ledStateG;
  }

  butValB = digitalRead(blueBut);
  if(butValOldB == 0 && butValB == 1){
    if(ledStateB == 0){
      digitalWrite(bluePin, HIGH);
    }
    if(ledStateB == 1){
      digitalWrite(bluePin, LOW);
    }
    ledStateB = !ledStateB;
  }

  butValOldR = butValR;
  butValOldG = butValG;
  butValOldB = butValB;
  delay(50);
  // put your main code here, to run repeatedly:
}
