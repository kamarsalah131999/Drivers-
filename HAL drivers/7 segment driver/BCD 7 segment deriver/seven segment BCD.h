/*
 * seven_segment_BCD.h
 *
 * Created: 17/09/2021 9:05:10 PM
 *  Author: kamar salah
 */ 


#ifndef SEVEN SEGMENT BCD_H_
#define SEVEN SEGMENT BCD_H_

/* function description:
detrmine witch port is output 
*/
void seven_seg_bcd_vinit (char port_name);

/* function description:
writeen on detrmined pins in given port
*/
void seven_seg_bcd_vwrite (char port_name, char value);

#endif /* SEVEN SEGMENT BCD_H_ */