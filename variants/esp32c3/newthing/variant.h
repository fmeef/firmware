// #define SDA 8
// #define SCL 9
// #define I2C_SDA SDA
// #define I2C_SCL SCL

// #define USE_EINK

// #define BUTTON_PIN 13 // BOOT button

// #define USE_RF95
// #define LORA_SCK 5
// #define LORA_MISO 2
// #define LORA_MOSI 1
// #define LORA_CS 3

// #define LORA_DIO0 19
// #define LORA_DIO1 4 // not used on pure RF95?
// #define LORA_RESET 9

#define USE_EINK
#define PIN_EINK_EN -1
#define PIN_EINK_MOSI 1
#define PIN_EINK_SCLK 3
#define PIN_EINK_CS 0
#define PIN_EINK_DC 19
#define PIN_EINK_RES 8
#define PIN_EINK_BUSY 18

#define USE_SX1262 // E22-900M30S uses SX1262
// #define USE_SX1268 // E22-400M30S uses SX1268

#define SX126X_CS 7    // EBYTE module's NSS pin
#define SX126X_SCK 3    // EBYTE module's SCK pin
#define SX126X_MOSI 1  // EBYTE module's MOSI pin
#define SX126X_MISO 2  // EBYTE module's MISO pin
#define SX126X_RESET 9 // EBYTE module's NRST pin
#define SX126X_BUSY 5  // EBYTE module's BUSY pin
#define SX126X_DIO1 6  // EBYTE module's DIO1 pin

#define SX126X_TXEN 10 // Schematic connects EBYTE module's TXEN pin to MCU
#define SX126X_RXEN 10 // Schematic connects EBYTE module's RXEN pin to MCU
#define SX126X_DIO2_AS_RF_SWITCH
// #define SX126X_DIO3_TCXO_VOLTAGE 1.8

#define LORA_CS SX126X_CS       // Compatibility with variant file configuration structure
#define LORA_SCK SX126X_SCK     // Compatibility with variant file configuration structure
#define LORA_MOSI SX126X_MOSI   // Compatibility with variant file configuration structure
#define LORA_MISO SX126X_MISO   // Compatibility with variant file configuration structure
#define LORA_DIO1 SX126X_DIO1   // Compatibility with variant file configuration structure
#define LORA_TXEN SX126X_TXEN   // Compatibility with variant file configuration structure
#define LORA_RXEN SX126X_RXEN   // Compatibility with variant file configuration structure
#define LORA_RESET SX126X_RESET // Compatibility with variant file configuration structure
#define LORA_DIO2 SX126X_BUSY   // Compatibility with variant file configuration structur
#define LORA_DIO3  


#define HAS_GPS 0
#undef GPS_RX_PIN
#undef GPS_TX_PIN
