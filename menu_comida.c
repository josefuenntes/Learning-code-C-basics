#include <stdio.h>
int main () {

//ESTRUCTURAS DE CONTROL SELCTIVAS
/*USO DE:
SWITCH
SWITCH ANIDADO
IF SIMPLE
ELSE
*/

int seleccion_de_comida_chatarra;
int seleccion_de_comida_saludable;       
int seleccion_tipo_de_comida;  //CHATARRA O SALUDABLE


//MENU
char comida_saludable1[] = "salmon";
char comida_saludable2[] = "pollo a la plancha";
char comida_saludable3[] = "lentejas";
char comida_saludable4[] = "ensalada";
char comida_saludable5[] = "pescado a la plancha";

char comida_chatarra1[] = "papas fritas";
char comida_chatarra2[] = "cheetos con elote y carne asada";
char comida_chatarra3[] = "hamburguesa con triple carne, triple queso y triple pan";
char comida_chatarra4[] = "hot dog con doble salchicha";
char comida_chatarra5[] = "mantecadas rellenas de nutella";

//costo del menu
int papas = 150;
int chetos = 190;
int hambu = 399;
int hot = 179;
int mantec = 299;

int salm = 499;
int pollo = 399;
int lente = 199;
int ensalada = 150;
int pesca = 150;

//variables al momento de pago exacto o necesesidad de cambio
int dinero_recibido;
int pago_exacto_o_cambio;


//EN ESTA PARTE SE HACE UN SWITCH PARA ELEGIR UNA DE LOS DOS OPCIONES
printf("SELECCIONA EL TIPO DE COMIDA: \n");    
printf("1. COMIDA CHATARRA \n");  //OPCION 1
printf("2. COMIDA SALUDABLE\n");  //OPCION 2
scanf("%d", &seleccion_tipo_de_comida);


switch (seleccion_tipo_de_comida) {
case 1:
    printf("\tMENU: \n");
printf("COMIDA 1: %s\n", comida_chatarra1);
printf("COMIDA 2: %s\n", comida_chatarra2);
printf("COMIDA 3: %s\n", comida_chatarra3);
printf("COMIDA 4: %s\n", comida_chatarra4);
printf("COMIDA 5: %s\n\n", comida_chatarra5);

printf("selecciona el numero de comida: \n");
scanf("%d", &seleccion_de_comida_chatarra);


    switch (seleccion_de_comida_chatarra) {
        case 1: 
        printf("elegiste la comida 1: %s\n ", comida_chatarra1);
        printf("Costo: $150\n");
        printf("1. Pago exacto o 2. cambio?\n");
        scanf("%d", &pago_exacto_o_cambio);
        if (pago_exacto_o_cambio == 2) {
        printf("con cuanto desea pagar?\n");
        scanf("%d", &dinero_recibido);
        printf("su cambio es: %d\n" , dinero_recibido - papas);
        } else {
            printf("Gracias por su compra!");
        }
        


        break;
  
        case 2:
        printf("elegiste la comida 2: %s\n", comida_chatarra2);
        printf("Costo: $190\n");
        printf("1. Pago exacto o 2. cambio?\n");
        scanf("%d", &pago_exacto_o_cambio);
        if (pago_exacto_o_cambio == 2) {
        printf("con cuanto desea pagar?\n");
        scanf("%d", &dinero_recibido);
        printf("su cambio es: %d\n" , dinero_recibido - chetos);
        } else {
            printf("Gracias por su compra!");
        }


        break;

        case 3:
        printf("elegiste la comida 3: %s\n", comida_chatarra3);
        printf("Costo: $399\n");
        printf("1. Pago exacto o 2. cambio?\n");
        scanf("%d", &pago_exacto_o_cambio);
        if (pago_exacto_o_cambio == 2) {
        printf("con cuanto desea pagar?\n");
        scanf("%d", &dinero_recibido);
        printf("su cambio es: %d\n" , dinero_recibido - hambu);
        } else {
            printf("Gracias por su compra!");
        }


        break;

        case 4:
        printf("elegiste la comida 4: %s\n", comida_chatarra4);
        printf("Costo: $179\n");
        printf("1. Pago exacto o 2. cambio?\n");
        scanf("%d", &pago_exacto_o_cambio);
        if (pago_exacto_o_cambio == 2) {
        printf("con cuanto desea pagar?\n");
        scanf("%d", &dinero_recibido);
        printf("su cambio es: %d\n" , dinero_recibido - hot);
        } else {
            printf("Gracias por su compra!");
        }


        break;
 
        case 5:
        printf("elegiste la comida 5: %s\n", comida_chatarra5);
        printf("Costo: $299\n");
        printf("1. Pago exacto o 2. cambio?\n");
        scanf("%d", &pago_exacto_o_cambio);
        if (pago_exacto_o_cambio == 2) {
        printf("con cuanto desea pagar?\n");
        scanf("%d", &dinero_recibido);
        printf("su cambio es: %d\n" , dinero_recibido - mantec);
        } else {
            printf("Gracias por su compra!");
        }


        break;

        default:
        printf("OPCION INVALIDA");
    }

    break;


case 2:
    printf("\tMENU: \n");
printf("COMIDA 1: %s\n", comida_saludable1);
printf("COMIDA 2: %s\n", comida_saludable2);
printf("COMIDA 3: %s\n", comida_saludable3);
printf("COMIDA 4: %s\n", comida_saludable4);
printf("COMIDA 5: %s\n\n", comida_saludable5);

printf("selecciona el numero de comida: \n");
scanf("%d", &seleccion_de_comida_saludable);

switch (seleccion_de_comida_saludable) {
    case 1:
        printf("elegiste la comida 1: %s\n", comida_saludable1);
        printf("Costo: $499\n");
        printf("1. Pago exacto o 2. cambio?\n");
        scanf("%d", &pago_exacto_o_cambio);
        if (pago_exacto_o_cambio == 2) {
        printf("con cuanto desea pagar?\n");
        scanf("%d", &dinero_recibido);
        printf("su cambio es: %d\n" , dinero_recibido - salm);
        } else {
            printf("Gracias por su compra!");
        }


        break;

    case 2:
        printf("elegiste la comida 2: %s\n", comida_saludable2);
        printf("Costo: $399\n");
        printf("1. Pago exacto o 2. cambio?\n");
        scanf("%d", &pago_exacto_o_cambio);
        if (pago_exacto_o_cambio == 2) {
        printf("con cuanto desea pagar?\n");
        scanf("%d", &dinero_recibido);
        printf("su cambio es: %d\n" , dinero_recibido - pollo);
        } else {
            printf("Gracias por su compra!");
        }


        break;

    case 3:
        printf("elegiste la comida 3: %s\n", comida_saludable3);
        printf("Costo: $199\n");
        printf("1. Pago exacto o 2. cambio?\n");
        scanf("%d", &pago_exacto_o_cambio);
        if (pago_exacto_o_cambio == 2) {
        printf("con cuanto desea pagar?\n");
        scanf("%d", &dinero_recibido);
        printf("su cambio es: %d\n" , dinero_recibido - lente);
        } else {
            printf("Gracias por su compra!");
        }


        break;

    case 4:
        printf("elegiste la comida 4: %s\n", comida_saludable4);
        printf("Costo: $150\n");
        printf("1. Pago exacto o 2. cambio?\n");
        scanf("%d", &pago_exacto_o_cambio);
        if (pago_exacto_o_cambio == 2) {
        printf("con cuanto desea pagar?\n");
        scanf("%d", &dinero_recibido);
        printf("su cambio es: %d\n" , dinero_recibido - ensalada);
        } else {
            printf("Gracias por su compra!");
        }


        break;
    
    case 5:
        printf("elegiste la comida 5: %s\n", comida_saludable5);
        printf("Costo: $150\n");
        printf("1. Pago exacto o 2. cambio?\n");
        scanf("%d", &pago_exacto_o_cambio);
        if (pago_exacto_o_cambio == 2) {
        printf("con cuanto desea pagar?\n");
        scanf("%d", &dinero_recibido);
        printf("su cambio es: %d\n" , dinero_recibido - pesca);
        } else {
            printf("Gracias por su compra!");
        }


        break;

    default:
    printf("OPCION INVALIDA");
    break;
    }
}

return 0;
}
