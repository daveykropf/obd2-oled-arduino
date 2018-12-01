# obd2-oled-arduino (WIP)
Made a simple OBD 2 reader for my Volkswagen Golf MK6 to show realtime data on a 64x32 OLED display.

Should probably also work on different VAG (Volkswagen, Audi, Seat and Skoda) models, but never tested it.

### Libraries
I used the following libraries and made some changes to make the 64x32 OLED display and CAN-Bus shield work properly.

- Adafruit_GFX_Library (for OLED display)
- Adafruit_SSD1306 (for OLED display)
- SparkFun_CAN-Bus_Arduino_Library (for CAN-Bus shield)

### Parts
- TODO

### Documentation / Resources

- [Online image to byte arrays converter](http://javl.github.io/image2cpp/)
- [VDO NTC Fluide Temperature Probe, Steinhart Hart Coefficients?](https://forum.arduino.cc/index.php?topic=211816.0)
- [V3 MicroSquirt® - QuickStart Guide](http://www.useasydocs.com/theory/ntc.htm)
