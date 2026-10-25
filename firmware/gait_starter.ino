// STARTER SKETCH - untested on hardware. ESP32 + ESP32Servo library.
#include <ESP32Servo.h>
const int N=5, PIN[N]={13,14,25,26,27};
Servo s[N]; const int LOGN=600; int8_t logA[LOGN][N]; int logI=0; bool retrace=false;
void setup(){ for(int i=0;i<N;i++){ s[i].setPeriodHertz(50); s[i].attach(PIN[i],500,2400); s[i].write(90);} }
void loop(){
  static float t=0; t+=0.1;
  if(!retrace){
    for(int i=0;i<N;i++){ int a=90+30*sin(t-i*0.9); s[i].write(a); if(logI<LOGN) logA[logI][i]=a-90; }
    if(logI<LOGN) logI++;
  } else if(logI>0){ logI--; for(int i=0;i<N;i++) s[i].write(90+logA[logI][i]); }
  delay(50);
}
