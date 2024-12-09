int led1 = 9;
int led2 = 10;

bool incc = true;
bool decc = false;

int inc = 5;

int timer1 = 0;
int timer2 = 255;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop() {

  if (incc){
    if (timer1 <= 250){
      timer1 += inc;   
    }else{
      timer1 = 255;
      incc = false;
    }
  }else{
    if (timer1 >= 5){
      timer1 -= inc;
    }else{
      timer1 = 0;
      incc = true;
    }
  }

  if (decc){
    if (timer2 <= 250){
      timer2 += inc;   
    }else{
      timer2 = 255;
      decc = false;
    }
  }else{
    if (timer2 >= 5){
      timer2 -= inc;
    }else{
      timer2 = 0;
      decc = true;
    }
  }
  
  analogWrite(led1,timer1);
  analogWrite(led2,timer2);

  Serial.println(timer1);
  Serial.println(timer2);

  delay(100);
}

