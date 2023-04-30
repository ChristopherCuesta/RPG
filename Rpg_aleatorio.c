#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	int vida = 100;
	char nombre[50];
	int alt1, alt2, accion1, accion2;
	int arma, ataque;
	printf("Bienvenido a terraria\n");
	printf("Por favor inserte el nombre del heroe o heroina: ");
	scanf("%s",nombre);
	printf("El nombre del heroe/heroina es %s\n", nombre);
	printf("Seleccione el arma que llevara si heroe/heroína ");
	printf("\n1.Espada (daño 40)");
	printf("\n2.Arco   (daño 30)");
	printf("\n3.Katana (daño 35)");
	printf("\nSeleccione su arma(1-3): ");
	scanf("%d", &arma);
	switch(arma){
		case 1:
			ataque = 40;
			printf("\nUsted ha seleccionado la espada\n");
			printf("\nSu daño es de %d\n", ataque);
		break;
		case 2:
			ataque = 30;
			printf("\nUsted ha seleccionado el arco");
			printf("\nSu daño es de %d\n", ataque);
		break;
		case 3:
			ataque = 35;
			printf("\nUsted ha seleccionado la katana");
			printf("\nSu daño es de %d\n", ataque);
		break;
		default:
			printf("\nArma invalida, Se termino la aventura");		
	}
	
	printf("\n");
	printf("\nComienza la aventura\n");
	printf("Bienvenido/a aventurero/a %s\n", nombre);
	printf("\n");
	
	srand(time(NULL));
	alt1 = rand() %5+1; 
 	do{
	alt2 = rand() %5+1;
  	}while (alt1==alt2);
  	
  	switch(alt1){
  		case 1:
  			printf("Te encuentras con unos ladrones\n");
			printf("Que quieres hacer:\n1.Huir\n2.Pelear\n");
			scanf("%d",&accion1);
			switch(accion1){
				case 1:
					printf("Al intentar huir los ladrones te disparan una flecha\n");
					printf("La flecha te resta 20 puntos de vida\n");
					vida -= 20;
					printf("Te quedan %d puntos de vida",vida);
				break;
				case 2:
					printf("\nHaz vencido a todos los ladrones pero haz perdido 10 puntos de vida\n");
					vida -=10;
					printf("Te quedan %d puntos de vida\n", vida);
				break;
			}
		break;
		case 2:
			printf("\nTe pierdes en el bosque\n");
			printf(" Encuentras un lobo abandonado y hambiento\n");
			printf("Que quieres hacer:\n1.Darle algo de tu comida\n2.Dejarlo morir\n");
			scanf("%d",&accion1);
			switch(accion1){
				case 1:
					printf("Al darle de comer el lobo te acompaña en tu vaije\n");
					printf("Tu ataque se aumenta en 20\n");
					ataque += 20;
					printf("Tu ataque ahora es de %d\n",ataque);
				break;
				case 2:
					printf("\nAl dejalo morir te da depresion\n");
					printf("\nPierdes 10 puntos de vida\n");
					vida -=10;
					printf("Te quedan %d puntos de vida\n", vida);
				break;
			}
		break;
		case 3:
			printf("\nTe encuentras a un golem\n");
			printf("Que quieres hacer:\n1.Pelear con el\n2.Huir\n");
			scanf("%d",&accion1);
			switch(accion1){
				case 1:
					if(ataque >= 40 ){
						printf("Derrotas al golem y continuas con tu aventura\n");
					}else{
						vida -=20;
						printf("No logras matar al golem y este te infringe 20 de daño\n");
						printf("Te quedan %d puntos de vida\n", vida);
					}	
				break;
				case 2:
					printf("\nAl huir\n");
					printf("\nPierdes 10 puntos de vida\n");
					vida -=10;
					printf("Te quedan %d puntos de vida\n", vida);
				break;
			}
		break;
		case 4:
			printf("\nTe adentras en una mazmorra\n");
			printf("En la mazmorra te encuentras con globins\n");
			printf("\nQue quieres hacer:\n1.Pelear con el\n2.Huir\n");
			scanf("%d",&accion1);
			switch(accion1){
				case 1:
					if(ataque >= 40 ){
						printf("Logras derrotar a los globins y encuentras una pocion\nRecuperas 20 de vida\n");
						vida -=20;
					}else{
						vida -=20;
						printf("No logras matar a todos los globins y los que restan te infringen 20 de daño\n");
						printf("Te quedan %d puntos de vida\n", vida);
					}	
				break;
				case 2:
					vida -=20;
						printf("Te descruben los globins intentando huir\nPor lo que pierdes 20 de vida\n");
						printf("Te quedan %d puntos de vida\n", vida);
				break;
			}
		break;
		case 5:
			
			printf("\nTe encuentras en el corazon de la mazmorra\n");
			printf("\nY con eso te encuentras un jefe \n");
			printf("\nPor lo cual te toca pelear\n");
			printf("\nQue quieres hacer:\n1.Atacar el cuerpo del jefe \n2.Atacarla pierna del jefe\n");
			scanf("%d",&accion1);
			switch(accion1){
				case 1:
					printf("Al atacar al cuerpo del jefe \n");
					printf("Logras matarlo pero recibes mucho daño\n");
					vida -= 80;
					printf("Te quedan %d puntos de vida\n", vida);
				break;
				case 2:
					printf("\nAl atacar la pierna del jefe te das cuenta que es su punto debil\n");
					printf("\nMatas al jefe sin recibir nada de daño");	
				break;
			}
		break;
	  }
	  
	// segunda alternativa
	switch(alt2){
  		case 1:
  			printf("Te encuentras con una manada de lobos \n");
			printf("Que quieres hacer:\n1.Huir\n2.Pelear");
			scanf("%d",&accion2);
			switch(accion2){
				case 1:
					printf("Huyes con exito\n");
				break;
				case 2:
					if(ataque >= 40 ){
						printf("Logras derrotar a la manada pero te infringen 10 de daño\n");
						vida -=10;
						printf("Te quedan %d puntos de vida\n", vida);
					}else{
						vida -=20;
						printf("No logras matar a toda la manda, te infringen 20 de daño\n");
						printf("Te quedan %d puntos de vida\n", vida);
					}	
				break;
			}
		break;
		case 2:
			printf("\nTe pierdes en una montaña con nieve\n");
			printf("Que quieres hacer:\n1.Acampar\n2.Seguir hasta salir de la montaña\n");
			scanf("%d",&accion2);
			switch(accion2){
				case 1:
					printf("Al acamapar, descansas por lo cual recuperas algo de vida\n");
					
					vida += 20;
					printf("Tu vida ahora es de %d\n",vida);
				break;
				case 2:
					printf("\nSigues sin rumbo y no logras salir de la montaña\n");
					printf("\nPierdes 10 puntos de vida por el frio\n");
					vida -=10;
					printf("Te quedan %d puntos de vida\n", vida);
				break;
			}
		break;
		case 3:
			printf("\nTe encuentras a un maestro\n");
			printf("Que quieres hacer:\n1.Entrenar con el\n2.Seguir tu aventura\n");
			scanf("%d",&accion2);
			switch(accion2){
				case 1:
					printf("Al quedarte entrenando con el tu daño sube en 5 puntos\n");
					ataque += 5;
					printf("Por entrenar con el te da una pocima de vida, tu vida aumenta en 10 puntos\n");
					vida += 10;
					printf("Tu daño ahora es de %d\n",ataque);
					printf("Tu vida ahora es de %d\n",vida);    
				break;
				case 2:
					printf("\nSigues tu aventura \n");
				break;
			}
		break;
		case 4:
			printf("\n Te aencuentras un cofre \n");
			printf("\nQue quieres hacer:\n1.Abrirlol\n2.Seguir con la aventura\n");
			scanf("%d",&accion2);
			switch(accion2){
				case 1:
					printf("\n el cofre te da un arma mejor\n Tu daño aumenta en 5\n");
					ataque += 5;
					printf("Tu daño ahora es de %d\n",ataque);
				break;
				case 2:
					printf("\nSigues tu aventura \n");
				break;
			}
		break;
		case 5:
			
			printf("\nTe encuentras en el corazon de la mazmorra\n");
			printf("\nY con eso te encuentras un jefe \n");
			printf("\nPor lo cual te toca pelear\n");
			printf("\nQue quieres hacer:\n1.Atacar al jefe \n2.Intentar huir\n");
			scanf("%d",&accion2);
			switch(accion2){
				case 1:
					printf("Al atacar al cuerpo del jefe \n");
					printf("Logras matarlo pero recibes mucho daño\n");
					vida -= 80;
					printf("Te quedan %d puntos de vida\n", vida);
				break;
				case 2:
					printf("\nAl intentar huir el jefe te infringe su poder especiall\n");
					vida -= 180;
				break;
			}
		break;
	  }
	if (vida >= 1){
	 printf ("\n%s acaba de ganar el juego. \n", nombre);
	}else {
 		printf ("\n%s acaba de perder\n",nombre); 
  	}
	  }