EESchema Schematic File Version 2
LIBS:tinkerforge
LIBS:power
LIBS:device
LIBS:switches
LIBS:relays
LIBS:motors
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L TLC272 U?
U 1 1 5A93D6B5
P 900 7250
F 0 "U?" H 1000 7050 60  0000 C CNN
F 1 "TLC272" H 800 7250 60  0000 C CNN
F 2 "kicad-libraries:TSSOP8" H 900 7250 60  0001 C CNN
F 3 "" H 900 7250 60  0000 C CNN
	1    900  7250
	1    0    0    -1  
$EndComp
$Comp
L TLC272 U?
U 2 1 5A93D740
P 2300 1400
F 0 "U?" H 2300 1150 60  0000 C CNN
F 1 "TLC272" H 2200 1400 60  0000 C CNN
F 2 "kicad-libraries:TSSOP8" H 2300 1400 60  0001 C CNN
F 3 "" H 2300 1400 60  0000 C CNN
	2    2300 1400
	1    0    0    -1  
$EndComp
$Comp
L TLC272 U?
U 3 1 5A93D7C1
P 3600 1550
F 0 "U?" H 3600 1300 60  0000 C CNN
F 1 "TLC272" H 3500 1550 60  0000 C CNN
F 2 "kicad-libraries:TSSOP8" H 3600 1550 60  0001 C CNN
F 3 "" H 3600 1550 60  0000 C CNN
	3    3600 1550
	1    0    0    -1  
$EndComp
$Comp
L C C?
U 1 1 5A93DAD2
P 1250 1250
F 0 "C?" V 1300 1050 50  0000 L CNN
F 1 "100nF" V 1100 1200 50  0000 L CNN
F 2 "kicad-libraries:C0603F" H 1250 1250 60  0001 C CNN
F 3 "" H 1250 1250 60  0000 C CNN
	1    1250 1250
	0    1    1    0   
$EndComp
$Comp
L R R?
U 1 1 5A93DBD0
P 1500 950
F 0 "R?" H 1600 1050 50  0000 C CNN
F 1 "100k" V 1500 950 50  0000 C CNN
F 2 "kicad-libraries:R0603F" H 1500 950 60  0001 C CNN
F 3 "" H 1500 950 60  0000 C CNN
	1    1500 950 
	1    0    0    -1  
$EndComp
$Comp
L R R?
U 1 1 5A93DEAE
P 2900 950
F 0 "R?" H 3000 1050 50  0000 C CNN
F 1 "100k" V 2900 950 50  0000 C CNN
F 2 "kicad-libraries:R0603F" H 2900 950 60  0001 C CNN
F 3 "" H 2900 950 60  0000 C CNN
	1    2900 950 
	1    0    0    -1  
$EndComp
$Comp
L R R?
U 1 1 5A93DF41
P 1000 1550
F 0 "R?" H 1100 1650 50  0000 C CNN
F 1 "20k" V 1000 1550 50  0000 C CNN
F 2 "kicad-libraries:R0603F" H 1000 1550 60  0001 C CNN
F 3 "" H 1000 1550 60  0000 C CNN
	1    1000 1550
	1    0    0    -1  
$EndComp
$Comp
L R R?
U 1 1 5A93DF75
P 1500 1550
F 0 "R?" V 1400 1450 50  0000 C CNN
F 1 "100k" V 1500 1550 50  0000 C CNN
F 2 "kicad-libraries:R0603F" H 1500 1550 60  0001 C CNN
F 3 "" H 1500 1550 60  0000 C CNN
	1    1500 1550
	1    0    0    -1  
$EndComp
$Comp
L R R?
U 1 1 5A93DFA8
P 2150 1800
F 0 "R?" V 2230 1800 50  0000 C CNN
F 1 "R" V 2150 1800 50  0000 C CNN
F 2 "kicad-libraries:R0603F" H 2150 1800 60  0001 C CNN
F 3 "" H 2150 1800 60  0000 C CNN
	1    2150 1800
	0    1    1    0   
$EndComp
$Comp
L R R?
U 1 1 5A93DFDE
P 1850 2100
F 0 "R?" H 1950 2200 50  0000 C CNN
F 1 "10" V 1850 2100 50  0000 C CNN
F 2 "kicad-libraries:R0603F" H 1850 2100 60  0001 C CNN
F 3 "" H 1850 2100 60  0000 C CNN
	1    1850 2100
	1    0    0    -1  
$EndComp
$Comp
L R R?
U 1 1 5A93E017
P 2900 1950
F 0 "R?" H 2750 2000 50  0000 C CNN
F 1 "120k" V 2900 1950 50  0000 C CNN
F 2 "kicad-libraries:R0603F" H 2900 1950 60  0001 C CNN
F 3 "" H 2900 1950 60  0000 C CNN
	1    2900 1950
	1    0    0    -1  
$EndComp
$Comp
L R R?
U 1 1 5A93E053
P 4150 1850
F 0 "R?" H 4250 1950 50  0000 C CNN
F 1 "20k" V 4150 1850 50  0000 C CNN
F 2 "kicad-libraries:R0603F" H 4150 1850 60  0001 C CNN
F 3 "" H 4150 1850 60  0000 C CNN
	1    4150 1850
	1    0    0    -1  
