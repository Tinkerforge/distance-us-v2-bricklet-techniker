EESchema Schematic File Version 2
LIBS:tinkerforge
LIBS:meine
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
LIBS:Schaltplan Ultraschallsensor-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 3 3
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
L INDUCTOR L1
U 1 1 5A4CDD36
P 5250 1400
F 0 "L1" H 5100 1350 50  0000 C CNN
F 1 "FB" H 5100 1500 50  0000 C CNN
F 2 "kicad-libraries:C0603F" H 5250 1400 50  0001 C CNN
F 3 "" H 5250 1400 50  0000 C CNN
	1    5250 1400
	1    0    0    -1  
$EndComp
$Comp
L INDUCTOR L2
U 1 1 5A4CDF34
P 6650 1400
F 0 "L2" H 6500 1350 50  0000 C CNN
F 1 "10uH" H 6550 1500 50  0000 C CNN
F 2 "kicad-libraries:NR3030" H 6650 1400 50  0001 C CNN
F 3 "" H 6650 1400 50  0000 C CNN
	1    6650 1400
	1    0    0    -1  
$EndComp
$Comp
L INDUCTOR L3
U 1 1 5A4CDF63
P 8800 1400
F 0 "L3" H 8650 1350 50  0000 C CNN
F 1 "FB" H 8650 1500 50  0000 C CNN
F 2 "kicad-libraries:C0603F" H 8800 1400 50  0001 C CNN
F 3 "" H 8800 1400 50  0000 C CNN
	1    8800 1400
	1    0    0    -1  
$EndComp
$Comp
L C C5
U 1 1 5A4CE030
P 4800 1900
F 0 "C5" H 4825 2000 50  0000 L CNN
F 1 "4.7uF" H 4825 1800 50  0000 L CNN
F 2 "kicad-libraries:C0805" H 4838 1750 50  0001 C CNN
F 3 "" H 4800 1900 50  0000 C CNN
	1    4800 1900
	1    0    0    -1  
$EndComp
$Comp
L C C6
U 1 1 5A4CE061
P 5800 1950
F 0 "C6" H 5825 2050 50  0000 L CNN
F 1 "4.7uF" H 5825 1850 50  0000 L CNN
F 2 "kicad-libraries:C0805" H 5838 1800 50  0001 C CNN
F 3 "" H 5800 1950 50  0000 C CNN
	1    5800 1950
	1    0    0    -1  
$EndComp
$Comp
L R R3
U 1 1 5A4CE114
P 6100 1750
F 0 "R3" V 6180 1750 50  0000 C CNN
F 1 "1M" V 6100 1750 50  0000 C CNN
F 2 "kicad-libraries:R0603F" V 6030 1750 50  0001 C CNN
F 3 "" H 6100 1750 50  0000 C CNN
	1    6100 1750
	1    0    0    -1  
$EndComp
$Comp
L D_Schottky D1
U 1 1 5A4CE17B
P 7550 1400
F 0 "D1" H 7550 1500 50  0000 C CNN
F 1 "B0520LW" H 7550 1300 50  0000 C CNN
F 2 "kicad-libraries:SOD-123" H 7550 1400 50  0001 C CNN
F 3 "" H 7550 1400 50  0000 C CNN
	1    7550 1400
	-1   0    0    -1  
$EndComp
$Comp
L R R2
U 1 1 5A4CE3AA
P 7300 2400
F 0 "R2" V 7380 2400 50  0000 C CNN
F 1 "13.3k" V 7300 2400 50  0000 C CNN
F 2 "kicad-libraries:R0603F" V 7230 2400 50  0001 C CNN
F 3 "" H 7300 2400 50  0000 C CNN
	1    7300 2400
	1    0    0    -1  
