#define NSTEP_LEFT 100
#define NSTEP_RIGHT 100

void main(void)
{ 
char c; 
InitCM8(); 
robotStop(); 
while(1) 
{ 
c = getchar();
switch(c) 
{ 
case 'w': 
goFwd(); 
MakeNSteps(NSTEP_LEFT, NSTEP_RIGHT); 
break; 

case 's': 
goBack(); 
MakeNSteps(NSTEP_LEFT, NSTEP_RIGHT); 
break; 

case 'a': 
goLeft(); 
MakeNSteps(NSTEP_LEFT, NSTEP_RIGHT); 
break;

case 'd': 
goRight(); 
MakeNSteps(NSTEP_LEFT, NSTEP_RIGHT); 
break; 

case ' ': 
robotStop(); 
break; 

} 

} 

}
