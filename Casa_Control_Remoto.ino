const int pinHabitacionUno=2;
const int pinHabitacionDos=3;
const int pinJardin=4;
const int pinEntrada=5;
const int pinSala=6;
const int pinCocina=7;
const int pinWc=8;
const int pinCuartoLavado=9;

/**/
int habitacionUnoPrendido=0;
int habitacionDosPrendido=0;
int jardinPrendido=0;
int entradaPrendido=0;
int salaPrendido=0;
int cocinaPrendido=0;
int wcPrendido=0;
int cuartoLavadoPrendido=0;

/*Variables de bluetooth
bluetoothHabitacionUno='D';
bluetoothHabitacionDos='E';
bluetoothJardin='H';
bluetoothEntrada='G';
bluetoothSala='A';
bluetoothCocina='B';
bluetoothWc='C';
bluetoothCuartoLavado='F';
bluetoothReiniciar='X';
*/

/**/
int estado;


void setup() {
  // put your setup code here, to run once:
  // PREPARAR LA COMUNICACION SERIAL
  Serial.begin(9600);

  pinMode(pinHabitacionUno,OUTPUT);
  pinMode(pinHabitacionDos,OUTPUT);
  pinMode(pinJardin,OUTPUT);
  pinMode(pinEntrada,OUTPUT);
  pinMode(pinSala,OUTPUT);
  pinMode(pinCocina,OUTPUT);
  pinMode(pinWc,OUTPUT);
  pinMode(pinCuartoLavado,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  estado = Serial.read();
      Serial.print("Estado es :");
      Serial.print(estado);
      switch(estado){
            case 'D':
            break;
              iluminarHabitacionUno();
              Serial.print("Entra en habitacionUno");
            case 'E':
              iluminarHabitacionDos();
              Serial.println("Entra en habitacionDos");
            
            break;
            
            case 'H':
              iluminarJardin();
            
            break;
            
            case 'G':
              iluminarEntrada();
            
            break;
            
            case 'A':
              iluminarSala();

            break;
            
            case 'B':
              iluminarCocina();

            break;
            
            case 'C':
              iluminarWc();
            
            break;

            case 'F':
              iluminarCuartoLavado();
            
            break;
            case 'X':
              reiniciar();
            break;
       }
      delay(200);
      

}

void iluminarHabitacionUno(){
  if(habitacionUnoPrendido==0){
    /*Se prende la habitacion uno*/
    habitacionUnoPrendido=1;
    digitalWrite(pinHabitacionUno,HIGH);
    
  }else if(habitacionUnoPrendido==1){
    /*Se apaga la habitacion unon*/
    habitacionUnoPrendido=0;
    digitalWrite(pinHabitacionUno,LOW);
    
  }

}

void iluminarHabitacionDos(){
  if(habitacionDosPrendido==0){
    habitacionDosPrendido=1;
    digitalWrite(pinHabitacionDos,HIGH);
  }else if(habitacionDosPrendido==1){
    habitacionDosPrendido=0;
    digitalWrite(pinHabitacionDos,LOW);
  }
 
}

void iluminarJardin(){
  if(jardinPrendido==0){
    jardinPrendido=1;
    digitalWrite(pinJardin,HIGH);
    
  }else{
    jardinPrendido=0;
    digitalWrite(pinJardin,LOW);
    
  }
}

void iluminarEntrada(){
  if(entradaPrendido==0){
    entradaPrendido=1;
    digitalWrite(pinEntrada,HIGH);
   
    
  }else{
   entradaPrendido=0; 
   digitalWrite(pinEntrada,LOW);
  }
  
}

void iluminarSala(){
  if(salaPrendido==0){
    salaPrendido=1;
    digitalWrite(pinSala,HIGH);
    
  }else{
    salaPrendido=0;
    digitalWrite(pinSala,LOW);
  }
}

void iluminarCocina(){
  if(cocinaPrendido==0){
    cocinaPrendido=1;
    digitalWrite(pinCocina,HIGH);
    
  }else{
    cocinaPrendido=0;
    digitalWrite(pinCocina,LOW);
  }

 
}

void iluminarWc(){
  if(wcPrendido==0){
    wcPrendido=1;
    digitalWrite(pinWc,HIGH);
    
  }else{
    wcPrendido=0;
    digitalWrite(pinWc,LOW);
    
  }
  
}

void iluminarCuartoLavado(){
  if(cuartoLavadoPrendido==0){
    cuartoLavadoPrendido=1;
    digitalWrite(pinCuartoLavado,HIGH);
  }else{
    cuartoLavadoPrendido=0;
    digitalWrite(pinCuartoLavado,LOW);
  }
  
}

void reiniciar(){
  digitalWrite(pinHabitacionUno,LOW);
  digitalWrite(pinHabitacionDos,LOW);
  digitalWrite(pinJardin,LOW);
  digitalWrite(pinSala,LOW);
  digitalWrite(pinCuartoLavado,LOW);
  digitalWrite(pinCocina,LOW);
  digitalWrite(pinEntrada,LOW);
  digitalWrite(pinWc,LOW);
  
}

