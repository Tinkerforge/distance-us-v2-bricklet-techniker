EESchema Schematic File Version 2
LIBS:tinkerforge
LIBS:power
LIBS:device
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
LIBS:sensor-cache
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
Text GLabel 5000 1500 1    60   Input ~ 0
MP1
$Comp
L R R1_20K
U 1 1 5A4CE524
P 4600 2750
F 0 "R1_20K" V 4680 2750 50  0000 C CNN
F 1 "R" V 4600 2750 50  0000 C CNN
F 2 "" V 4530 2750 50  0000 C CNN
F 3 "" H 4600 2750 50  0000 C CNN
	1    4600 2750
	0    -1   -1   0   
$EndComp
$Comp
L POT 25k
U 1 1 5A4CE669
P 5000 2350
F 0 "25k" H 5000 2270 50  0000 C CNN
F 1 "POT" H 5000 2350 50  0000 C CNN
F 2 "" H 5000 2350 50  0000 C CNN
F 3 "" H 5000 2350 50  0000 C CNN
	1    5000 2350
	-1   0    0    1   
$EndComp
$Comp
L R 10R
U 1 1 5A4CE8F1
P 3400 3150
F 0 "10R" V 3480 3150 50  0000 C CNN
F 1 "R" V 3400 3150 50  0000 C CNN
F 2 "" V 3330 3150 50  0000 C CNN
F 3 "" H 3400 3150 50  0000 C CNN
	1    3400 3150
	1    0    0    -1  
$EndComp
$Comp
L R 120k
U 1 1 5A4CEA2A
P 5700 2850
F 0 "120k" V 5780 2850 50  0000 C CNN
F 1 "R" V 5700 2850 50  0000 C CNN
F 2 "" V 5630 2850 50  0000 C CNN
F 3 "" H 5700 2850 50  0000 C CNN
	1    5700 2850
	1    0    0    -1  
$EndComp
$Comp
L R 100k
U 1 1 5A4CED70
P 3000 1500
F 0 "100k" V 3080 1500 50  0000 C CNN
F 1 "R" V 3000 1500 50  0000 C CNN
F 2 "" V 2930 1500 50  0000 C CNN
F 3 "" H 3000 1500 50  0000 C CNN
	1    3000 1500
	1    0    0    -1  
$EndComp
$Comp
L R 100k
U 1 1 5A4CEDD5
P 3000 2400
F 0 "100k" V 3080 2400 50  0000 C CNN
F 1 "R" V 3000 2400 50  0000 C CNN
F 2 "" V 2930 2400 50  0000 C CNN
F 3 "" H 3000 2400 50  0000 C CNN
	1    3000 2400
	1    0    0    -1  
$EndComp
$Comp
L R 20k
U 1 1 5A4CEE2C
P 2200 2400
F 0 "20k" V 2280 2400 50  0000 C CNN
F 1 "R" V 2200 2400 50  0000 C CNN
F 2 "" V 2130 2400 50  0000 C CNN
F 3 "" H 2200 2400 50  0000 C CNN
	1    2200 2400
	1    0    0    -1  
$EndComp
$Comp
L C 100nF
U 1 1 5A4CEECB
P 2600 1900
F 0 "100nF" H 2625 2000 50  0000 L CNN
F 1 "C" H 2625 1800 50  0000 L CNN
F 2 "" H 2638 1750 50  0000 C CNN
F 3 "" H 2600 1900 50  0000 C CNN
	1    2600 1900
	0    -1   -1   0   
$EndComp
$Comp
L C 4.7nF
U 1 1 5A4CF011
P 3400 3650
F 0 "4.7nF" H 3425 3750 50  0000 L CNN
F 1 "C" H 3425 3550 50  0000 L CNN
F 2 "" H 3438 3500 50  0000 C CNN
F 3 "" H 3400 3650 50  0000 C CNN
	1    3400 3650
	1    0    0    -1  
$EndComp
$Comp
L C 100nF
U 1 1 5A4CF28C
P 6200 2850
F 0 "100nF" H 6225 2950 50  0000 L CNN
F 1 "C" H 6225 2750 50  0000 L CNN
F 2 "" H 6238 2700 50  0000 C CNN
F 3 "" H 6200 2850 50  0000 C CNN
	1    6200 2850
	1    0    0    -1  
$EndComp
$Comp
L R 20k
U 1 1 5A4CF361
P 7300 2650
F 0 "20k" V 7380 2650 50  0000 C CNN
F 1 "R" V 7300 2650 50  0000 C CNN
F 2 "" V 7230 2650 50  0000 C CNN
F 3 "" H 7300 2650 50  0000 C CNN
	1    7300 2650
	1    0    0    -1  
