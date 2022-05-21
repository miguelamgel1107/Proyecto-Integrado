const int bomba = 13; //mi salida a la bomba es al pin 13
const int humedad = A0; //mido la humedad al analogico 0

// el valor que considero seco y hay que regar es de 700

void setup()
{
  Serial.begin(9600);
  pinMode(humedad, INPUT);
  pinMode(bomba, OUTPUT);
 }

void loop()
{
  int SensorValue = analogRead(humedad); //take a sample
  Serial.print(SensorValue); Serial.print(" - ");
  
  if(SensorValue >= 700) 
  {
   // Si la tierra está seca, comenzara a regar
   // Riega durante 1 segundo y espera a comprobar la humedad otro segundo
   Serial.println("La tierra está seca, comienza el riego");
   digitalWrite(bomba, HIGH);
   delay(1000);
   digitalWrite(bomba, LOW);
   delay(1000);
  }
  //Si la tierra no está seca, no riega y da el valor de la humedad
  delay(1000);
}