$EndComp
$Comp
L C C9
U 1 1 5A4CE454
P 7950 2000
F 0 "C9" V 8000 2100 50  0000 L CNN
F 1 "270pF" V 8000 1700 50  0000 L CNN
F 2 "kicad-libraries:C0603F" H 8200 1900 50  0001 C CNN
F 3 "" H 7950 2000 50  0000 C CNN
	1    7950 2000
	0    -1   1    0   
$EndComp
$Comp
L C C8
U 1 1 5A4CE671
P 8500 1950
F 0 "C8" H 8525 2050 50  0000 L CNN
F 1 "4.7uF" H 8525 1850 50  0000 L CNN
F 2 "kicad-libraries:C0805" H 8538 1800 50  0001 C CNN
F 3 "" H 8500 1950 50  0000 C CNN
	1    8500 1950
	1    0    0    -1  
$EndComp
$Comp
L C C7
U 1 1 5A4CE780
P 9100 1950
F 0 "C7" H 9125 2050 50  0000 L CNN
F 1 "4.7uF" H 9125 1850 50  0000 L CNN
F 2 "kicad-libraries:C0805" H 9138 1800 50  0001 C CNN
F 3 "" H 9100 1950 50  0000 C CNN
	1    9100 1950
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR025
U 1 1 5A4CF13E
P 4800 2700
F 0 "#PWR025" H 4800 2450 50  0001 C CNN
F 1 "GND" H 4800 2550 50  0000 C CNN
F 2 "" H 4800 2700 50  0000 C CNN
F 3 "" H 4800 2700 50  0000 C CNN
	1    4800 2700
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR026
U 1 1 5A4CF1BC
P 5800 2700
F 0 "#PWR026" H 5800 2450 50  0001 C CNN
F 1 "GND" H 5800 2550 50  0000 C CNN
F 2 "" H 5800 2700 50  0000 C CNN
F 3 "" H 5800 2700 50  0000 C CNN
	1    5800 2700
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR027
U 1 1 5A4CF1EB
P 6650 2700
F 0 "#PWR027" H 6650 2450 50  0001 C CNN
F 1 "GND" H 6650 2550 50  0000 C CNN
F 2 "" H 6650 2700 50  0000 C CNN
F 3 "" H 6650 2700 50  0000 C CNN
	1    6650 2700
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR028
U 1 1 5A4CF21A
P 7300 2700
F 0 "#PWR028" H 7300 2450 50  0001 C CNN
F 1 "GND" H 7300 2550 50  0000 C CNN
F 2 "" H 7300 2700 50  0000 C CNN
F 3 "" H 7300 2700 50  0000 C CNN
	1    7300 2700
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR029
U 1 1 5A4CF249
P 8500 2700
F 0 "#PWR029" H 8500 2450 50  0001 C CNN
F 1 "GND" H 8500 2550 50  0000 C CNN
F 2 "" H 8500 2700 50  0000 C CNN
F 3 "" H 8500 2700 50  0000 C CNN
	1    8500 2700
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR030
U 1 1 5A4CF278
P 9100 2700
F 0 "#PWR030" H 9100 2450 50  0001 C CNN
F 1 "GND" H 9100 2550 50  0000 C CNN
F 2 "" H 9100 2700 50  0000 C CNN
F 3 "" H 9100 2700 50  0000 C CNN
	1    9100 2700
	1    0    0    -1  
$EndComp
$Comp
L LMR62014X U3
U 1 1 5A4D022D
P 6650 2000
F 0 "U3" H 6350 1700 60  0000 C CNN
F 1 "LMR62014X" H 6950 1700 60  0000 C CNN
F 2 "kicad-libraries:SOT23-5" H 6650 2000 60  0001 C CNN
F 3 "" H 6650 2000 60  0000 C CNN
	1    6650 2000
	1    0    0    -1  
$EndComp
Wire Wire Line
	6450 1650 6450 1550
Wire Wire Line
	6450 1550 6350 1550
Wire Wire Line
	6350 1550 6350 1400
Wire Wire Line
	6850 1650 6850 1550
