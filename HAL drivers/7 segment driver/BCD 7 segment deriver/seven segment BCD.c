/*
 * seven_segment_BCD.c
 
 *  Driver for law nibble >> if want to write on high nibble must remodified write function 
 
 * Created: 17/09/2021 9:04:40 PM
 *  Author: kamar salah
 */ 
 #include "DIO drivers.h"
 
 void seven_seg_bcd_vinit (char port_name)
 {
	 DIO_vset_pin_dir(port_name,0,1);       // pin 0 in given port is output
	 DIO_vset_pin_dir(port_name,1,1);       // pin 1 in given port is output
	 DIO_vset_pin_dir(port_name,2,1);       // pin 2 in given port is output
	 DIO_vset_pin_dir(port_name,3,1);       // pin 3 in given port is output
 }
 
 void seven_seg_bcd_vwrite (char port_name, char value)
 {
	 DIO_vwrite_law_nibble(port_name,value);
 }