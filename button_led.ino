int led=10;
int button=5;
void setup() {
  pinMode(led,OUTPUT);
pinMode(button, INPUT);
}

void loop() {
 int buttonstate = digitalRead (button);
 digitalWrite (led,buttonstate);
}