$EndComp
$Comp
L C C?
U 1 1 5A93E11D
P 1350 7250
F 0 "C?" H 1400 7350 50  0000 L CNN
F 1 "100nF" H 1400 7150 50  0000 L CNN
F 2 "kicad-libraries:C0603F" H 1350 7250 60  0001 C CNN
F 3 "" H 1350 7250 60  0000 C CNN
	1    1350 7250
	1    0    0    -1  
$EndComp
$Comp
L C C?
U 1 1 5A93E162
P 3100 1900
F 0 "C?" H 3100 2000 50  0000 L CNN
F 1 "100nF" H 3100 1800 50  0000 L CNN
F 2 "kicad-libraries:C0603F" H 3100 1900 60  0001 C CNN
F 3 "" H 3100 1900 60  0000 C CNN
	1    3100 1900
	1    0    0    -1  
$EndComp
$Comp
L C C?
U 1 1 5A93E1A6
P 1850 2600
F 0 "C?" H 1900 2700 50  0000 L CNN
F 1 "4.7nF" H 1900 2500 50  0000 L CNN
F 2 "kicad-libraries:C0603F" H 1850 2600 60  0001 C CNN
F 3 "" H 1850 2600 60  0000 C CNN
	1    1850 2600
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR?
U 1 1 5A93E1E4
P 1100 700
F 0 "#PWR?" H 1100 550 50  0001 C CNN
F 1 "+3.3V" H 1100 840 50  0000 C CNN
F 2 "" H 1100 700 50  0001 C CNN
F 3 "" H 1100 700 50  0001 C CNN
	1    1100 700 
	1    0    0    -1  
$EndComp
Text GLabel 950  1250 0    60   Input ~ 0
Sensor+
Text GLabel 950  2850 0    60   Input ~ 0
Sensor-
$Comp
L ZENER D?
U 1 1 5A93E8EF
P 1650 1500
F 0 "D?" H 1500 1600 50  0000 C CNN
F 1 "ZENER" H 1700 1600 50  0000 C CNN
F 2 "kicad-libraries:SOD-123" H 1650 1500 50  0001 C CNN
F 3 "" H 1650 1500 50  0000 C CNN
	1    1650 1500
	0    1    1    0   
$EndComp
Text GLabel 2750 1000 0    60   Input ~ 0
MP-OPV-ZK
Text GLabel 4100 1000 0    60   Input ~ 0
MP-OPV-Aus
Wire Wire Line
	1100 700  2900 700 
Connection ~ 1500 700 
Wire Wire Line
	1450 1250 1850 1250
Wire Wire Line
	1500 1200 1500 1300
Connection ~ 1500 1250
Wire Wire Line
	1650 1250 1650 1300
Connection ~ 1650 1250
Wire Wire Line
	950  1250 1050 1250
Wire Wire Line
	1000 1250 1000 1300
Connection ~ 1000 1250
Wire Wire Line
	1000 1800 1000 2850
Wire Wire Line
	950  2850 4150 2850
Wire Wire Line
	1500 2850 1500 1800
Connection ~ 1000 2850
Wire Wire Line
	1850 2850 1850 2800
Connection ~ 1500 2850
Wire Wire Line
	1850 2400 1850 2350
Wire Wire Line
	1850 1500 1850 1850
Wire Wire Line
	1850 1800 1900 1800
Connection ~ 1850 1800
Wire Wire Line
	2800 1800 2400 1800
Wire Wire Line
	2800 1000 2800 1800
Wire Wire Line
	2750 1400 3150 1400
Connection ~ 2800 1400
Wire Wire Line
	1650 1700 1650 2850
Connection ~ 1650 2850
Wire Wire Line
	2900 1200 2900 1700
Wire Wire Line
	2900 1650 3150 1650
Connection ~ 2900 1650
Wire Wire Line
	3100 1700 3100 1650
Connection ~ 3100 1650
Wire Wire Line
	2900 2850 2900 2200
Connection ~ 1850 2850
Wire Wire Line
	3100 2850 3100 2100
Connection ~ 2900 2850
Wire Wire Line
	4150 2850 4150 2100
Connection ~ 3100 2850
Wire Wire Line
	4050 1550 4150 1550
Wire Wire Line
	4150 1000 4150 1600
Connection ~ 4150 1550
$Comp
L +3.3V #PWR?
U 1 1 5A93FC06
P 850 6750
F 0 "#PWR?" H 850 6600 50  0001 C CNN
F 1 "+3.3V" H 850 6890 50  0000 C CNN
F 2 "" H 850 6750 50  0001 C CNN
F 3 "" H 850 6750 50  0001 C CNN
	1    850  6750
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 5A93FC3A
P 850 7700
F 0 "#PWR?" H 850 7700 30  0001 C CNN
F 1 "GND" H 850 7630 30  0001 C CNN
F 2 "" H 850 7700 60  0000 C CNN
F 3 "" H 850 7700 60  0000 C CNN
	1    850  7700
	1    0    0    -1  
$EndComp
Wire Wire Line
	850  6750 850  6850
Wire Wire Line
	850  6800 1350 6800
Wire Wire Line
	1350 6800 1350 7050
Connection ~ 850  6800
Wire Wire Line
	1350 7450 1350 7650
Wire Wire Line
	1350 7650 850  7650
Wire Wire Line
	850  7600 850  7700
