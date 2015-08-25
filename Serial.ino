int led1 = 9;
int brightness = 0;

void setup()
{

  /* add setup code here */
	Serial.begin(9600);
	Serial.println("Power ON");
}

void loop()
{
	/* add main program code here */
	if (Serial.available() > 0){
		brightness=Serial.read();
    //Serial.print("Brightness "); //Uncomment these lines for debugging
    //Serial.println(brightness);
		analogWrite(led1, brightness);
		delay(50);
	}
}
