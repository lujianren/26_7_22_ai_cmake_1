/* Includes ------------------------------------------------------------------*/
#include "fun.h"

/* Functions -----------------------------------------------------------------*/

/**
  * @brief  Toggles the LED on PC13 and waits for the specified time.
  * @param  time_ms: Delay time in milliseconds between each toggle.
  * @retval None
  */
void led_flash(uint32_t time_ms)
{
  HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
  HAL_Delay(time_ms);
}
