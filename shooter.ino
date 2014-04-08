
int duration, cm;
int ping(){
  
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigPin, LOW);
  
  //pinMode(pingPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  
  cm = (microsecondsToCM(duration))/2.54;
  
  Serial.print(cm);
  Serial.print(" inches");
  Serial.println();
  
  delay(100);
}

long microsecondsToCM(long microseconds){
  // sound travels 340 m/s
  return microseconds / 29 / 2;
}


int shoot(){
  analogWrite(rightWheelPin1, 255);
  analogWrite(leftWheelPin1, 255);
  //digitalWrite(rightWheelPin1, LOW);
  //digitalWrite(rightWheelPin2, HIGH);
  
  //digitalWrite(leftWheelPin1, LOW);
  //digitalWrite(leftWheelPin2, HIGH);
  delay(1500);
  analogWrite(rightWheelPin1, 0);
  analogWrite(leftWheelPin1, 0);
  analogWrite(loaderPin, 0);
  /*
  digitalWrite(rightWheelPin1, LOW);
  digitalWrite(rightWheelPin2, LOW);
  digitalWrite(leftWheelPin1, LOW);
  digitalWrite(leftWheelPin2, LOW);
  */
}
