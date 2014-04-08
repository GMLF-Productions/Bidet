
int openDoor(){
    analogWrite(loaderPin, 60);   
    delay(10);
    analogWrite(loaderPin, 0);
    //shoot();
}

