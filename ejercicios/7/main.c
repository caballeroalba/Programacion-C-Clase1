/* En el programa main, dado un numero 'n' con el valor que nosotros queramos
 * definir. Comprobar si ese numero es par usando la funcion definida en
 * utils.
 * Si ese numero es par, debemos multiplicarlo por otro numero secreto que
 * nosotros definimos. Para ello debemos realizar una función de tipo estática
 * llamada multiplicar_numero_secreto donde el argumento de entrada sea el
 * numero 'n'.
 *
 * Devolver la multiplicacion del numero 'n' con el numero secreto en caso de
 * que 'n' sea par. Si no devolver -1.
 */

/* Zona para incluir las bibliotecas o las cabeceras */
#include "utils.h"
#include <stdio.h>
/* Zona para declarar la funcion estática */
int multiplicar_numero_secreto(int n){
	return n*17;
}
/* Programa Principal */
int main ()
{
	int n=8;

	if(es_par(n)==1){
		n=multiplicar_numero_secreto(n);
		printf("la multiplicación del numero n por secreto es: %d\n",n);
	}else{
		printf("no es par\n");
		return -1;
	}


}
