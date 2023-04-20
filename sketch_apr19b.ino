const int pul = 2;
const int pul_2 = 3;
const int led = 4;
const int led_2 = 5;
const int buzzer = 6;
const float do_1 = 523.25;
const float DoS = 554.37;
const float re_1 = 587.33;
const float ReS = 622.25;
const float mi_1 = 659.26;
const float fa_1 = 698.46;
const float FaS = 739.99;
const float sol_1 = 783.99;
const float SolS = 830.61;
const float la_1 = 880;
const float LaS = 932.33;
const float si_1 = 987.77;
const int redonda = 250;
const int blanca_1 = 125;
const int negra_1 = 62;
const int corchea = 31;
const int semicorchea = 15;
const int fusa = 7;
const int semifusa = 3;
const int retardo_1 = 100; 
#define Do 261
#define Re 293
#define Mi 329
#define Fa 349
#define Sol 392
#define La 440
#define Si 493
#define negra 250
#define blanca 500
#define retardo 3000
#define entrada() pinMode(pul,INPUT)
#define entrada_2() pinMode(pul_2,INPUT)
#define salida() pinMode(led,OUTPUT)
#define salida_2() pinMode(led_2,OUTPUT)
#define b_salida() pinMode(buzzer,OUTPUT)
void setup()
{
entrada();
entrada_2();
salida();
salida_2();
b_salida();
}
void loop()
{
  if(digitalRead(2) == 1){
  digitalWrite(led,HIGH);
  tone(buzzer, Do,negra);
  delay(200);
  noTone(buzzer);
  delay(200);
  tone(buzzer, Do, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
  tone(buzzer, Sol, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
  tone(buzzer, Sol, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
  tone(buzzer, La, negra);
  delay(200);
  noTone(buzzer);
  delay(100);
  tone(buzzer, La, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
  tone(buzzer, Sol, blanca);
  delay(200);
  noTone(buzzer);
  delay(200);

  tone(buzzer, Fa, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
  tone(buzzer, Fa, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
  tone(buzzer, Mi, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
  tone(buzzer, Mi, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
  tone(buzzer, Re, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
  tone(buzzer, Re, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
  tone(buzzer,Do, blanca);
  delay(200);
  noTone(buzzer);
  delay(200);

  tone(buzzer, Sol, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
  tone(buzzer, Sol, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
  tone(buzzer, Fa, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
  tone(buzzer, Fa, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
  tone(buzzer, Mi, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
  tone(buzzer, Mi, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
  tone(buzzer, Re, blanca);
  delay(200);
  noTone(buzzer);
  delay(200);
  tone(buzzer, Sol, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
  tone(buzzer, Sol, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
 tone(buzzer, Fa, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
 tone(buzzer, Fa, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
 tone(buzzer, Mi, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
 tone(buzzer, Mi, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
 tone(buzzer, Re, blanca);
  delay(200);
  noTone(buzzer);
  delay(200);

 tone(buzzer, Do, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
 tone(buzzer, Do, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
 tone(buzzer, Sol, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
  tone(buzzer, Sol, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
 tone(buzzer, La, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
 tone(buzzer, La, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
 tone(buzzer, Sol, blanca);
  delay(200);
  noTone(buzzer);
  delay(200);

 tone(buzzer, Fa, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
 tone(buzzer, Fa, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
 tone(buzzer, Mi, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
 tone(buzzer, Mi, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
 tone(buzzer, Re, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
 tone(buzzer, Re, negra);
  delay(200);
  noTone(buzzer);
  delay(200);
 tone(buzzer, Do, blanca);
  delay(200);
  noTone(buzzer);
  delay(1000);
  digitalWrite(led, LOW);
  }
  if(digitalRead(3) == 1) {
   digitalWrite(led_2,HIGH);
   tone(buzzer, do_1, negra_1);
    delay(300);
   noTone(buzzer);
   delay(300);
   tone(buzzer, re_1, negra_1);
   delay(300);
   noTone(buzzer);
   delay(300);
   tone(buzzer, mi_1, negra_1);
    delay(300);
   noTone(buzzer);
   delay(300);
   tone(buzzer, do_1, negra_1);
    delay(300);
   noTone(buzzer);
   delay(300);
   tone(buzzer, do_1, negra_1);
   delay(300);
   noTone(buzzer);
   delay(300);
   tone(buzzer, re_1, negra_1);
    delay(300);
   noTone(buzzer);
   delay(300);
   tone(mi_1, negra_1);
    delay(300);;
   noTone(buzzer);
   delay(300);
   tone(buzzer, do_1, negra_1);
   delay(300);
   noTone(buzzer);
   delay(300);


   tone(buzzer, mi_1, negra_1);
   delay(300);
   noTone(buzzer);
   delay(300);
   tone(buzzer, fa_1, negra_1);
    delay(300);
   noTone(buzzer);
   delay(300);
   tone(buzzer, sol_1, blanca_1);
    delay(300);
   noTone(buzzer);
   delay(300);

   tone(buzzer, mi_1, negra_1);
    delay(300);
   noTone(buzzer);
   delay(300);
   tone(buzzer, fa_1,negra_1);
    delay(300);
   noTone(buzzer);
   delay(300);
   tone(sol_1, blanca_1);
    delay(300);
   noTone(buzzer);
   delay(300);

   tone(buzzer, sol_1, corchea);
    delay(300);
   noTone(buzzer);
   delay(300);
   tone(buzzer, la_1, corchea);
    delay(300);
   noTone(buzzer);
   delay(300);
   tone(buzzer, sol_1, corchea);
    delay(300);
   noTone(buzzer);
   delay(300);
   tone(buzzer, fa_1, corchea);
    delay(300);
   noTone(buzzer);
   delay(300);
   tone(buzzer, mi_1, negra_1);
    delay(300);
   noTone(buzzer);
   delay(300);
   tone(buzzer, do_1, negra_1);
    delay(300);
   noTone(buzzer);
   delay(300);

   tone(buzzer, sol_1, corchea);
   delay(300);
   noTone(buzzer);
   delay(300);
   tone(buzzer, la_1, corchea);
    delay(300);
   noTone(buzzer);
   delay(300);
   tone(buzzer, sol_1, corchea);
    delay(300);
   noTone(buzzer);
   delay(300);
   tone(buzzer, fa_1, corchea);
    delay(300);
   noTone(buzzer);
   delay(300);
   tone(buzzer, mi_1, negra_1);
    delay(300);
   noTone(buzzer);
   delay(300);
   tone(buzzer, do_1, negra_1);
    delay(300);
   noTone(buzzer);
   delay(300);

   tone(buzzer, re_1, negra_1);
   delay(300);
   noTone(buzzer);
   delay(300);
   tone(buzzer, sol_1, negra_1);
    delay(300);
   noTone(buzzer);
   delay(300);

   tone(buzzer, do_1, blanca_1);
    delay(300);
   noTone(buzzer);
   delay(300);

   tone(buzzer, re_1, negra_1);
    delay(300);
   noTone(buzzer);
   delay(300);
   tone(buzzer, sol_1, negra_1);
    delay(300);
   noTone(buzzer);
   delay(300);
   tone(buzzer, do_1, negra_1);
   delay(300);
   noTone(buzzer);
   delay(300);
   digitalWrite(led_2,LOW);
   }    
}








