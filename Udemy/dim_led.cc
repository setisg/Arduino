const int led_1_pin = 3;
const int led_2_pin = 5;
const int led_3_pin = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_1_pin, OUTPUT);
  pinMode(led_2_pin, OUTPUT);
  pinMode(led_3_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Store the PWD duty
  int bright_1;
  int bright_2;
  int bright_3;

  // Increases LED brightness at different times
  for(int i = 0; i < 395; i++){
    // Store brightness levels
    bright_1 = i;
    bright_2 = i - 70;
    bright_3 = i - 140;

    // Limit brightness to between 0 to 255
    if(bright_1 < 0){
        bright_1 = 0;
    }
    else if(bright_1 > 255){
        bright_1 = 255;
    }

    if(bright_2 < 0 ){
      bright_2 = 0;
    }
    else if(bright_2 > 255){
      bright_2 = 255;
      }

    if(bright_3 < 0 ){
      bright_3 = 0;
      }
    else if(bright_3 > 255){
      bright_3 = 255;
      }

      analogWrite(led_1_pin, bright_1);
      analogWrite(led_2_pin, bright_2);
      analogWrite(led_3_pin, bright_3);

      delay(15);
  }



}
