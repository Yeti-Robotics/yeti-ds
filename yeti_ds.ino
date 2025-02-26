#include <USBJoystick.h>

#define ORANGE_SWITCH 53
#define SWITCH_1 50  // Change this to the pin you're using
#define SWITCH_2 48
#define LED_PIN 52  // Change this to the pin you're using

USBJoystick joystick;

void setup() {
    pinMode(ORANGE_SWITCH, INPUT);
    pinMode(LED_PIN, OUTPUT);
    // pinMode(SWITCH_1, 0);
    // pinMode(SWITCH_2, 0);  // Enable internal pull-up resistor
    Serial.begin(115200);  // Start Serial Monitor
}

void loop() {
    int orangeSwitchState = digitalRead(ORANGE_SWITCH);  // Read switch state

    if (orangeSwitchState == LOW) {  // Button pressed (since it's pulled up by default)
        digitalWrite(LED_PIN, HIGH);
        joystick.buttons(1);
    } else {
        digitalWrite(LED_PIN, LOW);
        joystick.buttons(0);
    }

    int currentButtonState = !digitalRead(ORANGE_SWITCH);
    // if (digitalRead(SWITCH_1) == LOW) {  // Button pressed (since it's pulled up by default)
    //     Serial.println("Switch 1 Pressed!");
    // } else {
    //     Serial.println("Switch 1 Released!");
    // }
    // if (digitalRead(SWITCH_2) == LOW) {
    //   Serial.println("Switch 2 ");
    // }
    // delay(100);
}