Connection ~ 850  7650
$Comp
L R R?
U 1 1 5A940181
P 1550 3650
F 0 "R?" H 1650 3750 50  0000 C CNN
F 1 "1M" V 1550 3650 50  0000 C CNN
F 2 "kicad-libraries:R0603F" H 1550 3650 60  0001 C CNN
F 3 "" H 1550 3650 60  0000 C CNN
	1    1550 3650
	1    0    0    -1  
$EndComp
$Comp
L R R?
U 1 1 5A9401D1
P 2900 3750
F 0 "R?" V 3000 3650 50  0000 C CNN
F 1 "R" V 2900 3750 50  0000 C CNN
F 2 "kicad-libraries:R0603F" H 2900 3750 60  0001 C CNN
F 3 "" H 2900 3750 60  0000 C CNN
	1    2900 3750
	0    1    1    0   
$EndComp
$Comp
L R R?
U 1 1 5A940224
P 2600 4350
F 0 "R?" H 2700 4450 50  0000 C CNN
F 1 "13.3k" V 2600 4350 50  0000 C CNN
F 2 "kicad-libraries:R0603F" H 2600 4350 60  0001 C CNN
F 3 "" H 2600 4350 60  0000 C CNN
	1    2600 4350
	1    0    0    -1  
$EndComp
$Comp
L INDUCTOR L?
U 1 1 5A940430
P 1000 3300
F 0 "L?" H 800 3450 60  0000 C CNN
F 1 "FB" H 1150 3450 60  0000 C CNN
F 2 "kicad-libraries:C0603F" H 1000 3300 60  0001 C CNN
F 3 "" H 1000 3300 60  0001 C CNN
	1    1000 3300
	1    0    0    -1  
$EndComp
$Comp
L INDUCTOR L?
U 1 1 5A9404E9
P 3750 3300
F 0 "L?" H 3550 3450 60  0000 C CNN
F 1 "FB" H 3900 3450 60  0000 C CNN
F 2 "kicad-libraries:C0603F" H 3750 3300 60  0001 C CNN
F 3 "" H 3750 3300 60  0001 C CNN
	1    3750 3300
	1    0    0    -1  
$EndComp
$Comp
L INDUCTOR L?
U 1 1 5A940598
P 2150 3300
F 0 "L?" H 1950 3450 60  0000 C CNN
F 1 "10uH" H 2300 3450 60  0000 C CNN
F 2 "kicad-libraries:NR3030" H 2150 3300 60  0001 C CNN
F 3 "" H 2150 3300 60  0001 C CNN
	1    2150 3300
	1    0    0    -1  
$EndComp
$Comp
L C C?
U 1 1 5A940857
P 2900 4000
F 0 "C?" V 2950 3800 50  0000 L CNN
F 1 "270pF" V 2950 4050 50  0000 L CNN
F 2 "kicad-libraries:C0603F" H 2900 4000 60  0001 C CNN
F 3 "" H 2900 4000 60  0000 C CNN
	1    2900 4000
	0    1    1    0   
$EndComp
$Comp
L C C?
U 1 1 5A940967
P 1350 3650
F 0 "C?" H 1150 3750 50  0000 L CNN
F 1 "4.7uF" H 1100 3550 50  0000 L CNN
F 2 "kicad-libraries:C0805" H 1350 3650 60  0001 C CNN
F 3 "" H 1350 3650 60  0000 C CNN
	1    1350 3650
	1    0    0    -1  
$EndComp
$Comp
L C C?
U 1 1 5A940D13
P 650 3650
F 0 "C?" H 700 3750 50  0000 L CNN
F 1 "4.7uF" H 700 3550 50  0000 L CNN
F 2 "kicad-libraries:C0805" H 650 3650 60  0001 C CNN
F 3 "" H 650 3650 60  0000 C CNN
	1    650  3650
	1    0    0    -1  
$EndComp
$Comp
L C C?
U 1 1 5A940DC0
P 3400 3650
F 0 "C?" H 3450 3750 50  0000 L CNN
F 1 "4.7uF" H 3450 3550 50  0000 L CNN
F 2 "kicad-libraries:C0805" H 3400 3650 60  0001 C CNN
F 3 "" H 3400 3650 60  0000 C CNN
	1    3400 3650
	1    0    0    -1  
$EndComp
$Comp
L C C?
U 1 1 5A940E28
P 4100 3650
F 0 "C?" H 3900 3750 50  0000 L CNN
F 1 "4.7uF" H 3850 3550 50  0000 L CNN
F 2 "kicad-libraries:C0805" H 4100 3650 60  0001 C CNN
F 3 "" H 4100 3650 60  0000 C CNN
	1    4100 3650
	1    0    0    -1  
$EndComp
$Comp
L +5V #PWR?
U 1 1 5A941170
P 650 3200
F 0 "#PWR?" H 650 3050 50  0001 C CNN
F 1 "+5V" H 650 3340 50  0000 C CNN
F 2 "" H 650 3200 50  0001 C CNN
F 3 "" H 650 3200 50  0001 C CNN
	1    650  3200
	1    0    0    -1  
$EndComp
$Comp
L LMR62014X U?
U 1 1 5A9415C4
P 2150 4000
F 0 "U?" H 1850 3650 60  0000 C CNN
F 1 "LMR62014X" H 1850 3400 60  0000 C CNN
F 2 "kicad-libraries:SOT23-5" H 2150 4000 60  0001 C CNN
F 3 "" H 2150 4000 60  0000 C CNN
	1    2150 4000
	1    0    0    -1  
