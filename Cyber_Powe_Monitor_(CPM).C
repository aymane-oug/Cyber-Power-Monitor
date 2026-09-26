#include <stdio.h>
#include <string.h>


void check(char *nom_appareil, float U, float  I, float t, float P_min, float P_max);

int main(){
    int choix ; 
    float U , I , t , P_max , P_min; 
    char nom_appareil[100];
    printf("==============================================\n");
	printf("CYBER POWER MONITOR (CPM) -- BY AYMANE-OUG \n");
	printf("==============================================\n");
	
	printf("What device would you like to monitor ? : \n> ");
	printf("1. Security Camera\n");
	printf("2. Wi-Fi Access Point\n");
	printf("3. RFID Reader\n");
	printf("4. Alarm System \n");
	printf("5. IoT Security Sensor \n");
	printf("6. Other");
	printf("Please chose an Option\n> ");
	scanf("%d", &choix);
	printf("Entrer la tension (V) : \n> ");
	scanf("%f", U);
	printf("Entrer le courant (A) : \n> ");
    scanf("%f", I);
	printf("Entrer la durée (s) : \n> ");
    scanf("%f", t);
    if (U <= 0 || I < 0 || t <= 0 ){
        printf("Erreur : valeurs invalides\n");
        return 1 ; 
    }
    switch (choix){
        case 1 : 
            strcpy(nom_appareil, "Security Camera");
            check(nom_appareil , U , I , t , 5 , 15) ;
            break; 
        case 2: 
            strcpy(nom_appareil, "Wi-Fi Access Point");
            check(nom_appareil , U , I , t ,  5 , 20);
            break; 
        case 3 : 
            strcpy(nom_appareil, "RFID Reader");
            check(nom_appareil , U , I , t  , 1 , 5);
            break; 
        case 4 : 
            strcpy(nom_appareil, "Alarm System");
            check(nom_appareil , U , I , t  , 5 , 30) ;
            break; 
        case 5 : 
            strcpy(nom_appareil, "IoT Security Sensor");
            check(nom_appareil , U , I , t  , 0.5 , 3) ;
            break; 
        case 6 : 
            printf("Quelle est le nom de votre appareil ? : \n> ");
            scanf(" %[^\n]", nom_appareil);
            printf("Quelle est la puissance minimal normal de watt de cet appareil ? : \n> ");
			scanf("%f", P_min);
			printf("Quelle est la puissance maximal de watt de cet appareil ? : \n> ");
			scanf("%f", P_max);
            if ( P_min < 0 || P_max <= P_min) {
				printf("Erreur : plage de puissance invalide \n ") ; 
                return 1  ; 
            }
            check(nom_appareil , U , I , t , P_min, P_max) ;
            break; 

        default : 
            printf("option invalide \n");
            return 1 ; 
         

    }



    return 0 ; 

}


void check(char *nom_appareil, float U, float  I, float t, float P_min, float P_max){
    float Q , W , P ; 

    Q = I * t ;
	W = U * Q ;
	P = U * I  ;

    printf("==============================================");
	printf("CYBER POWER MONITOR (CPM) -- BY AYMANE-OUG");
	printf("==============================================");
	
	printf("appareil : ", nom_appareil);
	printf("Voltage : ", U);
	printf("Courant : ", I);
    printf("duree : ", t);
	printf("==============================================");
	printf("Charge : ", Q, " C");
    printf("Puissance : ", P, " W");
    printf("Energie : ", W, " J");
	printf("==============================================");
	printf("Debut De Cyber Test : .....");
	printf("==============================================");
	printf("Resultat d'Analyse Cyber : ");

    if (P < P_min){
        printf("Anomalie de faible puissance !!!");
    }
    else if (P > P_max) {
        printf("Anomalie de haute puissance !!!");
        printf("Menace de cyber_attaque !!!!");
    }
    else {
        printf("Normal");
    }

}

