import processing.serial.*;
Serial myPort;

void setup(){
 myPort = new Serial(this, Serial.list()[0], 9600);
 println(Serial.list()); 
}

void draw(){
 String lines[] = loadStrings("/Users/jyounker/Dropbox/ArduinoOLA/Code/Laptops.txt");
 myPort.write(lines[0]);
}
