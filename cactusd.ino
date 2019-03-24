#include "libraries/Common.h"
#include "libraries/CactusdBLE.h"
#include <BLEDevice.h>

#ifdef ARDUINO_ARCH_ESP32
#include "esp32-hal-log.h"
#endif

#define CHEAT_BUZZ_LENGTH 2000

int CHEAT_START_TIME = 0;
int CALIBRATION_VALUE = 0;

void setup() {
  Serial.begin(115200);

  if ( 0 != calibrate(&CALIBRATION_VALUE) ) {
    Serial.println("Calibration failed");
  }

  // Initialize Bluetooth connection
  BLEConnection conn;
Serial.println(conn.getStatus());
}

void loop() {
#ifdef CLIENT

#endif
  delay(1000);
}
