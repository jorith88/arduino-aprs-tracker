// Symbols
#define SYMBOL_BIKE 'b'
#define SYMBOL_CAR '>'
#define SYMBOL_RUNNER '['

// APRS settings
char APRS_CALLSIGN[] = "MYCALL";
const int APRS_SSID = 7;
char APRS_SYMBOL = SYMBOL_BIKE;

// SmartBeaconing(tm) Setting  http://www.hamhud.net/hh2/smartbeacon.html implementation by LU5EFN
#define LOW_SPEED 5 // [km/h]
#define HIGH_SPEED 90

#define SLOW_RATE 300 // [seg]
#define FAST_BEACON_RATE  30

#define TURN_MIN  30
#define TURN_SLOPE  240
#define MIN_TURN_TIME 20