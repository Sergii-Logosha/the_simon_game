/////////////////////////////////////////////////////////////////////////////////////
// OVERVIEW
/////////////////////////////////////////////////////////////////////////////////////
/*
DESCRIPTION:

AUTHOR: Andre LaMothe

COMMENTS: 

HISTORY: Version 1.0
*/

/////////////////////////////////////////////////////////////////////////////////////
// INCLUDES
/////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////
// DEFINES, MACROS AND CONSTANTS
/////////////////////////////////////////////////////////////////////////////////////

const int BLUE_BUTTON_PIN =   7;
const int GREEN_BUTTON_PIN =  6;
const int RED_BUTTON_PIN =    5;
const int YELLOW_BUTTON_PIN = 4;

const int BLUE_LED_PIN =      13;
const int GREEN_LED_PIN =     12;
const int RED_LED_PIN =       11;
const int YELLOW_LED_PIN =    10;

const int BUZZER_PIN =        2;

const int BLUE_LED_TONE =   209;
const int GREEN_LED_TONE =  415;
const int RED_LED_TONE =    310;
const int YELLOW_LED_TONE = 252;

/////////////////////////////////////////////////////////////////////////////////////
// GLOBALS
/////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////
// FUNCTIONS
/////////////////////////////////////////////////////////////////////////////////////

void setup() 
{
  
pinMode(BLUE_BUTTON_PIN, INPUT);
pinMode(GREEN_BUTTON_PIN, INPUT);
pinMode(RED_BUTTON_PIN, INPUT);
pinMode(YELLOW_BUTTON_PIN, INPUT);

pinMode(BLUE_LED_PIN, OUTPUT);
pinMode(GREEN_LED_PIN, OUTPUT);
pinMode(RED_LED_PIN, OUTPUT);
pinMode(YELLOW_LED_PIN, OUTPUT);

pinMode(BUZZER_PIN, OUTPUT);

Serial.begin(115200);
  
} // end setup

/////////////////////////////////////////////////////////////////////////////////////

void loop()
{
  
if (!digitalRead(BLUE_BUTTON_PIN))
  {
    digitalWrite(BLUE_LED_PIN, HIGH);
    tone(BUZZER_PIN, BLUE_LED_TONE, 500);
    Serial.write("\nBLUE button pressed")
  }
else
  {
    digitalWrite(BLUE_LED_PIN, LOW);
  }

if (!digitalRead(GREEN_BUTTON_PIN))
  {
    digitalWrite(GREEN_LED_PIN, HIGH);
    tone(BUZZER_PIN, GREEN_LED_TONE, 500);
    Serial.write("\nGREEN button pressed")
  }
else
  {
    digitalWrite(GREEN_LED_PIN, LOW);
  }

if (!digitalRead(RED_BUTTON_PIN))
  {
    digitalWrite(RED_LED_PIN, HIGH);
    tone(BUZZER_PIN, RED_LED_TONE, 500);
    Serial.write("\nRED button pressed")
  }
else
  {
    digitalWrite(RED_LED_PIN, LOW);
  }

if (!digitalRead(YELLOW_BUTTON_PIN))
  {
    digitalWrite(YELLOW_LED_PIN, HIGH);
    tone(BUZZER_PIN, YELLOW_LED_TONE, 500);
    Serial.write("\nYELLOW button pressed")
  }
else
  {
    digitalWrite(YELLOW_LED_PIN, LOW);
  }
} // end loop

/////////////////////////////////////////////////////////////////////////////////////
