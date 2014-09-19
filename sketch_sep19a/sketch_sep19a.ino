//PARPADEO
void setup() {
  pinMode(13, OUTPUT);}
  void loop() {
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
  }
  
  
  
  //METODO PARPADEO
  void parpadeo (int time){
    digitalWrite(13, HIGH);
    delay(time)
    digitalWrite(13,LOW);
    delay(time);
  }
  
  //SUMA
  void suma(int value){
    int suma = value + 100;
    return suma;
  }
  
  //INGRESAR POR TECLADO ALGO
  String inString ="";
  void setup(){
    Serial.println(9600);
    Serial.println("\n\nString toInt():");
    Serial.println();
  }
  void loop(){
    while (Serial.available()>0) {
      int inChar = Serial.read();
      if (isDigit(inchair)) {
        inString="";        
      }
    }
  }
  
      
    
    
