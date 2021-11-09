#ifndef HCSR04_Sensor_H
#define HCSR04_Sensor_H


/*
*************************************
* Class:		Sensor				*
* Attributes:	High_Time			*
* Methods:		start_timer()		*
*				stop_timer()		*
*				Set_Trigger_Line()	*
*				Reset_Trigger_Line()*
*				Trigger()			*
*				Calculate()			*
*************************************
*/
class HCSR04_Sensor
{
	private:
	float High_Time = 0;
	
	float start_timer();
	void stop_timer();
	void set_trigger_line();
	void reset_trigger_line();
	void trigger();
	void calculate();
};

#endif