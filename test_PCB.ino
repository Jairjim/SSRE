// Motor A
//int ENA = 10;
//int IN1 = 8;
//int IN2 = 9;

// Motor B
int ENB = 3;
int IN3 = 8;
int IN4 = 9;

void setup ()
{
 // Declaramos todos los pines como salidas
 //pinMode (ENA, OUTPUT);
 Serial.begin(9600);
 pinMode (ENB, OUTPUT);
 //pinMode (IN1, OUTPUT);
 //pinMode (IN2, OUTPUT);
 pinMode (IN3, OUTPUT);
 pinMode (IN4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Adelante();
  delay(5000);
  Atras ();
  delay(5000);
}

void Adelante()
{
 //Direccion motor A
 //digitalWrite (IN1, HIGH);
 //digitalWrite (IN2, LOW);
 //analogWrite (ENA, 255); //Velocidad motor A
 //Direccion motor B
 digitalWrite (IN3, HIGH);
 digitalWrite (IN4, LOW);
 analogWrite (ENB, 255); //Velocidad motor B
}
void Atras ()
{
 //Direccion motor A
 //digitalWrite (IN1, LOW);
 //digitalWrite (IN2, HIGH);
 //analogWrite (ENA, 128); //Velocidad motor A
 //Direccion motor B
 digitalWrite (IN3, LOW);
 digitalWrite (IN4, HIGH);
 analogWrite (ENB, 128); //Velocidad motor B
}
