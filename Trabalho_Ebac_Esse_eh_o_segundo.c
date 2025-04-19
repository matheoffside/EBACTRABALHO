#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>


int registro()
{
                         	system("cls");

char arquivo[40];
char cpf[40];
char nome[40];
char sobrenome[40];
char cargo[40];


                            printf("Digite o cpf a ser cadastrado: ");
                            scanf("%s", cpf);
                            
                                    strcpy(arquivo, cpf);
                            
                                    
                                    FILE *file;
                                    file = fopen(arquivo, "w");
                                    fprintf(file,cpf);
                                    fclose(file);
                                 
                                    file = fopen(arquivo, "a");
                                    fprintf(file,",");
                                    fclose(file);
                                 
                                 
                            printf("Digite o nome a ser cadastrado: ");
                            scanf("%s", nome);
                            
                                    file = fopen(arquivo, "a");
                                    fprintf(file,nome);
                                    fclose(file);
                                    
                                    file = fopen(arquivo, "a");
                                    fprintf(file,",");
                                    fclose(file);
                                    
                            printf("Digite o sobrenome a ser cadastrado: ");
                            scanf("%s", sobrenome);
                            
                                    file = fopen(arquivo, "a");
                                    fprintf(file,sobrenome);
                                    fclose(file);
                                    
                                    file = fopen(arquivo, "a");
                                    fprintf(file,",");
                                    fclose(file);
                                    
                           printf("Digite o cargo: ");
                           scanf("%s", cargo);
                           
                                    file = fopen(arquivo, "a");
                                    fprintf(file,cargo);
                                    fclose(file);
                                    
                            printf("\n\nOs dados foram cadastrados!\n");
                                    
                           system("pause");
                           
}






int consulta()
{
setlocale(LC_ALL, "portuguese");
 
   char cpf[40];
   char conteudo[200];
   
                              printf("Digite o CPF a ser consultado: ");
                              scanf("%s",cpf);
                          
                              FILE *file;
                              file = fopen(cpf,"r");
                    
                    if(file == NULL)
                    {
                    	printf("Arquivo não localizado");
					}

                    while(fgets(conteudo, 200, file) !=NULL)
                    {
                    	      printf("\nEssas são as informações do usuario: ");
                    	      printf("%s", conteudo);
                         	  printf("\n\n");
					}
	                          system("pause");

}



int deletar()
{
	
 char cpf[40];
    
                        printf("Digite o cpf do usuario a ser deletado: ");
                        scanf("%s", cpf);
                  
                        remove(cpf);
                        
                  FILE *file;
                  file = fopen(cpf, "r");
                  
                  if(file == NULL)
                  {
                  	     printf("Esse usuario não se encontra no sistema!");
                  	     system("pause");
                  	     
				  }
}





int main()
{
	setlocale(LC_ALL, "portuguese"); 
	
	//variaveis aqui abaixo:
	int opcao=0;
	int x=1;
	
	
                  for(x=1;x=1;)
				  {
				         system("cls");
	
	                     printf("Bem vindo ao cartorio da EBAC!\n\n");
	                     printf("(1) Registrar nomes\n");
	                     printf("(2) Consultar nomes\n");
	                     printf("(3) Deletar nomes\n");
	                     printf("(4) Sair do sistema\n\n");
	                     printf("Por favor escolha uma opção acima: ");
	                     scanf("%d", &opcao);
	                     
	                     switch(opcao)
	                     {
	                     	case 1:
	                     	registro();
	                     	break;
	                     	
	                     	case 2:
	                     	consulta();
	                     	break;
	                     	
	                     	case 3:
	                     	deletar();
	                     	break;
	                     	
	                     	case 4: 
                        	system("cls"); // para atualizar a pagina 
                        	printf("Obrigado por usar o sistema\n\n\n");
                        	return 0;
                        	break;
                        	
	                     	default:
	                     	printf("Essa opção não está disponivel!");
	                     	break;
	                     	
	                     	
						 }
	              }
	
}






