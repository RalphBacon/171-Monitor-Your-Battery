# Monitor Your (Arduino's) Battery
Don't let a flat battery ruin your data gathering! This simple trick shows you how to detect a failing battery.

### See https://www.youtube.com/ralphbacon video #171
#### Direct link to video: https://youtu.be/AAwp1O4s4lc

#### PCBWay Assembly Service only $30 with Quick Turnaround Time https://www.pcbway.com
```
Why Buy Your Printed Circuit Boards From PCBWay?  
  * Prototype Fab with 24 hours Express  
  * Team supported with over 50 professionals & technical  
  * 99% on-Time Shipping with great support from DHL  
  * Great quality approved by customers all over the world  
  * Trusted Experience  
  * 24 Hour Non-stop Tech Support and Production  
  * Low Minimums  
  * Factory Outlet PCBs with most competitive advantages  
  * Chief PCB Manufacturer Located in China 
```
So your **battery-powered project** runs on a buck-boost (or other DC to DC converter) and you need to monitor the voltage of the LiPO rather than the VCC supplied to the Arduino (as shown in video #160).

A simple configuration at the Arduino and a simple potential divider and it's job done! Then you can monintor the voltage of your LiPO (or car battery etc) and **get early warning** when it is on the slippery slope to complete discharge.

Remember, too, that you don't want to run a LiPO (eg an 18650) any lower than 3.0v or you will **permanently damage** the device and it may never fully recover. If your battery has protection circuitry included (18650 batteries WITH protection are slightly longer than unprotected ones) it will automatically shut it down at 3.0 volts anyway.

The sketch is so simple I'm almost embarrassed to upload it - BUT there is a **critical line** of code that is essential this all works without destroying your Arduino's AREF pin so do check it out before connecting anything.

### List of all my videos
(Special thanks to Michael Kurt Vogel for compiling this)  
http://bit.ly/YouTubeVideoList-RalphBacon

### LINKS to products used in the video  

CJMCU-4599 Si4599 N and P Channel 40V (D -S) **MOSFET Expansion Board** Module about $4 for 3 pieces:  
https://www.banggood.com/3pcs-CJMCU-4599-Si4599-N-and-P-Channel-40V-D-S-MOSFET-Expansion-Board-Module-p-1363266.html?p=FQ040729393382015118&utm_campaign=25129675&utm_content=3897

DC-DC **Boost Buck Adjustable** Step Up/Step Down Automatic Converter XL6009 Module about $2.67 (or $5 from UK warehouse):  
https://www.banggood.com/DC-DC-Boost-Buck-Adjustable-Step-Up-Step-Down-Automatic-Converter-XL6009-Module-p-1087346.html?p=FQ040729393382015118&utm_campaign=25129675&utm_content=3897

DC-DC 2.5V-15V to 3.3V **Fixed Output** Automatic Buck Boost Step Up Step Down $1.67 each:  
https://www.banggood.com/DC-DC-2_5V-15V-to-3_3V-Fixed-Output-Automatic-Buck-Boost-Step-Up-Step-Down-Power-Supply-Module-p-1355827.html?p=FQ040729393382015118&utm_campaign=25129675&utm_content=3897

0.36 Inch **Digital Voltmeter** DC 0V-100V Three Wires 3 Digit Battery Voltage Panel Meter about $2 each or $1 each in a pack fo 10:  
https://www.banggood.com/805-Micro-0_36-Inch-Digital-Voltmeter-DC-0V-100V-Three-Wires-3-Digit-Battery-Voltage-Panel-Meter-LED-Display-for-RC-Airplane-Car-Boat-Motorcycle-p-1557653.html?p=FQ040729393382015118&utm_campaign=25129675&utm_content=3897

Wemos **18650 UPS/PSU** as used in the video, about $7 for THREE pieces ($3.68 if bought indivually):  
https://www.banggood.com/3Pcs-Wemos-ESP32-ESP32S-18650-Battery-Charge-Shield-V3-Micro-USB-Type-A-USB-0_5A-Test-Charging-Protection-Board-For-Raspberry-Pi-Arduino-p-1448427.html?p=FQ040729393382015118&utm_campaign=25129675&utm_content=3897

Interactive cheat sheet for calculating **potential (resistor) divider** values:  
http://www.ohmslawcalculator.com/voltage-divider-calculator

### My blog article on what happened to my eye (again):  
https://ralphbacon.blog/?p=340

### Popular Links  

**YIHUA 938D Portable Hot Tweezers** Mini Soldering Station 110V/220V    
https://bit.ly/2M8R0bj  

DANIU Heavy Duty **Soldering Solder Iron Tip Cleaner** Steel Wire $3.33 from China, higher price local warehouse  
http://bit.ly/SolderingIronCLeaner

SMD Components Solder **Practice Module Kit** - all components incl QFP chips  
http://bit.ly/SMDPracticeBoard

If you like this video please give it a thumbs up, share it and if you're not already subscribed please consider doing so and joining me on my Arduinite journey  

My channel and blog are here:  
\------------------------------------------------------------------  
https://www.youtube.com/RalphBacon  
https://ralphbacon.blog  
\------------------------------------------------------------------
