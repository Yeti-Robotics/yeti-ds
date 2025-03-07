#include <USBJoystick.h>

#define ORANGE_SWITCH 52
#define BLUE_SWITCH 50
#define RED_SWITCH 48
#define SWITCH_1 42
#define SWITCH_2 44
#define SWITCH_3 46
#define BUTTON_1 
#define YETI_HEAD 40
#define OLED 53
#define BLED 49
#define RLED 51
#define LED1 43
#define LED2 45
#define LED3 47

USBJoystick joystick;

void setup() {
    pinMode(ORANGE_SWITCH, INPUT_PULLUP);
    pinMode(BLUE_SWITCH, INPUT_PULLUP);
    pinMode(RED_SWITCH, INPUT_PULLUP);
    pinMode(SWITCH_1, INPUT_PULLUP);
    pinMode(SWITCH_2, INPUT_PULLUP);
    pinMode(SWITCH_3, INPUT_PULLUP);
    pinMode(BUTTON_1, INPUT);
    pinMode(YETI_HEAD, INPUT_PULLUP);
    pinMode(OLED, OUTPUT);
    pinMode(BLED, OUTPUT);
    pinMode(RLED, OUTPUT);
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    Serial.begin(115200);  // Start Serial Monitor
}

void loop() {
    if (digitalRead(ORANGE_SWITCH) == LOW) {  // Button pressed (since it's pulled up by default)
        digitalWrite(OLED, HIGH);
        joystick.buttons(1);
    } else {
        digitalWrite(OLED, LOW);
        joystick.buttons(0);
    }
    if (digitalRead(BLUE_SWITCH) == LOW) {  // Button pressed (since it's pulled up by default)
        digitalWrite(BLED, HIGH);
        joystick.buttons(2);
    } else {
        digitalWrite(BLED, LOW);
        joystick.buttons(0);
    }
    if (digitalRead(RED_SWITCH) == LOW) {  // Button pressed (since it's pulled up by default)
        digitalWrite(RLED, HIGH);
        joystick.buttons(3);
    } else {
        digitalWrite(RLED, LOW);
        joystick.buttons(0);
    }
    if (digitalRead(SWITCH_1) == LOW) {  // Button pressed (since it's pulled up by default)
        digitalWrite(LED1, HIGH);
        joystick.buttons(4);
    } else {
        digitalWrite(LED1, LOW);
        joystick.buttons(0);
    }
    if (digitalRead(SWITCH_2) == LOW) {  // Button pressed (since it's pulled up by default)
        digitalWrite(LED2, HIGH);
        joystick.buttons(5);
    } else {
        digitalWrite(LED2, LOW);
        joystick.buttons(0);
    }
    if (digitalRead(SWITCH_3) == LOW) {  // Button pressed (since it's pulled up by default)
        digitalWrite(LED3, HIGH);
        joystick.buttons(6);
    } else {
        digitalWrite(LED3, LOW);
        joystick.buttons(0);
    }
    
}
