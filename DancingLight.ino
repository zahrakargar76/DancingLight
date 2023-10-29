//definition of two dimensional presentation
int danclight [5] [4] = {
  {0,0,0,1},
  {0,0,1,1},
  {0,1,1,0},
  {1,1,0,0},
  {1,0,0,0}
};
void setup() {
  // put your setup code here, to run once:
  for(int thispin = 0; thispin < 4; thispin++) {
    pinMode(thispin, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int a = 0; a <= 5; a++){
    for(int i = 0; i <= 4; i++){
      digitalWrite(i, danclight[a] [i]);
    }
    delay(500); //wait for a second
  }
}
