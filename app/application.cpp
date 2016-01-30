#include <user_config.h>
#include <SmingCore/SmingCore.h>

#define LED_PIN 16

Timer procTimer;
bool state = true;

void blink()
{
	digitalWrite(LED_PIN, state);
	state = !state;
}

void init()
{
    WifiStation.enable(false);
    WifiAccessPoint.enable(false);
	pinMode(LED_PIN, OUTPUT);
	procTimer.initializeMs(1000, blink).start();
}
