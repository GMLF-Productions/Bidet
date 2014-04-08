
const int rightWheelPin1 = 5;
const int rightWheelPin2 = 6;
const int leftWheelPin1  = 10;
const int leftWheelPin2  = 9;

const int echoPin = 12;
const int trigPin = 13;

const int loaderPin = 3;

int input; // input from user

void setup(){
  Serial.begin(9600);

  pinMode(rightWheelPin1, OUTPUT);
  pinMode(rightWheelPin2, OUTPUT);
  pinMode(leftWheelPin1, OUTPUT);
  pinMode(leftWheelPin2, OUTPUT);
}

void loop(){
  if(Serial.available() > 0){
    input = Serial.read();
    if(input == 'f'){
      shoot();
      ping();
    }
  }
 
  
}





