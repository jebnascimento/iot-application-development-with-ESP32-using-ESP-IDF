#if !defined(MAIN_RGB_LED_H_)
#define MAIN_RGB_LED_H_

// RGB LED GPIOs
#define RGB_LED_RED_GPIO    21
#define RGB_LED_GREEN_GPIO  22
#define RGB_LED_BLUE_GPIO   23

// RGB colors
#define WIFI_APP_STARTED_PINK_FAMINGO     "255, 102, 255"
#define HTTP_SERVER_STARTED_ELECTRIC_LIME "204, 255, 51"
#define WIFI_CONNECTED_SPRING_GREEN       "0, 255, 153"


// RGB LED color mix channels
#define RGB_LED_CHANNEL_NUM 3

// RGB LED color mix channels
typedef struct
{
  int channel;
  int gpio;
  int mode;
  int timer_index;
} ledc_info_t;

/*
* Color to indicate WiFi application has started.
*/
void rgb_led_wifi_app_started(void);

/*
* Color to indicate HTTP server has started.
*/
void rgb_led_http_server_started(void);

/*
* Color to indicate that the ESP32 is connected to an access point.
*/
void rgb_led_wifi_connected(void);

#endif // MAIN_RGB_LED_H_
