// #define SDA 22
// #define SCL 23
// #define I2C_SDA SDA
// #define I2C_SCL SCL
#undef HAS_WIRE
#undef I2C_SDA
#undef I2C_SCL

// #define USE_EINK

// #define BUTTON_PIN 13 // BOOT button
#define LED_PIN 18 // RGB LED

#define USE_RF95
#define LORA_SCK 10
#define LORA_MISO 9
#define LORA_MOSI 7
#define LORA_CS 1

#define LORA_DIO0 2
#define LORA_DIO1 6
#define LORA_RESET 8

#undef USE_SX1262

#define HAS_GPS 0
#undef GPS_RX_PIN
#undef GPS_TX_PIN