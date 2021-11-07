		      /************************\
		     < Ultra Sonic Range Finder >
 		      \************************/
*********************************************************************
* 			       Hardware			            *
*********************************************************************
> Processor -> Atmega328p @ 16MHz (Arduino Nano ebay special)       *
> Sensor -> HCSR04					       	    *
> Display -> 8 LEDs to Graduate to An I2C LCD		      	    *
*********************************************************************
*			       Objective			    *
*********************************************************************
> Make a driver for HCSR04. Must send a 10us pulse to trigger pin.  *
> Then wait for response. sensor will hold echo pin high for n time.*
> Test distance = (n * 340) / 2					    *
> Must display distance via LEDs or LCD. 			    *
*********************************************************************
*			LED Display Protocol			    *
*********************************************************************
> 10cm per LED. Therefore max distance is 80 cm. Minimum distance is* 
  10cm.								    *
*********************************************************************