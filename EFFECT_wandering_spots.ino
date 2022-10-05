void wandering_spots_setup(byte effectID) {
  Serial.println(effectID);
}
void wandering_spots_loop() {
  fadeToBlackBy( leds, NUM_LEDS, 10);
  uint8_t dothue = 0;
  for ( int i = 0; i < 3; i++) {
    leds[beatsin16( i + 1, 0, NUM_LEDS - 1 )] |= CHSV(dothue, 200, 255);
    dothue += 85;
  }
}
