#include <USBJoystick.h>

#define ORANGE_SWITCH 52
#define BLUE_SWITCH 50
#define RED_SWITCH 48
#define SWITCH_3 46
#define SWITCH_2 44
#define SWITCH_1 42
#define BR1 40
#define GR2 38
#define BL1 36
#define BR2 34
#define WL2 32
#define GR1 30
#define WL1 28
#define WR2 26
#define GL2 24
#define WR1 51
#define GL1 49
#define BL2 47
#define OLED 0 // placeholder
#define BLED 0 // placeholder
#define RLED 0 // placeholder
#define LED1 0 // placeholder
#define LED2 0
#define LED3 0
// #define YETIHEAD1 1
// #define YETIHEAD2 2
// #define YETIHEAD3 3
#define YETIHEAD4 4
#define YETIHEAD5 5
#define YETIHEAD6 6
#define YETIHEAD7 7
#define YETIHEAD8 8

USBJoystick joystick;

void setup() {
    pinMode(ORANGE_SWITCH, INPUT_PULLUP);
    pinMode(BLUE_SWITCH, INPUT_PULLUP);
    pinMode(RED_SWITCH, INPUT_PULLDOWN);
    pinMode(SWITCH_1, INPUT_PULLDOWN);
    pinMode(SWITCH_2, INPUT_PULLDOWN);
    pinMode(SWITCH_3, INPUT_PULLDOWN);
    pinMode(OLED, OUTPUT);
    pinMode(BLED, OUTPUT);
    pinMode(RLED, OUTPUT);
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(GL1, INPUT_PULLUP);
    pinMode(GR1, INPUT_PULLUP);
    pinMode(WL1, INPUT_PULLUP);
    pinMode(WR1, INPUT_PULLUP);
    pinMode(BL1, INPUT_PULLUP);
    pinMode(BR1, INPUT_PULLUP);
    pinMode(GL2, INPUT_PULLUP);
    pinMode(GR2, INPUT_PULLUP);
    pinMode(WL2, INPUT_PULLUP);
    pinMode(WR2, INPUT_PULLUP);
    pinMode(BL2, INPUT_PULLUP);
    pinMode(BR2, INPUT_PULLUP);
    // pinMode(YETIHEAD1, OUTPUT);
    // pinMode(YETIHEAD2, OUTPUT);
    // pinMode(YETIHEAD3, OUTPUT);
    pinMode(YETIHEAD4, OUTPUT);
    pinMode(YETIHEAD5, OUTPUT);
    pinMode(YETIHEAD6, OUTPUT);
    pinMode(YETIHEAD7, OUTPUT);
    pinMode(YETIHEAD8, OUTPUT);
    Serial.begin(115200);  // Start Serial Monitor
}

uint32_t bitTwiddler = 0;

