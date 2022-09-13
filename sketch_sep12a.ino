void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   /*
    SHUBHAM = ... .... ..- -... .... .- --
    - = 3 SECONDS (HIGH)
    . = 1 SECONDS (HIGH)

    TIME BETWEEN DASH AND DOT = 1 SECOND (LOW)
    TIME BETWEEN LETTERS = 2 SECONDS (LOW)
    */

    //S
    //.
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);    
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);   
    //.
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);    
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);    
    //.
    digitalWrite(LED_BUILTIN, HIGH);
    delay(3000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);   
    
    digitalWrite(LED_BUILTIN, LOW);
    delay(2000);

    //H    
    //.
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);    
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
    //.
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);    
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
    //.
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);    
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
    //.
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);    
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);

    digitalWrite(LED_BUILTIN, LOW);
    delay(2000);

    //U
    //.
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);    
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);   
    //.
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);    
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
    //-
    digitalWrite(LED_BUILTIN, HIGH);
    delay(3000);    
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);

    digitalWrite(LED_BUILTIN, LOW);
    delay(2000);
    
    //B
    //-
    digitalWrite(LED_BUILTIN, HIGH);
    delay(3000);    
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
    //.
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);    
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);   
    //.
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);    
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);    
    //.
    digitalWrite(LED_BUILTIN, HIGH);
    delay(3000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);

     digitalWrite(LED_BUILTIN, LOW);
    delay(2000);

    //H    
    //.
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);    
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
    //.
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);    
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
    //.
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);    
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
    //.
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);    
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);

    digitalWrite(LED_BUILTIN, LOW);
    delay(2000);

    //A
    //.
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);    
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
    //-
    digitalWrite(LED_BUILTIN, HIGH);
    delay(3000);    
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);

    digitalWrite(LED_BUILTIN, LOW);
    delay(2000);

    //M
    //-
    digitalWrite(LED_BUILTIN, HIGH);
    delay(3000);    
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
    //-
    digitalWrite(LED_BUILTIN, HIGH);
    delay(3000);    
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);

}
