/*
    Policijos šviesų kontrolė
    Police light controll

    ||||||||||||||||||||||||||||||||||||||||||||||||
    Reikalavimai:              | Requirements:
    LED prijungta prie 13 pin  | LED on 13 pin
    LED prijungta prie 12 pin  | LED on 12 pin

    LED prijungta prie 2 pin   | LED on 2 pin
    LED prijungta prie 4 pin   | LED on 4 pin
    
    Breadboard                 | Breadboard
    220 omega resistoriai      | 220 Omega resistor
    14 laidų                   | 14 wires
    ||||||||||||||||||||||||||||||||||||||||||||||||
    Parašyta naudojantis Adruino IDE 2.3.6
    Adruino modelis: UNO R3
    Made using Adruino IDE 2.3.6
    Adruino model I used: UNO R3
    ||||||||||||||||||||||||||||||||||||||||||||||||
    Didžiausios klaidos:
    Neteisingas LED pusių įdėjimas
    Biggest mistake:
    Wrong LED side insertion
    Graph: https://www.tinkercad.com/things/lg9tw2lU1OF/editel?returnTo=%2Fdashboard&sharecode=RSm8ncRCfvVuyJCmj_JObGNZdfI5N8SL88pqaDyOrzU
*/

int rr = 13;
int yy = 12;
int wt = 150;
int gg = 2;
int g2 = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(rr,OUTPUT);
  pinMode(yy,OUTPUT);
  pinMode(gg,OUTPUT);
  pinMode(g2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(gg,HIGH);
  digitalWrite(g2,LOW);
  pollight();
  digitalWrite(gg,LOW);
  digitalWrite(g2,HIGH);
  pollight();
}
void pollight() {
  //red
  digitalWrite(rr,HIGH);

  delay(wt);
  digitalWrite(rr,LOW);
  delay(wt);
    digitalWrite(rr,HIGH);
  delay(wt);
  digitalWrite(rr,LOW);

  delay(wt*2);
  //yellou
  digitalWrite(yy,HIGH);

  delay(wt);
  digitalWrite(yy,LOW);
  delay(wt);
  digitalWrite(yy,HIGH);
  delay(wt);
  digitalWrite(yy,LOW);
  delay(wt*2);
}