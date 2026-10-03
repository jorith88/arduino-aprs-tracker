// Symbols
#define SYMBOL_BIKE 'b'
#define SYMBOL_CAR '>'
#define SYMBOL_RUNNER '['
#define SYMBOL_LARO 'j'
#define SYMBOL_SCOUTING ','

// APRS settings
char APRS_CALLSIGN[] = "PA3JH";
const int APRS_SSID = 7;
char APRS_SYMBOL = SYMBOL_RUNNER;
char APRS_COMMENT[] = "PA3WWE/J Scouting Wielewaal";

// SmartBeaconing(tm) Setting  http://www.hamhud.net/hh2/smartbeacon.html implementation by LU5EFN
#define LOW_SPEED 999 // [km/h]
#define HIGH_SPEED 9999

#define SLOW_RATE 60 // [seg]
#define FAST_BEACON_RATE  60

#define TURN_MIN  30
#define TURN_SLOPE  240
#define MIN_TURN_TIME 20
#define TURN_MIN_SPEED 5 // [km/h] below this no turn beacons

// Debug settings
#define SERIAL_LOG_OUTPUT false