Wire Wire Line
	6850 1550 6950 1550
Wire Wire Line
	6950 1550 6950 1400
Connection ~ 4800 1400
Wire Wire Line
	4800 2100 4800 2700
Wire Wire Line
	6350 1400 5550 1400
Wire Wire Line
	6100 1400 6100 1500
Connection ~ 6100 1400
Wire Wire Line
	5800 1400 5800 1750
Connection ~ 5800 1400
Wire Wire Line
	5800 2150 5800 2700
Wire Wire Line
	6100 2000 6250 2000
Wire Wire Line
	7050 2000 7750 2000
Wire Wire Line
	7300 1700 7300 2150
Connection ~ 7300 2000
Wire Wire Line
	8250 1400 8250 2000
Wire Wire Line
	8250 2000 8150 2000
Wire Wire Line
	7700 1400 8500 1400
Connection ~ 8250 1700
Connection ~ 8250 1400
Wire Wire Line
	8500 1400 8500 1750
Wire Wire Line
	6950 1400 7400 1400
Wire Wire Line
	8500 2150 8500 2700
Wire Wire Line
	9100 1750 9100 1400
Wire Wire Line
	6650 2350 6650 2700
Wire Wire Line
	9100 2700 9100 2150
Wire Wire Line
	9100 1400 9300 1400
Wire Wire Line
	7300 2700 7300 2650
Wire Wire Line
	4800 1400 4950 1400
Text HLabel 9300 1400 2    60   Input ~ 0
+UA
Text HLabel 6100 2200 3    60   Input ~ 0
nSHDN
Wire Wire Line
	6100 2000 6100 2200
$Comp
L R R13
U 1 1 5A72FBF8
P 7950 1700
F 0 "R13" V 8030 1700 50  0000 C CNN
F 1 "20k" V 7950 1700 50  0000 C CNN
F 2 "kicad-libraries:R0603F" H 7950 1700 60  0001 C CNN
F 3 "" H 7950 1700 60  0000 C CNN
	1    7950 1700
	0    1    1    0   
$EndComp
Wire Wire Line
	8200 1700 8250 1700
Wire Wire Line
	7650 1700 7700 1700
Wire Wire Line
	7300 1700 7350 1700
$Comp
L POT RV1
U 1 1 5A746D57
P 7500 1700
F 0 "RV1" V 7400 1700 50  0000 C CNN
F 1 "200k" V 7500 1700 50  0000 C CNN
F 2 "Zusatzteile:ST4ETA" H 7500 1700 50  0001 C CNN
F 3 "" H 7500 1700 50  0001 C CNN
	1    7500 1700
	0    1    1    0   
$EndComp
Wire Wire Line
	7500 1850 7300 1850
Connection ~ 7300 1850
Connection ~ 6350 1400
Connection ~ 6950 1400
Connection ~ 8500 1400
Connection ~ 9100 1400
Connection ~ 6100 2000
$Comp
L +5V #PWR031
U 1 1 5A793374
P 4800 800
F 0 "#PWR031" H 4800 650 50  0001 C CNN
F 1 "+5V" H 4800 940 50  0000 C CNN
F 2 "" H 4800 800 50  0001 C CNN
F 3 "" H 4800 800 50  0001 C CNN
	1    4800 800 
	1    0    0    -1  
$EndComp
$Comp
L R R17
U 1 1 5A795820
P 4800 1100
F 0 "R17" V 4880 1100 50  0000 C CNN
F 1 "0" V 4800 1100 50  0000 C CNN
F 2 "kicad-libraries:R0603F" H 4800 1100 60  0000 C CNN
F 3 "" H 4800 1100 60  0000 C CNN
	1    4800 1100
	1    0    0    -1  
$EndComp
Wire Wire Line
	4800 1350 4800 1700
Wire Wire Line
	4800 850  4800 800 
$EndSCHEMATC
