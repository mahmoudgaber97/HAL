
#include"TYPES.h"
#include"GPIO_V3_inter.h"
#include"GPIO_V3_REG.h"
#include"systick_config.h"
#include"systick_interface.h"
#include"systick_privite.h"
#include"LEDs_MRX_Privite.h"


void HLEDs_voidInt(void){
/*Disable all colum*/

	 SETPINvalue(COLUM1,1);
	 SETPINvalue(COLUM2,1);
	 SETPINvalue(COLUM3,1);
	 SETPINvalue(COLUM4,1);
	 SETPINvalue(COLUM5,1);
	 SETPINvalue(COLUM6,1);
	 SETPINvalue(COLUM7,1);
	 SETPINvalue(COLUM8,1);


}


void Select_LED(u8 u8COLPort,u8 u8COLNum,u8 u8ROWPort, u8 u8ROWNum){
	HLEDs_voidInt();/*Disable all colum*/
      SETPINvalue(u8COLPort,u8COLNum,0); /*DRIVE SELECTED LED*/
      SETPINvalue(u8ROWPort,u8ROWNum,1);
      MSTK_VoidBasyWait(100);     /*WITH 100 TICKS*/
      SETPINvalue(u8ROWPort,u8ROWNum,0); /*TURN OFF LED*/
      SETPINvalue(u8COLPort,u8COLNum,1);
      MSTK_VoidBasyWait(100);





}
