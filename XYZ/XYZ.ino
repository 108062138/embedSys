int xpin = A1;                  //感測器 X_OUT 連接 Arduino pin A1
int ypin = A2;                  //感測器 Y_OUT 連接 Arduino pin A2
int zpin = A3;                  //感測器 Z_OUT 連接 Arduino pin A3

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 int x = analogRead(xpin);  //讀 X 軸電壓值，存入整數 x
 int y = analogRead(ypin);  //讀 Y 軸電壓值，存入整數 y
 int z = analogRead(zpin);  //讀 Z 軸電壓值，存入整數 z

Serial.print(x);            //在序列埠螢幕中印出X Y Z的讀值
Serial.print("\t");
Serial.print(y);
Serial.print("\t");
Serial.print(z);  
Serial.print("\n");  
delay(500);
}