$EndComp
$Comp
L DIODESCH D?
U 1 1 5A941F25
P 2800 3300
F 0 "D?" H 2800 3400 40  0000 C CNN
F 1 "DIODESCH" H 2800 3200 40  0000 C CNN
F 2 "" H 2800 3300 60  0000 C CNN
F 3 "" H 2800 3300 60  0000 C CNN
	1    2800 3300
	1    0    0    -1  
$EndComp
Wire Wire Line
	650  3200 650  3450
Wire Wire Line
	650  3300 700  3300
Connection ~ 650  3300
Wire Wire Line
	1300 3300 1850 3300
Wire Wire Line
	1550 3400 1550 3300
Connection ~ 1550 3300
Wire Wire Line
	1350 3450 1350 3300
Connection ~ 1350 3300
Wire Wire Line
	1750 4000 1550 4000
Wire Wire Line
	1550 3900 1550 4150
Wire Wire Line
	1950 3650 1950 3450
Wire Wire Line
	1950 3450 1750 3450
Wire Wire Line
	1750 3450 1750 3300
Connection ~ 1750 3300
Wire Wire Line
	2350 3650 2350 3450
Wire Wire Line
	2350 3450 2500 3450
Wire Wire Line
	2500 3450 2500 3300
Wire Wire Line
	2450 3300 2600 3300
Connection ~ 2500 3300
Wire Wire Line
	2550 4000 2700 4000
Wire Wire Line
	2650 3750 2600 3750
Wire Wire Line
	2600 3750 2600 4100
Connection ~ 2600 4000
Wire Wire Line
	3150 3750 3200 3750
Wire Wire Line
	3200 3300 3200 4000
Wire Wire Line
	3000 3300 3450 3300
Connection ~ 3200 3300
Wire Wire Line
	3200 4000 3100 4000
Connection ~ 3200 3750
Wire Wire Line
	3400 3450 3400 3300
Connection ~ 3400 3300
Wire Wire Line
	4050 3300 4200 3300
Wire Wire Line
	4100 3300 4100 3450
Wire Wire Line
	650  3850 650  4650
Wire Wire Line
	650  4650 4100 4650
Wire Wire Line
	3400 4650 3400 3850
Wire Wire Line
	4100 4650 4100 3850
Connection ~ 3400 4650
Wire Wire Line
	2600 4600 2600 4650
Connection ~ 2600 4650
Wire Wire Line
	2150 4350 2150 4700
Connection ~ 2150 4650
Wire Wire Line
	1350 3850 1350 4650
Connection ~ 1350 4650
$Comp
L GND #PWR?
U 1 1 5A942D2D
P 2150 4700
F 0 "#PWR?" H 2150 4700 30  0001 C CNN
F 1 "GND" H 2150 4630 30  0001 C CNN
F 2 "" H 2150 4700 60  0000 C CNN
F 3 "" H 2150 4700 60  0000 C CNN
	1    2150 4700
	1    0    0    -1  
$EndComp
Text GLabel 4200 3300 2    60   Input ~ 0
+UA
Text GLabel 1550 4150 3    60   Input ~ 0
SHDN
Connection ~ 4100 3300
Connection ~ 1550 4000
$Comp
L XMC1XXX48 U?
U 1 1 5A94578A
P 3800 6700
F 0 "U?" H 3650 7650 60  0000 C CNN
F 1 "XMC1XXX48" H 3800 5700 60  0000 C CNN
F 2 "" H 3950 6950 60  0000 C CNN
F 3 "" H 3950 6950 60  0000 C CNN
	1    3800 6700
	1    0    0    -1  
$EndComp
$Comp
L XMC1XXX48 U?
U 2 1 5A94584D
P 10500 4950
F 0 "U?" H 10350 5900 60  0000 C CNN
F 1 "XMC1XXX48" H 10500 3950 60  0000 C CNN
F 2 "" H 10650 5200 60  0000 C CNN
F 3 "" H 10650 5200 60  0000 C CNN
	2    10500 4950
	1    0    0    -1  
$EndComp
$Comp
L XMC1XXX48 U?
U 3 1 5A9458EA
P 6700 6850
F 0 "U?" H 6550 7350 60  0000 C CNN
F 1 "XMC1XXX48" H 6700 6300 60  0000 C CNN
F 2 "kicad-libraries:QFN48-EP2" H 7100 7250 60  0000 C CNN
F 3 "" H 6850 7100 60  0000 C CNN
	3    6700 6850
	1    0    0    -1  
$EndComp
$Comp
L XMC1XXX48 U?
U 4 1 5A94596F
P 10650 1250
F 0 "U?" H 10500 1900 60  0000 C CNN
F 1 "XMC1XXX48" H 10650 250 60  0000 C CNN
F 2 "" H 10800 1500 60  0000 C CNN
F 3 "" H 10800 1500 60  0000 C CNN
	4    10650 1250
	1    0    0    -1  
$EndComp
$Comp
L XMC1XXX48 U?
U 5 1 5A945B24
P 2500 6150
F 0 "U?" H 2350 6600 60  0000 C CNN
F 1 "XMC1XXX48" H 2500 5550 60  0000 C CNN
F 2 "" H 2650 6400 60  0000 C CNN
F 3 "" H 2650 6400 60  0000 C CNN
	5    2500 6150
	1    0    0    -1  
