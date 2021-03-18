int sensorPin = A0;
int sensorValue = 0 ;

雙T，溫度；
雙T0 = 303.15 ;
雙lnR；
int16_t R;
int16_t R0 = 8805 ;
int16_t B = 3905；
int16_t上拉= 9000 ;

無效 設置（）{
   序列號。開始（115200）;
}

無效 循環（）{
  sensorValue = analogRead（sensorPin）;
  R =（上拉* sensorValue）/（4096 -sensorValue）;
  T = 1 /（1 / T0 +（log（R）-log（R0））/ B）;
  溫度= T- 273.15 ;
  序列號。println（Temp）;
}