$EndComp
Text GLabel 7300 1250 1    60   Input ~ 0
MP2
$Comp
L SPEAKER SP1.1
U 1 1 5A4D0908
P 1400 2400
F 0 "SP1.1" H 1300 2650 50  0000 C CNN
F 1 "US-sensor" H 1300 2150 50  0000 C CNN
F 2 "" H 1400 2400 50  0000 C CNN
F 3 "" H 1400 2400 50  0000 C CNN
	1    1400 2400
	-1   0    0    1   
$EndComp
$Comp
L R 100k
U 1 1 5A4D0906
P 5700 1350
F 0 "100k" V 5780 1350 50  0000 C CNN
F 1 "R" V 5700 1350 50  0000 C CNN
F 2 "" H 5700 1350 60  0000 C CNN
F 3 "" H 5700 1350 60  0000 C CNN
	1    5700 1350
	1    0    0    -1  
$EndComp
NoConn ~ 9150 850 
Text Notes 2000 1050 0    60   ~ 0
+5V
Text Notes 6800 1700 0    60   ~ 0
+5V
Wire Wire Line
	4650 2050 6600 2050
Connection ~ 5000 2050
Wire Wire Line
	5000 2750 5000 2500
Wire Wire Line
	4750 2750 5000 2750
Wire Wire Line
	4850 2350 4850 2750
Connection ~ 4850 2750
Wire Wire Line
	5000 1500 5000 2200
Wire Wire Line
	5700 1050 5700 1100
Wire Wire Line
	5700 1600 5700 2600
Connection ~ 5700 2050
Wire Wire Line
	5700 2250 6600 2250
Connection ~ 6200 2250
Wire Wire Line
	7300 3850 7300 2800
Connection ~ 6200 3850
Wire Wire Line
	7200 2150 7300 2150
Wire Wire Line
	7300 1250 7300 2500
Connection ~ 7300 2150
Connection ~ 3400 3850
Wire Wire Line
	1700 1900 1700 2300
Wire Wire Line
	1700 2500 1700 3850
Wire Wire Line
	3400 3400 3400 3450
$Comp
L TLC272 U?
U 1 1 5A7072CD
P 6900 2150
F 0 "U?" H 6600 2600 60  0000 C CNN
F 1 "TLC272" H 6800 2150 60  0000 C CNN
F 2 "" H 6900 2150 60  0000 C CNN
F 3 "" H 6900 2150 60  0000 C CNN
	1    6900 2150
	1    0    0    -1  
$EndComp
Wire Wire Line
	1700 1900 2400 1900
Wire Wire Line
	2200 1900 2200 2150
Connection ~ 2200 1900
Connection ~ 3000 1900
Wire Wire Line
	3000 1050 3000 1250
Wire Wire Line
	2150 1050 5700 1050
Connection ~ 3000 1050
Wire Wire Line
	3400 2150 3400 2900
Wire Wire Line
	4350 2750 3400 2750
Connection ~ 3400 2750
Wire Wire Line
	3000 1750 3000 2150
Wire Wire Line
	3000 3850 3000 2650
Connection ~ 3000 3850
Connection ~ 2200 3850
Wire Wire Line
	1700 3850 7300 3850
$Comp
L TLC272 U?
U 2 1 5A7098D2
P 4200 2050
F 0 "U?" H 3900 2500 60  0000 C CNN
F 1 "TLC272" H 4100 2050 60  0000 C CNN
F 2 "" H 4200 2050 60  0000 C CNN
F 3 "" H 4200 2050 60  0000 C CNN
	2    4200 2050
	1    0    0    -1  
$EndComp
Wire Wire Line
	3400 2150 3750 2150
Wire Wire Line
	2800 1900 3750 1900
$Comp
L GND #PWR?
U 1 1 5A70A0FC
P 6850 2550
F 0 "#PWR?" H 6850 2550 30  0001 C CNN
F 1 "GND" H 6850 2480 30  0001 C CNN
F 2 "" H 6850 2550 60  0000 C CNN
F 3 "" H 6850 2550 60  0000 C CNN
	1    6850 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	6850 2500 6850 2550
Wire Wire Line
	6200 2250 6200 2650
Connection ~ 5700 2250
Wire Wire Line
	6200 3050 6200 3850
Wire Wire Line
	5700 3850 5700 3100
Connection ~ 5700 3850
Text Notes 6550 2000 0    60   ~ 0
5\n
Text Notes 6550 2200 0    60   ~ 0
6\n
$Comp
L GND #PWR?
U 1 1 5A70B233
P 2200 4100
F 0 "#PWR?" H 2200 4100 30  0001 C CNN
F 1 "GND" H 2200 4030 30  0001 C CNN
F 2 "" H 2200 4100 60  0000 C CNN
F 3 "" H 2200 4100 60  0000 C CNN
	1    2200 4100
	1    0    0    -1  
$EndComp
Wire Wire Line
	2200 2650 2200 4100
$EndSCHEMATC