$EndComp
$Comp
L DRILL U?
U 1 1 5A94639F
P 11000 6400
F 0 "U?" H 11050 6450 60  0001 C CNN
F 1 "DRILL" H 11000 6400 60  0000 C CNN
F 2 "kicad-libraries:DRILL_NP" H 11000 6400 60  0001 C CNN
F 3 "" H 11000 6400 60  0000 C CNN
	1    11000 6400
	1    0    0    -1  
$EndComp
$Comp
L DRILL U?
U 1 1 5A9464FB
P 10650 6400
F 0 "U?" H 10700 6450 60  0001 C CNN
F 1 "DRILL" H 10650 6400 60  0000 C CNN
F 2 "kicad-libraries:DRILL_NP" H 10650 6400 60  0001 C CNN
F 3 "" H 10650 6400 60  0000 C CNN
	1    10650 6400
	1    0    0    -1  
$EndComp
$Comp
L CON-SENSOR2 P?
U 1 1 5A94667E
P 4550 6800
F 0 "P?" H 4400 7200 60  0000 C CNN
F 1 "CON-SENSOR2" V 4700 6800 60  0000 C CNN
F 2 "kicad-libraries:CON-SENSOR2" H 4650 6650 60  0001 C CNN
F 3 "" H 4650 6650 60  0000 C CNN
	1    4550 6800
	-1   0    0    -1  
$EndComp
$Comp
L R_PACK4 RP?
U 1 1 5A94676B
P 5200 6750
F 0 "RP?" H 5000 7150 50  0000 C CNN
F 1 "R_PACK4" H 5050 7250 50  0000 C CNN
F 2 "kicad-libraries:4X0402" H 5200 6750 50  0001 C CNN
F 3 "" H 5200 6750 50  0000 C CNN
	1    5200 6750
	-1   0    0    1   
$EndComp
$Comp
L R_PACK4 RP?
U 1 1 5A946A44
P 5950 7400
F 0 "RP?" H 5950 7850 50  0000 C CNN
F 1 "R_PACK4" H 5950 7350 50  0000 C CNN
F 2 "kicad-libraries:0603X4" H 5950 7400 50  0001 C CNN
F 3 "" H 5950 7400 50  0000 C CNN
	1    5950 7400
	0    1    1    0   
$EndComp
Wire Wire Line
	4900 6800 5000 6800
Wire Wire Line
	5000 6900 4900 6900
Wire Wire Line
	4900 7000 5000 7000
Wire Wire Line
	4900 7100 5000 7100
Wire Wire Line
	5600 6650 6350 6650
Wire Wire Line
	5600 6650 5600 6800
Wire Wire Line
	5600 6800 5400 6800
Wire Wire Line
	5700 6850 6350 6850
Wire Wire Line
	5700 6850 5700 6900
Wire Wire Line
	5700 6900 5400 6900
Wire Wire Line
	5650 6750 6350 6750
Wire Wire Line
	5650 6750 5650 7000
Wire Wire Line
	5650 7000 5400 7000
Wire Wire Line
	5400 7100 5700 7100
Wire Wire Line
	5700 7100 5700 7150
Wire Wire Line
	5700 7150 6350 7150
Wire Wire Line
	6300 7200 6300 6650
Connection ~ 6300 6650
Wire Wire Line
	6200 7200 6200 6750
Connection ~ 6200 6750
Wire Wire Line
	6100 7200 6100 6850
Connection ~ 6100 6850
Wire Wire Line
	6000 7650 6000 7600
Wire Wire Line
	4550 7650 6300 7650
Wire Wire Line
	6300 7650 6300 7600
Wire Wire Line
	6200 7650 6200 7600
Connection ~ 6200 7650
Wire Wire Line
	6100 7650 6100 7600
Connection ~ 6100 7650
$Comp
L C C?
U 1 1 5A947C4A
P 4950 7350
F 0 "C?" H 5000 7450 50  0000 L CNN
F 1 "220pF" H 5000 7250 50  0000 L CNN
F 2 "kicad-libraries:C0402F" H 4950 7350 60  0001 C CNN
F 3 "" H 4950 7350 60  0000 C CNN
	1    4950 7350
	1    0    0    -1  
$EndComp
Wire Wire Line
	4950 7150 4950 7100
Connection ~ 4950 7100
Wire Wire Line
	4950 7650 4950 7550
Connection ~ 6000 7650
Wire Wire Line
	4550 7650 4550 7250
Connection ~ 4950 7650
$Comp
L GND #PWR?
U 1 1 5A948103
P 5500 7700
F 0 "#PWR?" H 5500 7700 30  0001 C CNN
F 1 "GND" H 5500 7630 30  0001 C CNN
F 2 "" H 5500 7700 60  0000 C CNN
F 3 "" H 5500 7700 60  0000 C CNN
	1    5500 7700
	1    0    0    -1  
$EndComp
Wire Wire Line
	5500 7700 5500 7650
