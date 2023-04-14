#include <stdio.h>

int main(void) {

  float i, horas, horasn, dineroxh;
  float hextra, extra, montoex;
  float salariototal, salario, salariobruto;
  float trabajo, bonificacion, ventas;
  float IESS, remuneracion;
  int continuar;
  
  do {

    printf("Ingrese las horas trabajadas\n");
    scanf("%f", &horas);

    printf("Ingrese el valor por hora trabajada\n");
    scanf("%f", &dineroxh);

    printf("Ingrese valor de ventas\n");
    scanf("%f", &ventas);

    horasn = 40;

    if (horas == 40) {
      salario = horas * dineroxh;
    }
    if (horas > 40 && horas <= 50) { //1
      extra = ((dineroxh * 1.1) + dineroxh);
    }
    if (horas > 50 && horas <= 55) { //2
      extra = ((dineroxh * 1.15) + dineroxh);
    }
    if (horas > 55) { //3
      extra = ((dineroxh * 1.2) + dineroxh);
    }

    trabajo = horasn * dineroxh;
    hextra = horas - 40;
    montoex = extra * hextra;
    salario = trabajo + montoex;

    printf("El dinero obtenido al trabajar es: $%.2f\n", salario);

    if (ventas <= 800) {
      bonificacion = (ventas * 0.02);
    }
    if (ventas > 800 && ventas <= 1500) {
      bonificacion = (ventas * 0.04);
    }
    if (ventas > 1500 && ventas <= 3000) {
      bonificacion = (ventas * 0.06);
    }
    if (ventas > 3000) {
      bonificacion = (ventas * 0.08);
    }

    printf("El dinero de las bonificaciones obtenidas es: $%.2f\n", bonificacion);

    salariobruto = salario + bonificacion;

    IESS = (salariobruto * 0.0945);
    salariototal = (salariobruto - IESS);

    printf("El salario total es: $%.2f\n\n", salariototal);

    remuneracion += salariototal;
    
    printf("¿Desea continuar con otro trabajador? (1 para sí, 0 para no): ");
    scanf("%d", &continuar);

  } while (continuar == 1);

  printf("La remuneracion total de todos los trabajadores es: $%.2f\n\n", remuneracion);

  return 0;
}