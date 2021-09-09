
static uint16_t key_timer;              // timer to track the last keyboard activity
static void refresh_rgb(void);          // refreshes the activity timer and RGB, invoke whenever activity happens
static void check_rgb_timeout(void);    // checks if enough time has passed for RGB to timeout
bool is_rgb_timeout = false;            // store if RGB has timed out or not in a boolean


void refresh_rgb() {
  key_timer = timer_read();             // store time of last refresh
  if (is_rgb_timeout) {                 // only do something if rgb has timed out
    is_rgb_timeout = false;
    rgblight_wakeup();
  }
}

void check_rgb_timeout() {
  if (!is_rgb_timeout && timer_elapsed(key_timer) > RGBLIGHT_TIMEOUT) {
    rgblight_suspend();
    is_rgb_timeout = true;
  }
}