Connection ~ 5500 7650
$Comp
L GND #PWR?
U 1 1 5A9487BF
P 3050 7550
F 0 "#PWR?" H 3050 7550 30  0001 C CNN
F 1 "GND" H 3050 7480 30  0001 C CNN
F 2 "" H 3050 7550 60  0000 C CNN
F 3 "" H 3050 7550 60  0000 C CNN
	1    3050 7550
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 5A94881F
P 3050 6600
F 0 "#PWR?" H 3050 6600 30  0001 C CNN
F 1 "GND" H 3050 6530 30  0001 C CNN
F 2 "" H 3050 6600 60  0000 C CNN
F 3 "" H 3050 6600 60  0000 C CNN
	1    3050 6600
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR?
U 1 1 5A94887F
P 3050 6850
F 0 "#PWR?" H 3050 6700 50  0001 C CNN
F 1 "+3.3V" H 3050 6990 50  0000 C CNN
F 2 "" H 3050 6850 50  0001 C CNN
F 3 "" H 3050 6850 50  0001 C CNN
	1    3050 6850
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR?
U 1 1 5A948903
P 3050 5900
F 0 "#PWR?" H 3050 5750 50  0001 C CNN
F 1 "+3.3V" H 3050 6040 50  0000 C CNN
F 2 "" H 3050 5900 50  0001 C CNN
F 3 "" H 3050 5900 50  0001 C CNN
	1    3050 5900
	1    0    0    -1  
$EndComp
$Comp
L C C?
U 1 1 5A948A4A
P 3050 6300
F 0 "C?" H 3050 6400 50  0000 L CNN
F 1 "100nF" H 3050 6200 50  0000 L CNN
F 2 "kicad-libraries:C0603F" H 3050 6300 60  0001 C CNN
F 3 "" H 3050 6300 60  0000 C CNN
	1    3050 6300
	1    0    0    -1  
$EndComp
$Comp
L C C?
U 1 1 5A948BE2
P 3300 6300
F 0 "C?" H 3300 6400 50  0000 L CNN
F 1 "100nF" H 3300 6200 50  0000 L CNN
F 2 "kicad-libraries:C0603F" H 3300 6300 60  0001 C CNN
F 3 "" H 3300 6300 60  0000 C CNN
	1    3300 6300
	1    0    0    -1  
$EndComp
$Comp
L C C?
U 1 1 5A948C84
P 3050 7250
F 0 "C?" H 3050 7350 50  0000 L CNN
F 1 "100nF" H 3050 7150 50  0000 L CNN
F 2 "kicad-libraries:C0603F" H 3050 7250 60  0001 C CNN
F 3 "" H 3050 7250 60  0000 C CNN
	1    3050 7250
	1    0    0    -1  
$EndComp
$Comp
L C C?
U 1 1 5A948D53
P 3300 7250
F 0 "C?" H 3300 7350 50  0000 L CNN
F 1 "220nF" H 3300 7150 50  0000 L CNN
F 2 "kicad-libraries:C0603F" H 3300 7250 60  0001 C CNN
F 3 "" H 3300 7250 60  0000 C CNN
	1    3300 7250
	1    0    0    -1  
$EndComp
Wire Wire Line
	3450 6050 3050 6050
Wire Wire Line
	3050 5900 3050 6100
Wire Wire Line
	3300 6100 3300 6050
Connection ~ 3300 6050
Wire Wire Line
	3050 5950 3450 5950
Connection ~ 3050 6050
Wire Wire Line
	3050 6500 3050 6600
Wire Wire Line
	3050 6550 3450 6550
Wire Wire Line
	3300 6500 3300 6650
Connection ~ 3300 6550
Wire Wire Line
	3300 6650 3450 6650
Connection ~ 3050 6550
Connection ~ 3050 5950
Wire Wire Line
	3450 6900 3050 6900
Wire Wire Line
	3050 6850 3050 7050
Connection ~ 3050 6900
Wire Wire Line
	3450 7000 3050 7000
Connection ~ 3050 7000
Wire Wire Line
	3300 7000 3300 7050
Connection ~ 3300 7000
Wire Wire Line
	3050 7500 3450 7500
Wire Wire Line
	3300 7500 3300 7450
Wire Wire Line
	3050 7450 3050 7550
Connection ~ 3300 7500
Connection ~ 3050 7500
$Comp
L CRYSTAL_3225 X?
U 1 1 5A94AE04
P 9300 5300
F 0 "X?" V 9050 5200 60  0000 C CNN
F 1 "CRYSTAL_3225" V 8850 5200 60  0000 C CNN
F 2 "kicad-libraries:CRYSTAL_3225" H 9300 5300 60  0001 C CNN
F 3 "" H 9300 5300 60  0000 C CNN
	1    9300 5300
	0    -1   -1   0   
$EndComp
$Comp
L C C?
U 1 1 5A94B021
P 9000 4950
F 0 "C?" V 8850 4900 50  0000 L CNN
F 1 "10pF" V 9150 4900 50  0000 L CNN
F 2 "kicad-libraries:C0603F" H 9000 4950 60  0001 C CNN
F 3 "" H 9000 4950 60  0000 C CNN
	1    9000 4950
	0    1    1    0   
$EndComp
$Comp
L C C?
U 1 1 5A94B14E
P 9000 5650
F 0 "C?" V 8850 5600 50  0000 L CNN
F 1 "10pF" V 9200 5600 50  0000 L CNN
F 2 "kicad-libraries:C0603F" H 9000 5650 60  0001 C CNN
F 3 "" H 9000 5650 60  0000 C CNN
	1    9000 5650
	0    1    1    0   
