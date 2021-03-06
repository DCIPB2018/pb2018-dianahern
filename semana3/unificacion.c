/*Este programa fue realizado por Diana Ailed Hernández Bustos el 22/08/18*/

#include<stdio.h>
#include<math.h>
//INcluyo las dos librerías que voy a usar en este programa

int main()
{
//Inicio el cuerpo de mi programa con la función maestra int main
	int opcion;
 	float cent;
 	float kelvin;
  	float faren;
  	float cent2;
 	float x,y,r,o,o_2, o_3, o_4;//Utilicé o_2, etc porque necesitaba hacer otras operaciones para que 0 (que es el ángulo) me diera de forma correcta.
//Hago la decalaración de mis variables, las cuales todas son float menos opción, ya que ésta quiero que sea entera, es decir, que las personas sólo escojan 1 o 2.

  printf("\n Hola, dime qué operación quieres realizar:\n");
  printf("Opción(1): calcula la temperatura de grados C a K y F y viceversa\n");
  printf("Opción(2): calcula la conversión de coordenadas cartesianas a polares y te indica el cuadrante donde están:\n");
//Utilizo los printf para indicar al usuario que tiene 2 opciones de donde escoger.
  scanf("%i", &opcion);
//Le doy la posibilidad al usuario de escoger sólo 1 opción, la cual es entera siempre.
  
 switch(opcion)
//Con switch puedo combinar los dos programas, ayuda a poner opciones
  {
  case 1:
//Contiene las instrucciones que se deben de seguir cuando el usuario escoje la opción 2. 

  printf("\n Hola, dime una temperatura en centígrados:");
  scanf("%f",&cent);
/*Utilicé %f porque el valor de centígrados incluye decimales*/

  kelvin=cent+273;
  printf("Tu temperatura en grados Kelvin es de:%f\n",kelvin);
/*Utilicé %f porque el valor de Kelvin incluye decimales*/
  
  faren=1.8*cent+32;
  printf("Tu temperatura en grados Farenheight es de:%f\n",faren);
/*Utilicé %f porque el valor de faren incluye decimales*/

  cent2=(faren-32)/1.8;
  printf("Tu temperatura en grados centígrados a partir del resultado de Farenheight es de:%f\n",cent2);
/*Utilicé %f porque el valor de centígrados incluye decimales*/

  break; //Se usa break para indicar a la computadora que finalicé la opción 1.

 case 2:
//Contiene las instrucciones que se deben de seguir cuando el usuario escoje la opción 2.
	printf("Introduce una coordenada en el eje x:");
	scanf("%f",&x);

	printf("\n Ahora, introduce una coordenada en el eje y:");
	scanf("%f",&y);
//Pide la info. necesaria al usuario.

	r=sqrt(pow(x,2)+pow(y,2));//Se ponen las operaciones.
	o=(atan(y/x))*57.3;
	o_2=o+180;
	o_3=o+180;
	o_4=o+360;
	
/*La función "pow" sirve para elevar un número a un exponente y la palabra "sqrt" sirve para sacar raíz cuadrada al resultado. También fue importante poner atención a la jerarquía de operaciones con paréntesis*/

	if(x>0 && y>0){
	printf("\n La conversión de tus coordenadas cartesianas a polares son: r= %f y o= %f \n",r,o);
	printf("\n Tu vector r(%f) está en el cuadrante I\n",r);
//La primera condición establece que si x y y son positivas, entonces, el vector se encuentra en el 1° cuadrante
	}

	else if(x<0 && y>0){
	
	printf("\n La conversión de tus coordenadas cartesianas a polares son: r= %f y o= %f \n",r,o_2);	
	printf("\n Tu vector r(%f) está en el cuadrante II\n",r);
//La 2° condición establece que si x es negativa y y positiva, entonces, el vector se encuentra en el 2° cuadrante
	}

	else if(x<0 && y<0){	
	printf("\n La conversión de tus coordenadas cartesianas a polares son: r= %f y o= %f \n",r,o_3);
	printf("\n Tu vector r(%f) está en el cuadrante III\n",r);
//La 3° condición establece que si x y y son negativas, entonces, el vector se encuentra en el 3° cuadrante
	}

	else if(x>0 && y<0){
	printf("\n La conversión de tus coordenadas cartesianas a polares son: r= %f y o= %f \n",r,o_4);	
	printf("\n Tu vector r(%f) está en el cuadrante IV\n",r);
//La 4° condición establece que si x es positiva y y negativa, entonces, el vector se encuentra en el 4° cuadrante
	}
	
	else if(x==0 &&y==0){
	printf("\n No tienes un vector, pues estás en un punto en el origen\n");
//Indica que no existe vector, sino que es un punto en el origen.
	}
  break;//Indica que la opción 2 acabó.

	

  default://Indica lo que debe de ocurrir si el usuario no escogió ninguna opción existente.
  printf("\n No existe la opción que está indicando, favor de escoger entre opción1 u opción2\n");
  
  break;//Cierra la parte de default
}

return 0;
/*Return sirve para cerrar el programa.*/
}
