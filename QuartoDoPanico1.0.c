#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char cMacaneta = 'n', cChavePorta = 'n', cChaveCadeado = 'n', cLinha = 'n', cClipe = 'n', cEscada = 'n', cRevistarQuarto = 'n'; 

void exibirInventario(int iConhece)
{
	if(iConhece == 1){
		printf("|------------------------- INVENTARIO ----------------------------------|\n");
		printf("| MACANETA | CHAVE DA PORTA | CHAVE DO CADEADO | LINHA | CLIPE | ESCADA |\n");
		printf("|    %c     | 	   %c        | 	     %c         |   %c   |   %c   |   %c    |\n", cMacaneta, cChavePorta, cChaveCadeado, cLinha, cClipe, cEscada);
		printf("|__________|________________|__________________|_______|_______|________|\n\n");
	}else{
		printf("Voce ainda nao sabe como sair?\n\n");
	}
	
		
}

int main(int argc, char *argv[]) {
	
	
	int iDirecao;
	int iLoop = 0;
	int iItem = 0;
	char* cItem[7];
	int iSabe = 0;
	
	//Enderecos para vetor
	cItem[iItem++] = &cMacaneta;
	cItem[iItem++] = &cChavePorta;
	cItem[iItem++] = &cChaveCadeado;
	cItem[iItem++] = &cLinha;
	cItem[iItem++] = &cClipe;
	cItem[iItem++] = &cEscada;
	cItem[iItem++] = &cRevistarQuarto;
	
	
	do{
		exibirInventario(iSabe);
	
		printf("Voce em uma sala preso. Na sala possui quatro lugares distintos:\n");
		printf("1 - Analisar quarto\n");
		printf("2 - Uma mesa\n");
		printf("3 - Uma lixeira\n");
		printf("4 - Um ralo de esgoto no chao\n");
		printf("5 - Uma luminaria no teto\n");
		printf("6 - Carregar Jogo \n");
		printf("0 - Salvar \n");
		printf("Para onde deseja ir?\n");
		printf("Digite o numero do local: ");
		scanf("%i", &iDirecao);
		
		
		
		if(iDirecao == 1)
		{
			system("cls");
			exibirInventario(iSabe);
			int i, f, n, j;
			
			if(cRevistarQuarto == 'n'){
				for(i = 0; i <= 100; i = i + 10){
					for(f = 0; f <= 100; f++){
						printf("Analisando Quarto: ");
						printf(" %i", i);
						printf("%");
						sleep(1);
						system("cls");
						break;
					}
				
				}//fim primeiro for
				iSabe = 1;
				cRevistarQuarto = 's';
				
				printf("Ooouhh uma escada, ela podera ser util para mim!!\n\n");
				
				printf("======VOCE OBTEVE UMA ESCADA======\n\n");
				
				cEscada = 's';
				system("PAUSE");
				system("cls");
				
			}
			printf("A porta está trancada, esta faltando a maçaneta e possui um cadeado trancando a porta!!.\n");
			
			//Verifica se possui a maçaneta
			if(cMacaneta == 'n')
			{
				printf("Voce ainda não possui a macaneta!\n");
			}else {
				printf("Voce ja possui a macaneta!\n");
			}
			
			//Verifica se possui chave da porta
			if(cChavePorta == 'n')
			{
				printf("Voce ainda não possui a chave da porta!\n");
			}else {
				printf("Voce ja possui a chave da porta!\n");
			}
			
			// Verifica se possui chave do cadeado
			if(cChaveCadeado == 'n')
			{
				printf("Voce ainda não possui a chave do cadeado!\n");
			}else {
				printf("Voce ja possui a chave do cadeado!\n");
			}
			
			//Verifica se possui todos os itens para sair
			if(cMacaneta == 's' && cChavePorta == 's' && cChaveCadeado == 's')
			{
				//Fim de Jogo
				system("cls");
				int i, f, n, j, c, r, t, z;
				printf("Finallmente estou com todos os itens!!\n");
				sleep(3);
				for(n = 0; n <= 100; n = n + 10){
					for(j = 0; j <= 100; j++){
						printf("Colocando a macaneta: ");
						printf(" %i", n);
						printf("%");
						sleep(1);
						system("cls");
						break;
					}
				
				}//fim primeiro for
				for(c = 0; c <= 100; c = c + 10){
					for(r = 0; r <= 100; r++){
						printf("Consertando macaneta: 100\n");
						printf("Destrancando cadeado: ");
						printf(" %i", c);
						printf("%");
						sleep(1);
						system("cls");
						break;
					}
				
				}//fim segundo for
				for(i = 0;i <= 100; i = i + 10){
					for(f = 0; f <= 100; f++){
						printf("Consertando macaneta: 100\n");
						printf("Destrancando cadeado: 100\n");
						printf("Destrancando porta: ");
						printf(" %i", i);
						printf("%");
						sleep(1);
						system("cls");
						break;
					}
				
				}//fim terceiro for
				for(t = 0;t <= 100; t = t + 10){
					for(z = 0; z <= 100; z++){
						printf("Consertando macaneta: 100\n");
						printf("Destrancando cadeado: 100\n");
						printf("Destrancando porta: 100\n");
						printf("Saindo: ");
						printf(" %i", t);
						printf("%");
						sleep(1);
						system("cls");
						break;
					}
				
				}//fim quarto for
				system("cls");
				printf("Consegui, foi mais facil do que imaginei\n\n ");
				sleep(4);
				system("cls");
				printf("Obrigado por ter jogado meu jogo !! (o^ ^o)\n\n");
				printf("===================== CREDITOS =====================\n\n");
				printf("Inspirado pelo canal : Zurubabel\n\n");
				printf("Versao melhorada feita por: Gabriel Santos da Silva\n\n");
				printf("====================================================\n\n");
				
				system("PAUSE");
				system("cls");
				exit(1);
				
			}
					
			system("PAUSE");
			system("cls");
		
		}//Fechamento da opcao 1 - Porta de saida
		
		
		else if (iDirecao == 2)
		{
			int iLoopGaveta = 0;
			int iGaveta = 0;
			
			
			while(iLoopGaveta != 1)
			{
				
				system("cls");
				int i, f;
				exibirInventario(iSabe);
				
				printf("Neste canto possui uma mesa e a mesa com tres gavetas!\n");
				printf("Quais delas voce deseja abrir?\n");
				printf("1 - Gaveta 1\n2 - Gaveta 2\n3 - Gaveta 3 \n4 - Sair\n");
				printf("Escolha a gaveta que voce deseja abrir: ");
				scanf("%i", &iGaveta);
				
				switch(iGaveta)
				{
					//Gaveta 1
					case 1:
						for(i = 0; i <= 100; i = i + 10){
							for(f = 0; f <= 100; f++){
								printf("Vasculhando gaveta: ");
								printf(" %i", i);
								printf("%");
								sleep(1);
								system("cls");
								break;
							}
						}//fim primeiro for
					
					
						printf("Ao abrir  a primeira gaveta, voce nao ve nada de interessante!\n");
						break;
						
					//Gaveta 2
					case 2:
						
						for(i = 0; i <= 100; i = i + 10){
							for(f = 0; f <= 100; f++){
								printf("Vasculhando gaveta: ");
								printf(" %i", i);
								printf("%");
								sleep(1);
								system("cls");
								break;
							}
						}//fim primeiro for
						
						if(cMacaneta == 'n')
						{
							printf("Voce encontrou uma velha macaneta!\n");
							printf("\n\n");
							printf("====VOCE OBTEVE A MACANETA====\n\n");
							cMacaneta = 's';
						}else{
							printf("Gaveta esta vazia!\n");
							break;
						}
						
						break;
					//Gaveta 3
					case 3:
						for(i = 0; i <= 100; i = i + 10){
							for(f = 0; f <= 100; f++){
								printf("Vasculhando gaveta: ");
								printf(" %i", i);
								printf("%");
								sleep(1);
								system("cls");
								break;
							}
						}//fim primeiro for
						
						printf("Ao abrir  a terceira gaveta, voce toma um susto, esta vazia!\n");
						break;
						
					//Sair
					case 4:
						iLoopGaveta = 1;
						break;
				}//Fechamento do Switch
			
			
			system("PAUSE");
			system("cls");
			
			}// Fechamento While da opcao 2 - Mesa
			
		}//Fechamento da opcao 2 - mesa
		
		else if(iDirecao == 3)
		{
			int iLoopLixeira = 0;
			
			while(iLoopLixeira != 1)
			{
				system("cls");
				exibirInventario(iSabe);
				int iMenu;
				int i, j, n, f;
				
				printf("Voce avista uma lixeira cheia de papeis.\n");
				printf("O que deseja fazer? \n1 - Verificar a lixeira\n2 - Voltar\n");
				printf("Acao: ");
				scanf("%i", &iMenu);
				
				switch(iMenu){
					case 1:
						
						for(i = 0; i <= 100; i = i + 10){
							for(f = 0; f <= 100; f++){
								printf("Vasculhando lixeira: ");
								printf(" %i", i);
								printf("%");
								sleep(1);
								system("cls");
								break;
							}
						}
						
						if(cLinha == 'n' && cClipe == 'n')
							{
								printf("Voce encontrou um pedaço de Linha e um Clipe!\n");
								printf("\n\n");
								printf("====VOCE OBTEVE um pedaço de LINHA====\n");
								printf("\n\n");
								printf("====VOCE OBTEVE um CLIPE====\n\n");
								cLinha = 's';
								cClipe = 's';
							}else{
								printf("Lixeira esta vazia!\n");
								break;
							}
							break;
							
						
					case 2:
						for(j = 0; j < 1; j++){
							for(n = 0; n < 5; n++){
								printf("Voltando.");
								sleep(1);
								system("cls");
								printf("Voltando..");
								sleep(1);
								system("cls");
								printf("Voltando...");
								sleep(1);
								system("cls");
								iLoopLixeira = 1;
								break;
							}
						}
						break;
						
				}//final switch
				
				
			system("PAUSE");
			system("cls");
			}
		}
		
		else if(iDirecao == 4)
		{
			int iLoopRalo = 0;
			
			while(iLoopRalo != 1)
			{
				system("cls");
				exibirInventario(iSabe);
				
				int iMenu;
				int i, j, n, f;
				
				printf("Voce avista um Ralo e dentro dele possui algo.\n");
				printf("O que deseja fazer? \n1 - Verificar ralo\n2 - Voltar\n");
				printf("Acao: ");
				scanf("%i", &iMenu);
				
				switch(iMenu){
					case 1:
						
						for(i = 0; i <= 100; i = i + 10){
							for(f = 0; f <= 100; f++){
								printf("Vasculhando ralo: ");
								printf(" %i", i);
								printf("%");
								sleep(1);
								system("cls");
								break;
							}
						}
						
						if(cLinha == 's' && cClipe == 's' && cChaveCadeado == 'n')
						{
							printf("Voce conseguiu pegar uma chave!! Essa deve ser a chave do cadeado!\n");
							printf("\n\n");
							printf("====VOCE OBTEVE a CHAVE DO CADEADO====\n");
							cChaveCadeado = 's';
							
						}
						else if(cLinha == 's' && cClipe == 's' && cChaveCadeado == 's')
						{ 	
							printf("Parece que nao a mais nada por aqui!!\n\n");
							break;
						}else{
								printf("Parece que preciso de algo para alcancar esse objeto!\n");
								break;
							}
							break;
							
						
					case 2:
						for(j = 0; j < 1; j++){
							for(n = 0; n < 5; n++){
								printf("Voltando.");
								sleep(1);
								system("cls");
								printf("Voltando..");
								sleep(1);
								system("cls");
								printf("Voltando...");
								sleep(1);
								system("cls");
								iLoopRalo = 1;
								break;
							}
						}
						break;
						
				}//final switch
				
				
			system("PAUSE");
			system("cls");	
			}
			
			
		}
		
		else if(iDirecao == 5)
		{
			int iLoopLuminaria = 0;
			
			while(iLoopLuminaria != 1)
			{
				system("cls");
				exibirInventario(iSabe);
				int iMenu;
				int i, j, n, f;
				
				printf("Voce avista uma luminaria no teto!!\n");
				printf("O que deseja fazer? \n1 - Verificar a luminaria\n2 - Voltar\n");
				printf("Acao: ");
				scanf("%i", &iMenu);
				
				switch(iMenu){
					case 1:
						
						for(i = 0; i <= 100; i = i + 10){
							for(f = 0; f <= 100; f++){
								printf("Vasculhando a luminaria: ");
								printf(" %i", i);
								printf("%");
								sleep(1);
								system("cls");
								break;
							}
						}
						
						if(cEscada == 's' && cChavePorta == 'n')
							{
								printf("Voce encontrou uma chave, esta chave deve ser daquela porta!\n");
								printf("\n\n");
								printf("====VOCE OBTEVE A CHAVE DA PORTA====\n");
								
								cChavePorta = 's';
								
							}else{
								printf("Não a nada na luminaria!\n");
								break;
							}
							break;
							
						
					case 2:
						for(j = 0; j < 1; j++){
							for(n = 0; n < 5; n++){
								printf("Voltando.");
								sleep(1);
								system("cls");
								printf("Voltando..");
								sleep(1);
								system("cls");
								printf("Voltando...");
								sleep(1);
								system("cls");
								iLoopLuminaria = 1;
								break;
							}
						}
						break;
						
				}//final switch
				
				
			system("PAUSE");
			system("cls");
			}
		}
		
		else if(iDirecao == 0)
		{
			
			//Decisao de Save
			system("cls");
			printf("\n\n");
			int i, f;
			char cDecisao;
			printf("Deseja realizar o save? (s/n) \n");
			scanf("%s", &cDecisao);
			if(cDecisao == 's' || cDecisao == 'S'){
				//Salva jogo
			
				FILE *pArqSave;
				
				int iLoopSave;
				char cItensSave[8];
				
				pArqSave = fopen("Save.txt", "w");
				if(pArqSave == NULL){
					fputs("Erro no arquivo", stderr);
					exit(1);
				}// Fechamento if
				
				//Inserir caractere de fim de string
				cItensSave[7] = '\0'; 
				
				for(iLoopSave = 0; iLoopSave <7; iLoopSave++){
					cItensSave[iLoopSave] = *(cItem[iLoopSave]);
					
				}
				//Limpa buffer
				fflush(pArqSave);
				
				//SAlva 
				fputs(cItensSave, pArqSave);
				
				//Fecha arquivo save
				fclose(pArqSave);
			
			}//Fechamento decisao
			system("cls");
			for(i = 0; i <= 100; i = i + 20){
				for(f = 0; f <= 100; f++){
					printf("Salvando ");
					printf(" %i", i);
					printf("%");
					sleep(1);
					system("cls");
					break;
				}
			}
			
			printf("Salvamento realizado com sucesso!!\n\n");
			system("PAUSE");
			system("cls");
			
		}//Fechamento Else if Salvar jogo
		
		else if(iDirecao == 6)
		{
			//Load do jogo
			system("cls");
			printf("\n\n");
			int i, f;
			char cDecisao;
			printf("Deseja realizar o load? (s/n) \n");
			scanf("%s", &cDecisao);
			if(cDecisao == 's' || cDecisao == 'S'){
				//Realizar o load
				FILE *pArqLoad;
				int iLoopLoad;
				char cItensLoad[8];
				pArqLoad = fopen("Save.txt", "r");
				if(pArqLoad != NULL){
					//Realiza o load caso exista arquivo
					if(fgets(cItensLoad, 8, pArqLoad) != NULL){
						puts(cItensLoad);
					}
				}// Fechamento if
				
				//Fechar arquivo de Load
				fclose(pArqLoad);
				
				//Loop para preencher variaveis
				for(iLoopLoad = 0; iLoopLoad < 7;iLoopLoad++){
					*(cItem[iLoopLoad])= cItensLoad[iLoopLoad];
				}
			}//Fechamento if decisao
			system("cls");
			for(i = 0; i <= 100; i = i + 20){
				for(f = 0; f <= 100; f++){
					printf("trazendo de volta o jogo salvo ");
					printf(" %i", i);
					printf("%");
					sleep(1);
					system("cls");
					break;
				}
			}
			
			printf("Load realizado com sucesso!!\n\n");
			system("PAUSE");
			system("cls");
		}//Fechamento decisao load
		
		
		
	
	}while (iLoop != 1);
	system("PAUSE");
	return 0;
}