$EndComp
$Comp
L Conn_01x02 J?
U 1 1 5A94B1DE
P 9800 5000
F 0 "J?" H 9800 5100 50  0000 C CNN
F 1 "Conn_01x02" H 10100 4900 50  0000 C CNN
F 2 "kicad-libraries:SolderJumper" H 9800 5000 50  0001 C CNN
F 3 "" H 9800 5000 50  0001 C CNN
	1    9800 5000
	-1   0    0    1   
$EndComp
$Comp
L CONN_01X01 P?
U 1 1 5A94B757
P 9800 4700
F 0 "P?" H 9700 4750 50  0000 C CNN
F 1 "CONN_01X01" H 10100 4700 50  0000 C CNN
F 2 "kicad-libraries:DEBUG_PAD" H 9800 4700 50  0001 C CNN
F 3 "" H 9800 4700 50  0000 C CNN
	1    9800 4700
	-1   0    0    1   
$EndComp
Wire Wire Line
	9300 4950 9300 5000
Wire Wire Line
	9200 4950 9650 4950
Wire Wire Line
	9650 4950 9650 5200
Wire Wire Line
	9300 5600 9300 5650
Wire Wire Line
	9200 5650 9650 5650
Wire Wire Line
	9650 5650 9650 5300
Wire Wire Line
	9600 5450 9750 5450
Wire Wire Line
	9750 5450 9750 5500
$Comp
L GND #PWR?
U 1 1 5A94BFE4
P 9750 5500
F 0 "#PWR?" H 9750 5500 30  0001 C CNN
F 1 "GND" H 9750 5430 30  0001 C CNN
F 2 "" H 9750 5500 60  0000 C CNN
F 3 "" H 9750 5500 60  0000 C CNN
	1    9750 5500
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 5A94C083
P 8750 5700
F 0 "#PWR?" H 8750 5700 30  0001 C CNN
F 1 "GND" H 8750 5630 30  0001 C CNN
F 2 "" H 8750 5700 60  0000 C CNN
F 3 "" H 8750 5700 60  0000 C CNN
	1    8750 5700
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 5A94C11B
P 8750 5000
F 0 "#PWR?" H 8750 5000 30  0001 C CNN
F 1 "GND" H 8750 4930 30  0001 C CNN
F 2 "" H 8750 5000 60  0000 C CNN
F 3 "" H 8750 5000 60  0000 C CNN
	1    8750 5000
	1    0    0    -1  
$EndComp
Wire Wire Line
	8750 5000 8750 4950
Wire Wire Line
	8750 4950 8800 4950
Wire Wire Line
	8750 5700 8750 5650
Wire Wire Line
	8750 5650 8800 5650
Connection ~ 9300 5650
Connection ~ 9300 4950
Wire Wire Line
	9650 5200 10150 5200
Wire Wire Line
	9650 5300 10150 5300
$Comp
L LED D?
U 1 1 5A94E0FB
P 9900 1650
F 0 "D?" H 9800 1750 50  0000 C CNN
F 1 "LED" H 9950 1750 50  0000 C CNN
F 2 "kicad-libraries:D0603E" H 9900 1650 50  0001 C CNN
F 3 "" H 9900 1650 50  0000 C CNN
	1    9900 1650
	1    0    0    -1  
$EndComp
$Comp
L LED D?
U 1 1 5A94E3E6
P 9900 1850
F 0 "D?" H 9800 1950 50  0000 C CNN
F 1 "LED" H 9950 1950 50  0000 C CNN
F 2 "kicad-libraries:D0603E" H 9900 1850 50  0001 C CNN
F 3 "" H 9900 1850 50  0000 C CNN
	1    9900 1850
	1    0    0    -1  
$EndComp
$Comp
L LED D?
U 1 1 5A94E491
P 9900 2050
F 0 "D?" H 9800 2150 50  0000 C CNN
F 1 "LED" H 9950 2150 50  0000 C CNN
F 2 "kicad-libraries:D0603E" H 9900 2050 50  0001 C CNN
F 3 "" H 9900 2050 50  0000 C CNN
	1    9900 2050
	1    0    0    -1  
$EndComp
$Comp
L R_PACK4 RP?
U 1 1 5A94E63B
P 9400 1600
F 0 "RP?" H 9400 2050 50  0000 C CNN
F 1 "1K" H 9400 1550 50  0000 C CNN
F 2 "kicad-libraries:0603X4" H 9400 1600 50  0001 C CNN
F 3 "" H 9400 1600 50  0000 C CNN
	1    9400 1600
	-1   0    0    1   
$EndComp
$Comp
L +3.3V #PWR?
U 1 1 5A94EBEC
P 9150 1600
F 0 "#PWR?" H 9150 1450 50  0001 C CNN
F 1 "+3.3V" H 9150 1740 50  0000 C CNN
F 2 "" H 9150 1600 50  0001 C CNN
F 3 "" H 9150 1600 50  0001 C CNN
	1    9150 1600
	1    0    0    -1  
$EndComp
Wire Wire Line
	9150 1950 9200 1950
Wire Wire Line
	9150 1600 9150 1950
Wire Wire Line
	9150 1650 9200 1650
Wire Wire Line
	9200 1750 9150 1750
Connection ~ 9150 1750
Wire Wire Line
	9200 1850 9150 1850
