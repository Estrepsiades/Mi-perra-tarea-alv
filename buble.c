#include <stdio.h>
void presentacion(){

    printf("Universidad Nacional Autonoma De Mexico \n");
    printf("Facultad De Estudios Superiores Aragon \n");
    printf("Ingenieria Electrica Electronica \n");
    printf("Grupo 1106 \n");
    printf("Hernandez Reyna Samuel Alejandro \n");

}
void burbuja(int array[], int size) {
	
	for (int step = 0; step < size - 1; ++step) {
		
		for (int i = 0; i < size - step - 1; ++i) {
			

			if (array[i] > array[i + 1]) {
				
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
}

void imprimirArray(int array[], int size) {
	for (int i = 0; i < size; ++i) {
		printf("%d  ", array[i]);
	}
	printf("\n");
}

int main() {
	int data[5];
    presentacion();
	printf("Introducir los 5 numeros \n");
	for( int i = 1 ; i <= 5; ++i){
		printf("\n Numero %d ", i);
		scanf("%d", &data[i-1]);
	}
	
	int size = sizeof(data) / sizeof(data[0]);
	
	burbuja(data, size);
	
	printf("Array ordenado:\n");
	imprimirArray(data, size);
}