#define extLeft 4
#define Mid1 8
#define Mid2 11
#define extRight 13
#define extrsensor 2
#define RM2 9
#define RM1 6
#define LM2 5
#define LM1 3

void setup(){
  pinMode(extLeft,INPUT);
  pinMode(Mid1,INPUT);
  pinMode(Mid2,INPUT);
  pinMode(extRight,INPUT);
  pinMode(LM1,OUTPUT);
  pinMode(LM2,OUTPUT);
  pinMode(RM1,OUTPUT);
  pinMode(RM2,OUTPUT);
  }
  void loop(){
 /*line forward */
 if(!digitalRead(extRight) && !digitalRead(extLeft)){
 if(digitalRead(Mid1) && digitalRead(Mid2)){
  analogWrite(LM1,155);
  analogWrite(LM2,0);
  analogWrite(RM1,165);
  analogWrite(RM2,0);
  delay(1000);
  }
  else if(!digitalRead(Mid1) && !digitalRead(Mid2)){
     analogWrite(LM1,155);
  analogWrite(LM2,0);
  analogWrite(RM1,255);
  analogWrite(RM2,0);
  delay(1000);
    }  
  }
/*Move right*/
if(digitalRead(extRight)){
  analogWrite(LM1,155);
  analogWrite(LM2,0);
  analogWrite(RM1,0);
  analogWrite(RM2,0);
  delay(1000);
  
  }
  /*Move left*/
  if(digitalRead(extLeft)){
    analogWrite(LM1,0);
    analogWrite(LM2,0);
    analogWrite(RM1,255);
    analogWrite(RM2,0);
    delay(1000);
   }
if(digitalRead(Mid1) && digitalRead(Mid2))   
   {
    if(digitalRead(extRight) && digitalRead(extLeft)){
    if(!digitalRead(extrsensor)){
      analogWrite(LM1,155);
      analogWrite(LM2,0);
      analogWrite(RM1,255);
      analogWrite(RM2,0);
      delay(1000);
      }
      else if(digitalRead(extrsensor)){
        analogWrite(LM1,0);
      analogWrite(LM2,0);
      analogWrite(RM1,0);
      analogWrite(RM2,0);
        delay(1000);
        }
    }
    
    }
   
    }