Connection ~ 9150 1850
Connection ~ 9150 1650
Wire Wire Line
	9600 1850 9700 1850
Wire Wire Line
	9600 1750 9650 1750
Wire Wire Line
	9650 1750 9650 1650
Wire Wire Line
	9650 1650 9700 1650
Wire Wire Line
	9600 1950 9650 1950
Wire Wire Line
	9650 1950 9650 2050
Wire Wire Line
	9650 2050 9700 2050
Wire Wire Line
	10300 1850 10100 1850
Wire Wire Line
	10100 1650 10150 1650
Wire Wire Line
	10150 1650 10150 1750
Wire Wire Line
	10150 1750 10300 1750
Wire Wire Line
	10300 1950 10150 1950
Wire Wire Line
	10150 1950 10150 2050
Wire Wire Line
	10150 2050 10100 2050
$Comp
L Speaker_Ultrasound LS?
U 1 1 5A94FDB3
P 6000 900
F 0 "LS?" H 6025 1125 50  0000 R CNN
F 1 "Speaker_Ultrasound" H 6025 1050 50  0000 R CNN
F 2 "" H 5965 850 50  0001 C CNN
F 3 "" H 5965 850 50  0001 C CNN
	1    6000 900 
	1    0    0    -1  
$EndComp
Text GLabel 5600 900  0    60   Input ~ 0
Sensor+
Text GLabel 5600 1000 0    60   Input ~ 0
Sensor-
Wire Wire Line
	5600 900  5800 900 
Wire Wire Line
	5600 1000 5800 1000
Wire Wire Line
	2800 1000 2750 1000
Wire Wire Line
	4150 1000 4100 1000
Wire Wire Line
	10150 4900 10000 4900
Wire Wire Line
	10000 4700 10150 4700
$Comp
L GND #PWR?
U 1 1 5A95174A
P 10050 5100
F 0 "#PWR?" H 10050 5100 30  0001 C CNN
F 1 "GND" H 10050 5030 30  0001 C CNN
F 2 "" H 10050 5100 60  0000 C CNN
F 3 "" H 10050 5100 60  0000 C CNN
	1    10050 5100
	1    0    0    -1  
$EndComp
Wire Wire Line
	10000 5000 10050 5000
Wire Wire Line
	10050 5000 10050 5100
NoConn ~ 10150 5700
NoConn ~ 10150 5600
NoConn ~ 10150 5500
NoConn ~ 10150 5400
NoConn ~ 10150 5100
NoConn ~ 10150 5000
NoConn ~ 10150 4800
NoConn ~ 10150 4600
NoConn ~ 10150 4500
NoConn ~ 10150 4400
NoConn ~ 10150 4300
NoConn ~ 10150 4200
NoConn ~ 10300 2050
NoConn ~ 10300 1650
NoConn ~ 10300 1550
NoConn ~ 10300 1450
NoConn ~ 10300 1350
NoConn ~ 10300 1250
NoConn ~ 10300 1150
NoConn ~ 10300 1050
NoConn ~ 10300 950 
NoConn ~ 10300 850 
NoConn ~ 10300 750 
NoConn ~ 6350 7050
NoConn ~ 6350 6950
NoConn ~ 6350 6550
NoConn ~ 6000 7200
$Comp
L +3.3V #PWR?
U 1 1 5A9524D0
P 5250 6600
F 0 "#PWR?" H 5250 6450 50  0001 C CNN
F 1 "+3.3V" H 5250 6740 50  0000 C CNN
F 2 "" H 5250 6600 50  0001 C CNN
F 3 "" H 5250 6600 50  0001 C CNN
	1    5250 6600
	1    0    0    -1  
$EndComp
$Comp
L +5V #PWR?
U 1 1 5A9526AF
P 4950 6450
F 0 "#PWR?" H 4950 6300 50  0001 C CNN
F 1 "+5V" H 4950 6590 50  0000 C CNN
F 2 "" H 4950 6450 50  0001 C CNN
F 3 "" H 4950 6450 50  0001 C CNN
	1    4950 6450
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR?
U 1 1 5A95285A
P 5100 6600
F 0 "#PWR?" H 5100 6600 30  0001 C CNN
F 1 "GND" H 5100 6530 30  0001 C CNN
F 2 "" H 5100 6600 60  0000 C CNN
F 3 "" H 5100 6600 60  0000 C CNN
	1    5100 6600
	1    0    0    -1  
$EndComp
Wire Wire Line
	4900 6500 4950 6500
Wire Wire Line
	4950 6500 4950 6450
Wire Wire Line
	4900 6600 5000 6600
Wire Wire Line
	4900 6700 5250 6700
Wire Wire Line
	5250 6700 5250 6600
Wire Wire Line
	5000 6600 5000 6550
Wire Wire Line
	5000 6550 5100 6550
Wire Wire Line
	5100 6550 5100 6600
NoConn ~ 2150 5850
NoConn ~ 2150 6250
NoConn ~ 2150 6350
NoConn ~ 2150 6450
NoConn ~ 2150 6550
Text GLabel 9550 800  0    60   Input ~ 0
MP-OPV-Aus
Text GLabel 9550 950  0    60   Input ~ 0
Sensor+
Text GLabel 9550 1050 0    60   Input ~ 0
Sensor-
Text GLabel 9550 1200 0    60   Input ~ 0
+UA
$EndSCHEMATC