void loop() {
    if (digitalRead(BLUE_SWITCH) == HIGH) {  // Button pressed (since it's pulled up by default)
        digitalWrite(BLED, HIGH);
        bitTwiddler |= (1UL << 0);
    } else {
        digitalWrite(BLED, LOW);
        bitTwiddler &= ~(1UL << 0);
    }
    if (digitalRead(RED_SWITCH) == HIGH) {  // Button pressed (since it's pulled up by default)
        digitalWrite(RLED, HIGH);
        bitTwiddler |= (1UL << 1);
    } else {
        digitalWrite(RLED, LOW);
        bitTwiddler &= ~(1UL << 1);
    }
    if (digitalRead(ORANGE_SWITCH) == HIGH) {  // Button pressed (since it's pulled up by default)
        digitalWrite(OLED, HIGH);
        bitTwiddler |= (1UL << 2);
    } else {
        digitalWrite(OLED, LOW);
        bitTwiddler &= ~(1UL << 2);
    }
    if (digitalRead(SWITCH_3) == HIGH) {  // Button pressed (since it's pulled up by default)
        digitalWrite(LED1, HIGH);
        bitTwiddler |= (1UL << 3);
    } else {
        digitalWrite(LED1, LOW);
        bitTwiddler &= ~(1UL << 3);
    }
    if (digitalRead(SWITCH_2) == HIGH) {  // Button pressed (since it's pulled up by default)
        digitalWrite(LED2, HIGH);
        bitTwiddler |= (1UL << 4);
    } else {
        digitalWrite(LED2, LOW);
        bitTwiddler &= ~(1UL << 4);
    }
    if (digitalRead(SWITCH_1) == HIGH) {  // Button pressed (since it's pulled up by default)
        digitalWrite(LED3, HIGH);
        bitTwiddler |= (1UL << 5);
    } else {
        digitalWrite(LED3, LOW);
        bitTwiddler &= ~(1UL << 5);
    }

    if (digitalRead(GL1) == LOW) {  // Button pressed (since it's pulled up by default)
        bitTwiddler |= (1UL << 6);
    } else {
        bitTwiddler &= ~(1UL << 6);
    }
    if (digitalRead(GR1) == LOW) {  // Button pressed (since it's pulled up by default)
        bitTwiddler |= (1UL << 7);
    } else {
        bitTwiddler &= ~(1UL << 7);
    }
    if (digitalRead(WL1) == LOW) {  // Button pressed (since it's pulled up by default)
        bitTwiddler |= (1UL << 8);
    } else {
        bitTwiddler &= ~(1UL << 8);
    }
    if (digitalRead(WR1) == LOW) {  // Button pressed (since it's pulled up by default)
        bitTwiddler |= (1UL << 9);
    } else {
        bitTwiddler &= ~(1UL << 9);
    }
    if (digitalRead(BL1) == LOW) {  // Button pressed (since it's pulled up by default)
        bitTwiddler |= (1UL << 10);
    } else {
        bitTwiddler &= ~(1UL << 10);
    }
    if (digitalRead(BR1) == LOW) {  // Button pressed (since it's pulled up by default)
        bitTwiddler |= (1UL << 11);
    } else {
        bitTwiddler &= ~(1UL << 11);
    }
    if (digitalRead(GL2) == LOW) {  // Button pressed (since it's pulled up by default)
        bitTwiddler |= (1UL << 12);
    } else {
        bitTwiddler &= ~(1UL << 12);
    }
    if (digitalRead(GR2) == LOW) {  // Button pressed (since it's pulled up by default)
        bitTwiddler |= (1UL << 13);
    } else {
        bitTwiddler &= ~(1UL << 13);
    }
    if (digitalRead(WL2) == LOW) {  // Button pressed (since it's pulled up by default)
        bitTwiddler |= (1UL << 14);
    } else {
        bitTwiddler &= ~(1UL << 14);
    }
    if (digitalRead(WR2) == LOW) {  // Button pressed (since it's pulled up by default)
        bitTwiddler |= (1UL << 15);
    } else {
        bitTwiddler &= ~(1UL << 15);
    }
    if (digitalRead(BL2) == LOW) {  // Button pressed (since it's pulled up by default)
        bitTwiddler |= (1UL << 16);
    } else {
        bitTwiddler &= ~(1UL << 16);
    }
    if (digitalRead(BR2) == LOW) {  // Button pressed (since it's pulled up by default)
        bitTwiddler |= (1UL << 17);
    } else {
        bitTwiddler &= ~(1UL << 17);
    }

    // if (digitalRead(YETIHEAD1) == HIGH) {  // Button pressed (since it's pulled up by default)
    //     bitTwiddler |= (1UL << 18);
    //     Serial.println("Dial1 On");
    // } else {
    //     bitTwiddler &= ~(1UL << 18);
    //     Serial.println("Dial1 Off");
    // }
    // if (digitalRead(YETIHEAD2) == HIGH) {  // Button pressed (since it's pulled up by default)
    //     bitTwiddler |= (1UL << 19);
    //     Serial.println("Dial2 On");
    // } else {
    //     bitTwiddler &= ~(1UL << 19);
    //     Serial.println("Dial2 Off");
    // }
    // if (digitalRead(YETIHEAD3) == HIGH) {  // Button pressed (since it's pulled up by default)
    //     bitTwiddler |= (1UL << 20);
    //     Serial.println("Dial3 On");
    // } else {
    //     bitTwiddler &= ~(1UL << 20);
    //     Serial.println("Dial3 Off");
    // }
    if (digitalRead(YETIHEAD4) == HIGH) {  // Button pressed (since it's pulled up by default)
        bitTwiddler |= (1UL << 18);
        Serial.println("Dial4 On");
    } else {
        bitTwiddler &= ~(1UL << 18);
        Serial.println("Dial4 Off");
    }
    if (digitalRead(YETIHEAD5) == HIGH) {  // Button pressed (since it's pulled up by default)
        bitTwiddler |= (1UL << 19);
        Serial.println("Dial5 On");
    } else {
        bitTwiddler &= ~(1UL << 19);
        Serial.println("Dial5 Off");
    }
    if (digitalRead(YETIHEAD6) == HIGH) {  // Button pressed (since it's pulled up by default)
        bitTwiddler |= (1UL << 20);
        Serial.println("Dial6 On");
    } else {
        bitTwiddler &= ~(1UL << 20);
        Serial.println("Dial6 Off");
    }
    if (digitalRead(YETIHEAD7) == HIGH) {  // Button pressed (since it's pulled up by default)
        bitTwiddler |= (1UL << 21);
        Serial.println("Dial7 On");
    } else {
        bitTwiddler &= ~(1UL << 21);
        Serial.println("Dial7 Off");
    }
    if (digitalRead(YETIHEAD8) == HIGH) {  // Button pressed (since it's pulled up by default)
        bitTwiddler |= (1UL << 22);
        Serial.println("Dial8 On");
    } else {
        bitTwiddler &= ~(1UL << 22);
        Serial.println("Dial8 Off");
    }
    Serial.println("\r\n");
    joystick.buttons(bitTwiddler);
}
