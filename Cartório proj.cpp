#include <stdio.h> //Biblioteca de comunica��o de usu�rio
#include <stdlib.h> //Biblioteca de aloca��o de espea�o de mem�ria
#include <locale.h> //Biblioteca de aloca��es de tecto por regi�o
#include <string.h>  //Biblioteca que armazena as strings

int registro()
{
	setlocale(LC_ALL, "Portuguese");
	
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite seu CPF por favor:");
	scanf("%s", cpf); 
	
	strcpy(arquivo, cpf); //Respons�vel por copiar os dados do cpf para o arquivos
	FILE *file; //cria o aqruivo
	file = fopen(arquivo, "w"); //cria arquivo
	fprintf(file,cpf); //salvo o valor da vari�vel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("DIgite o nome a ser cadstrado: ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite seu cargo: ");
	scanf("%s", cargo);
	
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	system("pause");
	
}

int consultar()
{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado:");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
	printf("N�o foi poss�vel abrir o arquivo, n�o localizado! \n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)	
	{
		printf("\nEssas s�o as informa��es do usu�rio");
		printf("%s", conteudo);
		printf("\n\n");
	}
	system("pause");
	
}

int deletar()
{
	char cpf[40];	
	printf("Digite o CPF do usu�rio a ser deletado:");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
	printf("O usu�rio n�o se encontra no sistema. \n");
	system("pause");
	}
}

int main ()
{
	int opcao=0; //Definindo as vari�veis 
	int laco=1;
	
	for (laco=1;laco==1;)
	{

	system("cls");
		
	switch(opcao)
	{
	
	case 1:
	registro();
	break;
	
	
	case 2:
	consultar();
	break;
	
	case 3:
	deletar();
	break;
	
	case 4:
	printf("Obrigado por utilizar o nosso sistema!\n");
	return 0;
	break;
	
	default:
		printf("Essa op��o n�o est� dispon�vel\n");
		system("pause");
		break;
		}
setlocale(LC_ALL, "Portuguese"); //Denifinindo as linguagens

printf("### Cart�rio do Marinho ###\n\n"); //Inicio
printf("Escolha a op��o desejada do menu: \n\n");
printf("\t1 Registrar nomes\n");
printf("\t2 Consultar nomes\n");
printf("\t3 Deletar nomes\n\n"); 
printf("\t4 Sair do sistema\n\n"); 
printf("Op��o: ");//Fim do menu

scanf("%d",&opcao); //Armazenando as escolha do usu�rio	

system("cls");

//Fim da sele��o

}

}











