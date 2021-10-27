#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int i;
char num_voo[4];
char data_saida[10];
char num_data[8];
char controle_funcao;
char horario_saida[5];
char num_horario[4];
char qtd_passageiros[4];

bool _is_a_number(char string[]){
	for(i=0;i<strlen(string);i++){
		char caractere_enesimo_string[strlen(string)];
		caractere_enesimo_string[i] = (int)string[i] - 48;
		if(caractere_enesimo_string[i]<0||caractere_enesimo_string[i]>9){
			return false;
		}
	}
}

bool _is_diferente_zero(char string[]){
	for(i=0;i<strlen(string);i++){
		char caractere_enesimo_string[strlen(string)];
		caractere_enesimo_string[i] = (int)string[i] - 48;
		if(caractere_enesimo_string[i]==0){
			return false;
		}
	}
}

char verifica_qtd_passageiro(){
	do{
		printf("\nDigite a quantidade de passageiros do voo:");
		scanf("%s",&qtd_passageiros);
		if(strlen(qtd_passageiros)==2||strlen(qtd_passageiros)==3){
				if(_is_a_number(qtd_passageiros)==true){
					printf("\nTODOS CHAR SAO NUMEROS");
					return 0;
				}
				else{
					printf("\nOs digitos do numero sao invalidos");
				};	
		}
		else{
			printf("\nO numero deve possuir 2 ou 3 digitos");
		};	
	}while(_is_a_number(qtd_passageiros)!=true||strlen(qtd_passageiros)!=2||strlen(qtd_passageiros)!=3);
}

char verifica_num_voo(){
	do{
		printf("\nDigite o numero do voo:");
		scanf("%s",&num_voo);
		if(strlen(num_voo)==4){
				if(_is_a_number(num_voo)==true){
				printf("\nE um numero");
				return 0;
				}
				else{
					printf("\nOs digitos do numero sao invalidos\nSe quiser cancelar a operacao digite CANCELAR");
				};	
		}
		else if(num_voo[0]=='C'&&num_voo[1]=='A'&&num_voo[2]=='N'&&num_voo[3]=='C'&&num_voo[4]=='E'&&num_voo[5]=='L'&&num_voo[6]=='A'&&num_voo[7]=='R'){
			printf("\nCANCELANDO");
			return 0;
		}
		else{
			printf("\nO numero deve possuir 4 digitos\n\tSe quiser cancelar a operacao digite CANCELAR\n");
		};	
	}while(_is_a_number(num_voo)!=true||strlen(num_voo)!=4);
}

char verifica_data_voo(){
	do{
		printf("\nDigite a data do voo:");
		scanf("%s",&data_saida);
		for(i=0;i<8;i++){
			if(i<2){
				num_data[i]=data_saida[i];
			}
			else if(i>=2&&i<4){
				num_data[i]=data_saida[i+1];
			}
			else if(i>=4&&i<7){
				num_data[i]=data_saida[i+2];
			}
		}
		if(strlen(data_saida)==10&&data_saida[2]=='/'&&data_saida[5]=='/'){
				if(_is_a_number(num_data)==true){
				printf("\nE um numero");
				return 0;
				}
				else{
					printf("\nOs digitos do numero sao invalidos");
				};	
		}
		else{
			printf("\nA data deve estar no formato DD/MM/AAAA");
		};	
	}while(_is_a_number(num_data)!=true||strlen(data_saida)!=10);
}

char verifica_horario_voo(){
	do{
		printf("\nDigite o horario de saida do voo:");
		scanf("%s",&horario_saida);
		for(i=0;i<8;i++){
			if(i<2){
				num_horario[i]=horario_saida[i];
			}
			else if(i>=2&&i<4){
				num_horario[i]=horario_saida[i+1];
			}
		}
		if(strlen(horario_saida)==5&&horario_saida[2]==':'){
				if(_is_a_number(num_horario)==true){
					printf("\nE um numero");
					return 0;
				}
				else{
					printf("\nOs digitos do numero sao invalidos");
				};	
		}
		else{
			printf("\nO horario deve ser no formato HH:MM");
		};	
	}while(_is_a_number(num_horario)!=true||strlen(horario_saida)!=5);
}

void cadastra_voo(){
	verifica_num_voo();
}

main(){
	cadastra_voo();
    return 0;
}
