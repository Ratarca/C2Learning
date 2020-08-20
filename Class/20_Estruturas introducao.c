#include <stdio.h>
#include <stdlib.h>


// Defindindo estrutura
struct horario{
	// declarando estrutura aberta
	int horas;
	int minuto;
	int segundos;
	// declarando estrutura mais fechada
	}  ;
	
// Criando funções que tem como parametros estruturas criadas 
// Função teste do tipo struct horario que recebe um parametro x que tem por sua vez uma struct horario
struct horario horario_feliz (struct horario x){
	printf(" %i ",x.horas);
	return x;
	
}

int main (void) {
	
	// Declarando estrutura
	struct horario tempo_1;
	tempo_1.horas = 15;
	tempo_1.minuto = 10;
	tempo_1.segundos = 50;
	
	
	// Operacaoes com a estrutura criada
	struct horario tempo_2;
	tempo_2.horas = tempo_1.horas + 1;
	tempo_2.minuto = tempo_1.minuto - 5;
	tempo_2.segundos = tempo_1.segundos - 50;

	// Possivel declarar assim tambem {horas,minuto,segundos}
	struct horario tempo_3 = {10,25,57};
	
	// Outra maneira
	struct horario tempo_4 = {segundos = 30 , horas = 13};
	
	printf("%i : %i : %i \n",tempo_2.horas, tempo_2.minuto, tempo_2.segundos );
	
	
	// Casting : Transformação da operação para um tipo especifico
	int x = 12;
	int y = 9;
	float resultado = (float) x / y;
	
	printf("%f \n", resultado);
	
	// Usando a função que retorna um struct
	struct horario horario_estranho ;
	horario_estranho = horario_feliz(tempo_2);
	
	
	return 0;
}


