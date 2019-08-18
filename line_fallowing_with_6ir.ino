int S_A = 12;  //speed motor a
int M_A1 = 10; //motor a = +
int M_A2 = 9; //motor a = -
int M_B1 = 8; //motor b = -
int M_B2 = 7; //motor b = +
int S_B = 11;  //speed motor b

int ls1 = A15;    // for Rigth_Sensor
int ls2 = A14;    // for Left_Sensor
int ms1 = A13;    // for Rigth_Sensor
int ms2 = A12;    // for Left_Sensor
int rs1 = A11;    // for Rigth_Sensor
int rs2 = A10;    // for Left_Sensor

void setup() 
{
pinMode(M_B1, OUTPUT);
pinMode(M_B2, OUTPUT);
pinMode(M_A1, OUTPUT);
pinMode(M_A2, OUTPUT);
pinMode(S_B, OUTPUT);
pinMode(S_A, OUTPUT);
pinMode(ls1, INPUT);
pinMode(ls2, INPUT);
pinMode(ms1, INPUT);
pinMode(ms2, INPUT);
pinMode(rs1, INPUT);
pinMode(rs2, INPUT);

analogWrite(S_A,100); Here you can change the Voltage(Speed) to the motors A.
analogWrite(S_B,100); Here you can change the Voltage(Speed) to the motors B.
}
void loop(){
if ((digitalRead(ls1) == 0)&&(digitalRead(ls2) == 0)&&(digitalRead(ms1) == 1)&&(digitalRead(ms2) == 1)&&(digitalRead(rs1) == 0)&&(digitalRead(rs2) == 0)){ forword();}
if ((digitalRead(ls2) == 0)&&(digitalRead(ls1) == 0)&&(digitalRead(ms1) == 0)&&(digitalRead(ms2) == 0)&&(digitalRead(rs1) == 1)&&(digitalRead(rs2) == 1)){ turnRight();}
if ((digitalRead(ls1) == 1)&&(digitalRead(ls2) == 1)&&(digitalRead(ms1) == 0)&&(digitalRead(ms2) == 0)&&(digitalRead(rs1) == 0)&&(digitalRead(rs2) == 0)){ turnLeft();}
if ((digitalRead(ls1) == 1)&&(digitalRead(ls2) == 1)&&(digitalRead(ms1) == 1)&&(digitalRead(ms2) == 1)&&(digitalRead(rs1) == 1)&&(digitalRead(rs2) == 1)){Stop();}

}
void forword(){
digitalWrite(M_A1,1);
digitalWrite(M_A2,0);
digitalWrite(M_B1,1); 
digitalWrite(M_B2,0);
}
void turnLeft(){ 
digitalWrite(M_A1,0);
digitalWrite(M_A2,0);
digitalWrite(M_B1,1);
digitalWrite(M_B2,0);
}
void uturn(){
digitalWrite(M_A1,1);
digitalWrite(M_A2,0);
digitalWrite(M_B1,1); 
digitalWrite(M_B2,0);
}
void turnRight(){
digitalWrite(M_A1,1);
digitalWrite(M_A2,0);
digitalWrite(M_B1,0);
digitalWrite(M_B2,0);  
}
void Stop(){
digitalWrite(M_A1,0);
digitalWrite(M_A2,0);
digitalWrite(M_B1,0);
digitalWrite(M_B2,0);
}
void turn(){
digitalWrite(M_A1,1);
digitalWrite(M_A2,0);
digitalWrite(M_B1,0); 
digitalWrite(M_B2,1);
}
