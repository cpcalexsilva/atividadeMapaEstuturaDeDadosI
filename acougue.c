#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>


#define tamanho 10



struct tipo_senha {
	int nSenha;	
};

struct tipo_fila {
	struct tipo_senha senhas[tamanho];
	int ini;
	int fim;
};

struct tipo_fila fila;

void enfileira(int nSenha) {
	if(fila.fim == tamanho) {
		printf("A fila j� est� completa, tente novamente mais tarde.\n");
		system("pause");
	} else {
		fila.senhas[fila.fim].nSenha = nSenha;		
		fila.fim++;
	}
}

struct tipo_senha desenfileira(){
	struct tipo_senha senha;
	if(fila.fim == fila.ini) {
		system("cls");
		printf("Fila vazia.\n");
		system("pause");
		
	} else {
		senha.nSenha = fila.senhas[fila.ini].nSenha;		
		for(int i = 0; i < tamanho - 1; i++) {
			fila.senhas[i].nSenha = fila.senhas[i+1].nSenha;			
		}
		fila.fim--;
		return senha;
	}
}

void imprime_fila() {
	printf(" \n composi��o da Fila:");
	for(int i = 0; i < fila.fim; i++) {
		printf("%d ", fila.senhas[i].nSenha);
	
	
	}

}

void imprimeSenhas() {
	

		printf("%d \n\n\n\n", fila.senhas[fila.ini].nSenha+1);

		 
		if(fila.senhas[fila.ini].nSenha < 1){
			printf("%d = NENHUMA SENHA ANTERIOR \n");
		} else{
				printf("%d = SENHA ANTERIOR \n", fila.senhas[fila.ini].nSenha); 
		}
				
		printf("%d = SENHA ATUAL \n", fila.senhas[fila.ini].nSenha+1); 
		
		
		
		
		if(fila.ini == fila.fim-1){
			printf("%d FIM DA FILA \n");
		} else{
				printf("%d = PR�XIMA SENHA \n", fila.senhas[fila.ini].nSenha+2); 
		}
				
		

}

void verificaFimFila() {
	if(fila.ini == fila.fim){
		printf("Finalizando sistema de senhas...");
		
		exit(0);
			
		} else{
			printf("A fila ainda n�o acabou!");
				
				
		}
	}

int main() {

int escolha=1;
    printf("*================================================================*\n");
	printf("|                          ATIVIDADE MAPA                        |\n");
	printf("|________________Sistema de senhas a�ougue Sr. Jos�______________|\n",setlocale(LC_ALL, "Portuguese"));
	printf("|                                                                |\n");
	printf("|     Aluno: Alex Donizete da Silva                              |\n");
	printf("|     RA:  1641038-5                                             |\n");
	printf("|     Modulo: 2018-52                                            |\n");
	printf("|     Disciplina: Estrutura de dados I                           |\n");
	printf("|     Professor: Me. Marcelo Lessa                               |\n");
	printf("|     Finalidade: A fila deve ter no m�ximo 10 pessoas.          |\n");
	printf("|                                                                |\n");
	printf("|                                                                |\n");
	printf("*================================================================*\n");
	printf("\n");
	
	printf("*===========================================*\n");
	printf("|               MENU DE OP��ES              |\n");
	printf("*===========================================*\n");

// se a escolha for diferente de 5, ele continua... o que inicialmente � verdade pois escolha � igual a 1
while (escolha != "")
{
	
	printf("\n --------------------------- \n");
	
	printf("\n 1 - Emitir senha.");
	printf("\n 2 - Chamar pr�xima senha.",setlocale(LC_ALL, "Portuguese"));
	printf("\n 3 - Sair ");
	
	printf("\n\n --------------------------- ");
	
	printf("\n\n Escolha uma opcao: ");
	scanf(" %d",&escolha);
	
	
	// estrutura switch
	switch (escolha) {
		case 1:
		{
			
			system("cls");
			printf("\n\n Senha emitida com sucesso. ");
			printf("\n\n Aten��o ao painel!");
			printf("\n\n Sua Senha �:  ");
			enfileira(fila.fim);
			printf("%d ", fila.fim);
			
			break;
			
		}
		
		case 2:
		{
			system("cls");
			printf("\n\n ATEN��O - CHAMADA DE SENHA: ");
			printf("\n\n\ SENHA: ");
			
			
			
			imprimeSenhas();
			desenfileira();	
			
			imprime_fila();
			
			break;
		}
		
		case 3:
		{
			system("cls");
			verificaFimFila();
			break;
		}
		
		// op��o padr�o
		default:
		{
		system("cls");
		
		
		// caso o usu�rio digite um numero acima de 5, ele ir� informar que nao existe essa op��o
		printf("\n\n Op��o escolhida inv�lida");
		printf("\n\n Favor escolher uma das op��es abaixo");
		printf("\n\n Digitando os n�mero 1, 2 ou 3");
		break;
		}
	
	}
	
	}
	
	
	

}




