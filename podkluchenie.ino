#define enc_L sen_1
#define enc_R sen_2

void MakeNSteps(int NumLeft, int NumRight)
{ 
intcnt_L, cnt_R; 
charwasL, wasR; 
cnt_L = cnt_R = 0; 
wasL = wasR = 0; 


while(cnt_L<NumLeft || cnt_R<NumRight) 
{ 
if(enc_L==0) 
{ 
if(wasL) 
{ 
wasL = 0; 
cnt_L++; 
} 
} 
else wasL = 1; 
if(enc_R==0) 
{ 
if(wasR) 
{ 
wasR = 0; 
cnt_R++; 
} 
} else wasR = 1; 
 
if(cnt_L>NumLeft) MotorLeftStop(); 
if(cnt_R>NumRight) MotorRightStop(); 
}
}
