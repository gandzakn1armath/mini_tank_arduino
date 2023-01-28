char val;
int IN1 = 8; 
int IN2 = 6; 
int IN3 = 7; 
int IN4 = 4; 
void setup(){
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  if (Serial.available()) {
    val = Serial.read();
    Serial.println(val);
    if(val == 'S'){
      stopMotor();
     }
    if(val == 'F'){
      forward();
     }
    if(val == 'B'){
      backward();
     }
    if(val == 'L'){
      turnLeft();
     }
    if(val == 'R'){
      turnRight();
     }
  }
}

void forward()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);  
}

void turnLeft()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);  
}

void turnRight()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);  
}

void backward()
{
  digitalWrite(IN1, HIGH); 
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH); 
  digitalWrite(IN4, LOW);
}

void stopMotor()
{
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW); 
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
}
