#ifndef _RGB_LED_H_
#define _RGB_LED_H_

#ifdef __cplusplus
extern "C" {
#endif

#define RED_LED_PIN    (6)
#define GREEN_LED_PIN  (9)
#define BLUE_LED_PIN   (3)

typedef struct {
  unsigned char red;
  unsigned char green;
  unsigned char blue;
} led_state_t; 

void initRGB(void);
void setRGB(unsigned char red, unsigned char green, unsigned char blue);

#ifdef __cplusplus
}
#endif

#endif
