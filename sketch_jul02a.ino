int right1 = 11;
int right2 = 10;
int left2 = 9;
int left1 = 6;
void setup()
{

  pinMode(right1, OUTPUT);
  pinMode(right2, OUTPUT);
  pinMode(left1, OUTPUT);
  pinMode(left2, OUTPUT);
  
}
void loop(){
  analogWrite(right1,180);
  analogWrite(left1,180);
}

