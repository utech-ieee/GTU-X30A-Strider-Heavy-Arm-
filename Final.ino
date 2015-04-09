//*******************************************//
//    Declaration of Motor Controller PINs   //
//*******************************************//
#define MFR_A_PIN		11  // FRONT RIGHT MOTOR 
#define MFR_B_PIN		12 
#define MFR_PWM_PIN		13 	// PULSE WIDTH MODULATION PIN

#define MFL_A_PIN		5	//FRONT LEFT MOTOR
#define MFL_B_PIN 		6
#define MFL_PWM_PIN		7	// PULSE WIDTH MODULATION PIN

#define MBR_A_PIN		9	//BACK RIGHT MOTOR
#define MBR_B_PIN		10
#define MBR_PWM_PIN		8	// PULSE WIDTH MODULATION PIN

#define MBL_A_PIN		3	//BACK LEFT MOTOR
#define MBL_B_PIN		4
#define MBL_PWM_PIN		2 	// PULSE WIDTH MODULATION PIN 

//**************************************//
//      Declaration of the IRF PINs     //
//**************************************//
#define IRL_PIN_s0	    22
#define IRL_PIN_s1		23
#define IRL_PIN_s2		24
#define IRL_PIN_s3		25
#define IRL_PIN_s4		26
#define IRL_PIN_s5		27
#define IRL_PIN_s6		28
#define IRL_PIN_s7		29

//****************************************//
//      Declaration of the Servo PINs     //
//****************************************//
// Right Arm
#define R_ARM1_PIN 		42
#define R_ARM2_PIN 		44
#define R_ARM3_PIN 		46
#define R_ARM4_PIN 		48
#define R_ARM5_PIN 		50
#define R_ARMC_PIN 		52

// Left Arm
#define L_ARM1_PIN 		43
#define L_ARM2_PIN 		45
#define L_ARM3_PIN 		47
#define L_ARM4_PIN 		49
#define L_ARM5_PIN 		51
#define L_ARMC_PIN 		53

// Servo Object Declaration
// Right Arm
Servo rArm_Servo1;
Servo rArm_Servo2;
Servo rArm_Servo3;
Servo rArm_Servo4;
Servo rArm_Servo5;
Servo rClaw;

// Left Arm
Servo lArm_Servo1;
Servo lArm_Servo2;
Servo lArm_Servo3;
Servo lArm_Servo4;
Servo lArm_Servo5;
Servo lClaw;

void setup();
{
	
}

