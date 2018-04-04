#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

typedef struct
{
  char nomerua[1000];
  int numero;
  char bairro[100];
  char cep[10];
  char cidade[100];
  int area;
  int valor;
  int arcond;
  char internet[10];
  char tvacabo[10];
  char servlav[20];
  char arrumlimp[20];
  char recep[20];
  int alugarouvender;
}tFlat;

typedef struct
{
  char nomerua[1000];
  int numero;
  char bairro[100];
  char cep[10];
  char cidade[100];
  int area;
  int valor;
  int arcond;
  char internet[10];
  char tvacabo[10];
  char servlav[20];
  char arrumlimp[20];
  char recep[20];
  char piscina[20];
  char sauna[10];
  char salagin[20];
  int alugarouvender;
}tStudio;

typedef struct
{
    char nomerua[1000];
    int numero;
    char bairro[100];
    char cep[10];
    char cidade[100];
    int alugarouvender;
    int pavimentos;
    int quartos;
    int areaterreno;
    int areacasa;
}tCasa;

typedef struct
{
    char nomerua[1000];
    int numero;
    char bairro[100];
    char cep[10];
    char cidade[100];
    int alugarouvender;
    int area;
    int quartos;
    char posicao[100];
    int valor;
    int vagas;
}tApt;

typedef struct
{
    char nomerua[1000];
    int numero;
    char bairro[100];
    char cep[10];
    char cidade[100];
    int alugarouvender;
    int area;
}tTerreno;

typedef struct
{
        tCasa casas[100];
        tApt apts[100];
        tTerreno terrenos[100];
        tFlat flats[100];
        tStudio studio[100];
}tImoveis;

static tImoveis Imoveis;

static int i = 0, j = 0, k = 0, l = 0, p = 0;

void Cadastra()
{
    system("clear || cls");
    cout <<"=============AREA DE CADASTRAMENTO DE IMOVEIS=============\n";
    char enter=0;
    char tipinho[100];

    while (1)
    {
        fflush(stdin);
        cout << "\n\tDigite um tipo de Imovel abaixo \n(CASA, APARTAMENTO, TERRENO, FLAT OU ESTUDIO)  Para SAIR digite 0: \n";
        gets(tipinho);
        if (strcmp(tipinho, "0") == 0)
        {
            for (int a = i; a < 100; a++)
            {
                Imoveis.casas[a].numero = -1;
            }
            for (int b = j; b < 100; b++)
            {
                Imoveis.apts[b].numero = -1;
            }
            for (int c = k; c < 100; c++)
            {
                Imoveis.terrenos[c].numero = -1;
            }
            for (int d = l; d < 100; d++)
            {
                Imoveis.flats[d].numero = -1;
            }
            for (int e = p; e < 100; e++)
            {
                Imoveis.studio[e].numero = -1;
            }
            break;
        }
        else if (strcmp(tipinho, "casa") == 0 || strcmp(tipinho, "Casa") == 0 || strcmp(tipinho, "CASA") == 0)
        {
            system("clear || cls");
            printf("===========CADASTRAMENTO DE CASA===========\n\tINSIRA OS DADOS SOLICITADOS:\n");
            printf("Digite o nome da rua: \n");
            gets(Imoveis.casas[i].nomerua);
            printf("Digite o numero: \n");
            scanf("%d", &Imoveis.casas[i].numero);
            fflush(stdin);
            printf("Digite o nome do bairro: \n");
            gets(Imoveis.casas[i].bairro);
            printf("Digite o numero do CEP: \n");
            gets(Imoveis.casas[i].cep);
            printf("Digite o nome da cidade: \n");
            gets(Imoveis.casas[i].cidade);
            printf("Digite a quantidade de pavimentos: \n");
            scanf("%d", &Imoveis.casas[i].pavimentos);
            printf("Digite a quantidade de quartos: \n");
            scanf("%d", &Imoveis.casas[i].quartos);
            printf("Digite a area do terreno: \n");
            scanf("%d", &Imoveis.casas[i].areaterreno);
            printf("Digite a area da casa: \n");
            scanf("%d", &Imoveis.casas[i].areacasa);
            printf("Eh para 'vender' (digite 0) ou 'alugar' (digite 1)?");
            scanf("%d", &Imoveis.casas[i].alugarouvender);
            i++;
        }
        else if (strcmp(tipinho, "apartamento") == 0 || strcmp(tipinho, "Apartamento") == 0 || strcmp(tipinho, "APARTAMENTO") == 0)
        {
            system("clear || cls");
            printf("===========CADASTRAMENTO DE APARTAMENTO===========\n\tINSIRA OS DADOS SOLICITADOS:\n");
			printf("Digite o nome da rua: \n");
            gets(Imoveis.apts[j].nomerua);
            printf("Digite o numero: \n");
            scanf("%d", &Imoveis.apts[j].numero);
            fflush(stdin);
            printf("Digite o nome do bairro: \n");
            gets(Imoveis.apts[j].bairro);
            printf("Digite o numero do CEP: \n");
            gets(Imoveis.apts[j].cep);
            printf("Digite o nome da cidade: \n");
            gets(Imoveis.apts[j].cidade);
            printf("Digite a area do apartamento: \n");
            scanf("%d", &Imoveis.apts[j].area);
            printf("Digite a quantidade de quartos: \n");
            scanf("%d", &Imoveis.apts[j].quartos);
            printf("Digite o valor do apartamento: \n");
            scanf("%d", &Imoveis.apts[j].valor);
            printf("Digite a quantidade de vagas de estacionamento do apartamento: \n");
            scanf("%d", &Imoveis.apts[j].vagas);
			printf("Digite a posicao do apartamento: \n");
            gets(Imoveis.apts[j].posicao);
            scanf("[^\n]");
            printf("Eh para 'vender' (digite 0) ou 'alugar' (digite 1)");
            scanf("%d", &Imoveis.apts[j].alugarouvender);
            j++;
        }
        else if (strcmp(tipinho, "terreno") == 0 || strcmp(tipinho, "TERRENO") == 0 || strcmp(tipinho, "Terreno")==0){

            system("clear || cls");
            printf("===========CADASTRAMENTO DE TERRENO===========\n\tINSIRA OS DADOS SOLICITADOS:\n");
			printf("Digite o nome da rua: \n");
            gets(Imoveis.terrenos[k].nomerua);
            printf("Digite o numero: \n");
            scanf("%d", &Imoveis.terrenos[k].numero);
            fflush(stdin);
            printf("Digite o nome do bairro: \n");
            gets(Imoveis.terrenos[k].bairro);
            printf("Digite o numero do CEP: \n");
            gets(Imoveis.terrenos[k].cep);
            printf("Digite o nome da cidade: \n");
            gets(Imoveis.terrenos[k].cidade);
            printf("Digite a area do terreno: \n");
            scanf("%d", &Imoveis.terrenos[k].area);
            printf("Eh para 'vender' (digite 0) ou 'alugar' (digite 1)?");
            scanf("%d", &Imoveis.terrenos[k].alugarouvender);
            k++;

		}

        else if (strcmp(tipinho, "flat") == 0 || strcmp(tipinho, "Flat") == 0 || strcmp(tipinho, "FLAT") == 0)
        {
            system("clear || cls");
            printf("===========CADASTRAMENTO DE FLAT===========\n\tINSIRA OS DADOS SOLICITADOS:\n");
            printf("Digite a area do flat: \n");
            scanf("%d", &Imoveis.flats[l].area);
            fflush(stdin);
            printf("Digite o valor do flat: \n");
            scanf("%d", &Imoveis.flats[l].valor);
            fflush(stdin);
            printf("Digite a quantidade de ar condicionados do flat: \n");
            scanf("%d", &Imoveis.flats[l].arcond);
            fflush(stdin);
            printf("Digite se tem internet no flat: \n");
            gets(Imoveis.flats[l].internet);
            printf("Digite se tem TV a cabo no flat: \n");
            gets(Imoveis.flats[l].tvacabo);
            printf("Digite se tem servico de lavanderia no flat: \n");
            gets(Imoveis.flats[l].servlav);
            printf("Digite se tem servico de limpeza para o flat: \n");
            gets(Imoveis.flats[l].arrumlimp);
            printf("Digite se tem recepcao 24h no flat: \n");
            gets(Imoveis.flats[l].recep);
            printf("Digite o numero do flat: \n");
            scanf("%d", &Imoveis.flats[l].numero);
            fflush(stdin);
            printf("Eh para 'vender' (digite 0) ou 'alugar' (digite 1)?");
            scanf("%d", &Imoveis.flats[l].alugarouvender);
            fflush(stdin);
            printf("Digite o nome do bairro: \n");
            gets(Imoveis.flats[l].bairro);
            printf("Digite o numero do CEP: \n");
            gets(Imoveis.flats[l].cep);
            printf("Digite o nome da cidade: \n");
            gets(Imoveis.flats[l].cidade);
            printf("Digite o nome da rua: \n");
            gets(Imoveis.flats[l].nomerua);
            l++;

        }
        else if (strcmp(tipinho, "estudio") == 0 || strcmp(tipinho, "Estudio") == 0 || strcmp(tipinho, "ESTUDIO") == 0)
        {
            system("clear || cls");
            printf("===========CADASTRAMENTO DE ESTUDIO===========\n\tINSIRA OS DADOS SOLICITADOS:\n");
            printf("Digite a area do estudio: \n");
            scanf("%d", &Imoveis.studio[p].area);
            fflush(stdin);
            printf("Digite o valor do estudio: \n");
            scanf("%d", &Imoveis.studio[p].valor);
            fflush(stdin);
            printf("Digite a quantidade de ar condicionados do estudio: \n");
            scanf("%d", &Imoveis.studio[p].arcond);
            fflush(stdin);
            printf("Digite se tem internet no estudio: \n");
            gets(Imoveis.studio[p].internet);
            printf("Digite se tem TV a cabo no estudio: \n");
            gets(Imoveis.studio[p].tvacabo);
            printf("Digite se tem servico de lavanderia no estudio: \n");
            gets(Imoveis.studio[p].servlav);
            printf("Digite se tem servico de limpeza para o estudio: \n");
            gets(Imoveis.studio[p].arrumlimp);
            printf("Digite se tem recepcao 24h no estudio: \n");
            gets(Imoveis.studio[p].recep);
            printf("Digite se tem piscina no estudio: \n");
            gets(Imoveis.studio[p].piscina);
            printf("Digite se tem sauna no estudio: \n");
            gets(Imoveis.studio[p].sauna);
            printf("Digite se tem sala de ginastica no estudio: \n");
            gets(Imoveis.studio[p].salagin);
            printf("Digite o numero do estudio: \n");
            scanf("%d", &Imoveis.studio[p].numero);
            fflush(stdin);
            printf("Eh para 'vender' (digite 0) ou 'alugar' (digite 1)?");
            scanf("%d", &Imoveis.studio[p].alugarouvender);
            fflush(stdin);
            printf("Digite o nome do bairro: \n");
            gets(Imoveis.studio[p].bairro);
            printf("Digite o numero do CEP: \n");
            gets(Imoveis.studio[p].cep);
            printf("Digite o nome da cidade: \n");
            gets(Imoveis.studio[p].cidade);
            printf("Digite o nome da rua: \n");
            gets(Imoveis.studio[p].nomerua);
            p++;
        }

    }

    printf("Digite ENTER para voltar ao menu.\n");
	scanf("%c", &enter);
	if(enter=='\n'){
    system("clear || cls");
    }
}

void consultaImoveis()
{
    char enter=0;
    for (int i = 0; i < 100; i++)
    {
        if (Imoveis.casas[i].numero <= 0)
        {
            cout << " ";
        }
        else
        {
            printf("\n\n************* CASA [%d] *************\n", i);
            cout << "Nome da rua: " << Imoveis.casas[i].nomerua << "\nNumero da casa: " << Imoveis.casas[i].numero << "\nBairro: " << Imoveis.casas[i].bairro << "\nCEP: " << Imoveis.casas[i].cep
            << "\nNome da cidade: " << Imoveis.casas[i].cidade  << "\nQuantidade de pavimentos: " << Imoveis.casas[i].pavimentos << "\nQuantidade de quartos: " << Imoveis.casas[i].quartos
            << "\nArea do terreno: " << Imoveis.casas[i].areaterreno << "\nArea da casa: " << Imoveis.casas[i].areacasa << endl;
            if(Imoveis.casas[i].alugarouvender == 1){
                cout << "Ela esta disponivel para alugar."<< endl;
            }else{
                cout << "Ela esta disponivel para vender."<< endl << endl;
            }
        }
        if (Imoveis.apts[i].numero <= 0)
        {
            cout << " ";
        }
        else
        {
            printf("\n\n************* APARTAMENTO [%d] *************\n", i);
            cout << "Nome da rua: " << Imoveis.apts[i].nomerua << "\nNumero do predio: " << Imoveis.apts[i].numero << "\nBairro: " << Imoveis.apts[i].bairro << "\nCEP: " << Imoveis.apts[i].cep
            << "\nNome da cidade: " << Imoveis.apts[i].cidade << "\nArea do apartamento: " << Imoveis.apts[i].area << "\nQuantidade de quartos: " << Imoveis.apts[i].quartos
            << "\nPosicao: " << Imoveis.apts[i].posicao << "\nValor: " << Imoveis.apts[i].valor << "\nVagas: " << Imoveis.apts[i].vagas << endl;
            if(Imoveis.apts[i].alugarouvender == 1){
                cout << "Ele esta disponivel para alugar."<< endl;
            }else{
                cout << "Ele esta disponivel para vender."<< endl<< endl;
            }
        }
        if (Imoveis.terrenos[i].numero <= 0)
        {
            cout << " ";
        }
        else
        {
            printf("\n\n************* TERRENO [%d] *************\n", i);
            cout << "Nome da rua: " << Imoveis.terrenos[i].nomerua << "\nNumero do predio: " << Imoveis.terrenos[i].numero << "\nBairro: " << Imoveis.terrenos[i].bairro << "\nCEP: " << Imoveis.terrenos[i].cep
            << "\nNome da cidade: " << Imoveis.terrenos[i].cidade << "\nArea do terreno: " << Imoveis.terrenos[i].area << endl;
            if(Imoveis.terrenos[i].alugarouvender == 1){
                cout << "Ele esta disponivel para alugar."<< endl;
            }else{
                cout << "Ele esta disponivel para vender."<< endl<< endl;
            }
        }

    if (Imoveis.flats[i].numero <= 0)
        {
            cout << " ";
        }
        else
        {
            printf("\n\n************* FLAT [%d] *************\n", i);
            cout << "Area do flat: " << Imoveis.flats[i].area << "\nO valor do flat: " << Imoveis.flats[i].valor << "\nA quantidade de ar condicionados: " << Imoveis.flats[i].arcond << "\nInternet: " << Imoveis.flats[i].internet
            << "\nTV a cabo: " << Imoveis.flats[i].tvacabo << "\nServico de lavanderia: " << Imoveis.flats[i].servlav <<  "\nServico de limpeza: " << Imoveis.flats[i].arrumlimp <<
            "\nRecepcao 24h: " << Imoveis.flats[i].recep << "\nNumero do flat: " << Imoveis.flats[i].numero  << "\nCidade: " << Imoveis.flats[i].cidade <<
            "\nBairro: " << Imoveis.flats[i].bairro << "\nCEP: " << Imoveis.flats[i].cep << "\nNome da rua: " << Imoveis.flats[i].nomerua << endl;
            if(Imoveis.flats[i].alugarouvender == 1){
                cout << "Ele esta disponivel para alugar."<< endl;
            }else{
                cout << "Ele esta disponivel para vender."<< endl<< endl;
            }
        }
        if (Imoveis.studio[i].numero <= 0)
        {
            cout << " ";
        }
        else
        {
            printf("\n\n************* ESTUDIO [%d] *************\n", i);
            cout << "Area do estudio: " << Imoveis.studio[i].area << "\nO valor do estudio: " << Imoveis.studio[i].valor << "\nA quantidade de ar condicionados: " << Imoveis.studio[i].arcond << "\nInternet: " << Imoveis.studio[i].internet
            << "\nTV a cabo: " << Imoveis.studio[i].tvacabo << "\nServico de lavanderia: " << Imoveis.studio[i].servlav <<  "\nServico de limpeza: " << Imoveis.studio[i].arrumlimp <<
            "\nRecepcao 24h: " << Imoveis.studio[i].recep << "\nNumero do estudio " << Imoveis.studio[i].numero  << "\nPiscina no estudio: " <<
            Imoveis.studio[i].piscina << "\nSauna no estudio: "<< Imoveis.studio[i].sauna << "\nSala de ginastica no estudio: " << Imoveis.studio[i].salagin << "\nNome da rua: " << Imoveis.studio[l].nomerua <<
            "\nBairro: " << Imoveis.studio[i].bairro << "\nCEP: " << Imoveis.studio[i].cep << "\nCidade: " << Imoveis.studio[i].cidade << endl;
            if(Imoveis.studio[i].alugarouvender == 1){
                cout << "Ele esta disponivel para alugar."<< endl;
            }else{
                cout << "Ele esta disponivel para vender."<< endl<< endl;
            }
        }
    }

    printf("\nDigite ENTER para voltar ao menu.\n");
	scanf("%c", &enter);
	scanf("[^\n]");
	if(enter=='\n'){
    system("clear || cls");
    }

}

void consultaImoveisPorTipo()
{
    char enter=0;
    char tipo[100];
    cout << "Deseja pesquisar o numero de Imoveis disponiveis por que tipo de Imoveis? ";
    cin >> tipo;
    if (strcmp(strupr(tipo), "CASA") == 0)
    {
        int totalcasas = 0;
        for (int i = 0; i < 100; i++)
        {
            if (Imoveis.casas[i].numero == -1)
            {
                continue;
            }
            else
                {
                printf("\n\n************* CASA [%d] *************\n", i);
                cout << "Nome da rua: " << Imoveis.casas[i].nomerua << "\nNumero da casa: " << Imoveis.casas[i].numero << "\nBairro: " << Imoveis.casas[i].bairro << "\nCEP: " << Imoveis.casas[i].cep
                << "\nNome da cidade: " << Imoveis.casas[i].cidade  << "\nQuantidade de pavimentos: " << Imoveis.casas[i].pavimentos << "\nQuantidade de quartos: " << Imoveis.casas[i].quartos
                << "\nArea do terreno: " << Imoveis.casas[i].areaterreno << "\nArea da casa: " << Imoveis.casas[i].areacasa << endl;
                if(Imoveis.casas[i].alugarouvender == 1){
                    cout << "Ela esta disponivel para alugar."<< endl;
                }else{
                    cout << "Ela esta disponivel para vender."<< endl<< endl;
                }
                totalcasas++;
            }
        }
        cout << endl << "Existem " << totalcasas << " casas disponiveis para vender ou alugar.\n";
    }
    else if (strcmp(strupr(tipo), "APARTAMENTO") == 0)
    {
        int totalapts = 0;
        for (int i = 0; i < 100; i++)
        {
            if (Imoveis.apts[i].numero == -1)
            {
                continue;
            }
            else
                {
                printf("\n\n************* APARTAMENTO [%d] *************\n", i);
                cout << "Nome da rua: " << Imoveis.apts[i].nomerua << "\nNumero do predio: " << Imoveis.apts[i].numero << "\nBairro: " << Imoveis.apts[i].bairro << "\nCEP: " << Imoveis.apts[i].cep
                << "\nNome da cidade: " << Imoveis.apts[i].cidade << "\nArea do apartamento: " << Imoveis.apts[i].area << "\nQuantidade de quartos: " << Imoveis.apts[i].quartos
                << "\nPosicao: " << Imoveis.apts[i].posicao << "\nValor: " << Imoveis.apts[i].valor << "\nVagas: " << Imoveis.apts[i].vagas << endl;
                if(Imoveis.apts[i].alugarouvender == 1){
                    cout << "Ele esta disponivel para alugar."<< endl;
                }else{
                    cout << "Ele esta disponivel para vender."<< endl<< endl;
                }
                totalapts++;
            }
        }
        cout << endl << "Existem " << totalapts << " apartamentos disponiveis para vender ou alugar.\n";
    }
    else if (strcmp(strupr(tipo), "TERRENO") == 0)
    {
        int totalterrenos = 0;
        for (int i = 0; i < 100; i++)
        {
            if (Imoveis.terrenos[i].numero == -1)
            {
                continue;
            }
            else
            {
                printf("\n\n************* TERRENO [%d] *************\n", i);
                cout << "Nome da rua: " << Imoveis.terrenos[i].nomerua << "\nNumero do predio: " << Imoveis.terrenos[i].numero << "\nBairro: " << Imoveis.terrenos[i].bairro << "\nCEP: " << Imoveis.terrenos[i].cep
                << "\nNome da cidade: " << Imoveis.terrenos[i].cidade << "\nArea do terreno: "  << Imoveis.terrenos[i].area << endl;
            if(Imoveis.terrenos[i].alugarouvender == 1){
                cout << "Ele esta disponivel para alugar."<< endl;
            }else{
                cout << "Ele esta disponivel para vender."<< endl<< endl;
            }
                totalterrenos++;
            }
        }
        cout << endl << "Existem " << totalterrenos << " terrenos disponiveis para vender alugar.\n";
    }
        else if (strcmp(strupr(tipo), "FLAT") == 0)
    {
        int totalflat = 0;
        for (int i = 0; i < 100; i++)
        {
            if (Imoveis.flats[i].numero == -1)
            {
                continue;
            }
            else
            {
                printf("\n\n************* FLAT [%d] *************\n", i);
                cout << "Area do flat: " << Imoveis.flats[i].area << "\nO valor do flat: " << Imoveis.flats[i].valor << "\nA quantidade de ar condicionados: " << Imoveis.flats[i].arcond << "\nInternet: " << Imoveis.flats[i].internet
                << "\nTV a cabo: " << Imoveis.flats[i].tvacabo << "\nServico de lavanderia: " << Imoveis.flats[i].servlav <<  "\nServico de limpeza: " << Imoveis.flats[i].arrumlimp <<
                "\nRecepcao 24h: " << Imoveis.flats[i].recep << "\nNumero do flat: " << Imoveis.flats[i].numero << "\nCidade: " << Imoveis.flats[i].cidade <<
                "\nBairro: " << Imoveis.flats[i].bairro << "\nCEP: " << Imoveis.flats[i].cep << "\nNome da rua " << Imoveis.flats[i].nomerua << endl;
                if(Imoveis.flats[i].alugarouvender == 1){
                cout << "Ele esta disponivel para alugar."<< endl;
            }else{
                cout << "Ele esta disponivel para vender."<< endl<< endl;
            }
                totalflat++;
            }
        }
        cout << "Existem " << totalflat << " flats disponiveis para vender alugar.\n";
    }
    else if (strcmp(strupr(tipo), "ESTUDIO") == 0)
    {
        int totalstudio = 0;
        for (int i = 0; i < 100; i++)
        {
            if (Imoveis.studio[i].numero == -1)
            {
                continue;
            }
            else
            {
                printf("\n\n************* ESTUDIO [%d] *************\n", i);
                cout << "Area do estudio: " << Imoveis.studio[i].area << "\nO valor do estudio: " << Imoveis.studio[i].valor << "\nA quantidade de ar condicionados: " << Imoveis.studio[i].arcond << "\nInternet: " << Imoveis.studio[i].internet
                << "\nTV a cabo: " << Imoveis.studio[i].tvacabo << "\nServico de lavanderia: " << Imoveis.studio[i].servlav <<  "\nServico de arrumacao ou limpeza: " << Imoveis.studio[i].arrumlimp <<
                "\nRecepcao 24h: " << Imoveis.studio[i].recep << "\nNumero do estudio: " << Imoveis.studio[i].numero << "\nPiscina no estudio: " <<
                Imoveis.studio[i].piscina << "\nSauna no estudio: "<< Imoveis.studio[i].sauna << "\nSala de ginastica no estudio: " << Imoveis.studio[i].salagin << "\nNome da rua: " << Imoveis.studio[l].nomerua <<
                "\nBairro: " << Imoveis.studio[i].bairro << "\nCEP: " << Imoveis.studio[i].cep << "\nCidade: " << Imoveis.studio[i].cidade << endl;
            if(Imoveis.studio[i].alugarouvender == 1){
                cout << "Ele esta disponivel para alugar."<< endl;
            }else{
                cout << "Ele esta disponivel para vender."<< endl<< endl;
            }
                totalstudio++;
            }
        }

        cout << "Existem " << totalstudio << " studios disponiveis para vender alugar.\n";

    }
        printf("\nDigite ENTER para voltar ao menu.\n");
        scanf("%c", &enter);
        scanf("[^\n]");
        if(enter=='\n'){
        system("clear || cls");
    }
}

void alugarPorBairro()
{
    int cont = 0;
    char enter=0;
    char bairroso[100];
    cout << "Deseja procurar por Imoveis em que bairro? ";
    cin >> bairroso;
	scanf("[^\n]");
    for (int i = 0; i < 100; i++)
    {
        if (Imoveis.casas[i].numero == -1 || Imoveis.casas[i].alugarouvender != 1 || strcmp(strupr(Imoveis.casas[i].bairro), strupr(bairroso)) != 0)
        {
            cout << "";
        }
        else
        {
            cont++;
            if(cont==1){
                cout << "\nEstao disponiveis as casas de numero:\n";
            }
            printf("\n\n************* CASA [%d] *************\n", i);
            cout << "Nome da rua: " << Imoveis.casas[i].nomerua << "\nNumero da casa: " << Imoveis.casas[i].numero << "\nBairro: " << Imoveis.casas[i].bairro << "\nCEP: " << Imoveis.casas[i].cep
            << "\nNome da cidade: " << Imoveis.casas[i].cidade  << "\nQuantidade de pavimentos: " << Imoveis.casas[i].pavimentos << "\nQuantidade de quartos: " << Imoveis.casas[i].quartos
            << "\nArea do terreno: " << Imoveis.casas[i].areaterreno << "\nArea da casa: " << Imoveis.casas[i].areacasa << endl;
            if(Imoveis.casas[i].alugarouvender == 1){
                cout << "Ele esta disponivel para alugar."<< endl;
            }else{
                cout << "Ele esta disponivel para vender."<< endl<< endl;
            }
        }
    }
    cont=0;
    for (int i = 0; i < 100; i++)
    {
        if (Imoveis.apts[i].numero == -1 || Imoveis.apts[i].alugarouvender != 1 || strcmp(strupr(Imoveis.apts[i].bairro), strupr(bairroso)) != 0)
        {
            cout << "";
        }
        else
        {
            cont++;
            if(cont==1){
               cout << "\nEstao disponiveis os apartamentos de numero:\n";
            }
                printf("\n\n************* APARTAMENTO [%d] *************\n", i);
                cout << "Nome da rua: " << Imoveis.apts[i].nomerua << "\nNumero do predio: " << Imoveis.apts[i].numero << "\nBairro: " << Imoveis.apts[i].bairro << "\nCEP: " << Imoveis.apts[i].cep
                << "\nNome da cidade: " << Imoveis.apts[i].cidade  << "\nArea do apartamento: " << Imoveis.apts[i].area << "\nQuantidade de quartos: " << Imoveis.apts[i].quartos
                << "\nPosicao: " << Imoveis.apts[i].posicao << "\nValor: " << Imoveis.apts[i].valor << "\nVagas: " << Imoveis.apts[i].vagas << endl;
            if(Imoveis.apts[i].alugarouvender == 1){
                cout << "Ele esta disponivel para alugar."<< endl;
            }else{
                cout << "Ele esta disponivel para vender."<< endl<< endl;
            }
        }
    }
    cont=0;
    for (int i = 0; i < 100; i++)
    {
        if (Imoveis.terrenos[i].numero == -1 || Imoveis.terrenos[i].alugarouvender != 1 || strcmp(strupr(Imoveis.terrenos[i].bairro), strupr(bairroso)) != 0)
        {
            cout << "";
        }
        else
        {
            cont++;
            if(cont==1){
                cout << "\nEstao disponiveis os terrenos de numero:\n";
            }
            printf("\n\n************* TERRENO [%d] *************\n", i);
            cout << "Nome da rua: " << Imoveis.terrenos[i].nomerua << "\nNumero do predio: " << Imoveis.terrenos[i].numero << "\nBairro: " << Imoveis.terrenos[i].bairro << "\nCEP: " << Imoveis.terrenos[i].cep
            << "\nNome da cidade: " << Imoveis.terrenos[i].cidade << "\nArea do terreno: "  << Imoveis.terrenos[i].area << endl;
            if(Imoveis.terrenos[i].alugarouvender == 1){
                cout << "Ele esta disponivel para alugar."<< endl;
            }else{
                cout << "Ele esta disponivel para vender."<< endl<< endl;
            }
        }
    }
    cont=0;
    for (int i = 0; i < 100; i++)
    {
        if (Imoveis.flats[i].numero == -1 || Imoveis.flats[i].alugarouvender != 1 || strcmp(strupr(Imoveis.flats[i].bairro), strupr(bairroso)) != 0)
        {
            cout << " ";
        }
        else
        {
            cont++;
            if(cont==1){
                cout << "\nEstao disponiveis os flats de numero:\n";
            }
            printf("\n\n************* FLAT [%d] *************\n", i);
            cout << "Area do flat: " << Imoveis.flats[i].area << "\nO valor do flat: " << Imoveis.flats[i].valor << "\nA quantidade de ar condicionados: " << Imoveis.flats[i].arcond << "\nInternet: " << Imoveis.flats[i].internet
            << "\nTV a cabo: " << Imoveis.flats[i].tvacabo << "\nServico de lavanderia: " << Imoveis.flats[i].servlav <<  "\nServico de limpeza: " << Imoveis.flats[i].arrumlimp <<
            "\nRecepcao 24h: " << Imoveis.flats[i].recep << "\nNumero do flat: " << Imoveis.flats[i].numero << "\nCidade: " << Imoveis.flats[i].cidade <<
            "\nBairro: " << Imoveis.flats[i].bairro << "\nCEP: " << Imoveis.flats[i].cep << "\nNome da rua: " << Imoveis.flats[i].nomerua << endl;
            if(Imoveis.flats[i].alugarouvender == 1){
                cout << "Ele esta disponivel para alugar."<< endl;
            }else{
                cout << "Ele esta disponivel para vender."<< endl<< endl;
            }
        }
    }
    cont=0;
    for (int i = 0; i < 100; i++)
    {
        if (Imoveis.studio[i].numero == -1 || Imoveis.studio[i].alugarouvender != 1 || strcmp(strupr(Imoveis.studio[i].bairro), strupr(bairroso)) != 0)
        {
            cout << " ";
        }
        else
        {
            cont++;
            if(cont==1){
                 cout << "\nEstao disponiveis os studios de numero:\n";
            }
            printf("\n\n************* ESTUDIO [%d] *************\n", i);
            cout << "Area do estudio: " << Imoveis.studio[i].area << "\nO valor do estudio: " << Imoveis.studio[i].valor << "\nA quantidade de ar condicionados: " << Imoveis.studio[i].arcond << "\nInternet: " << Imoveis.studio[i].internet
            << "\nTV a cabo: " << Imoveis.studio[i].tvacabo << "\nServico de lavanderia: " << Imoveis.studio[i].servlav <<  "\nServico de limpeza: " << Imoveis.studio[i].arrumlimp <<
            "\nRecepcao 24h: " << Imoveis.studio[i].recep << "\nNumero do estudio: " << Imoveis.studio[i].numero << "\nPiscina no estudio: " <<
            Imoveis.studio[i].piscina << "\nSauna no estudio: "<< Imoveis.studio[i].sauna << "\nSala de ginastica no estudio: " << Imoveis.studio[i].salagin << "\nNome da rua: " << Imoveis.studio[i].nomerua <<
            "\nBairro: " << Imoveis.studio[i].bairro << "\nCEP: " << Imoveis.studio[i].cep << "\nCidade: " << Imoveis.studio[i].cidade << endl;
            if(Imoveis.studio[i].alugarouvender == 1){
                cout << "Ele esta disponivel para alugar."<< endl;
            }else{
                cout << "Ele esta disponivel para vender."<< endl<< endl;
            }
        }
    }

    printf("\nDigite ENTER para voltar ao menu.\n");
	scanf("%c", &enter);
	scanf("[^\n]");
	if(enter=='\n'){
    system("clear || cls");
    }
}


void venderPorBairro()
{
    int cont = 0;
    char enter=0;
    char bairroso[100];
    cout << "Deseja procurar por Imoveis em que bairro? ";
    cin >> bairroso;
	scanf("[^\n]");
    cout << "\nEstao disponiveis as casas de numero:\n";



    for (int i = 0; i < 100; i++)
    {
        if (Imoveis.casas[i].numero <=0 || Imoveis.casas[i].alugarouvender != 0 || strcmp(strupr(Imoveis.casas[i].bairro), strupr(bairroso)) != 0)
        {
            cout << " ";
        }
        else
        {
            cont++;
            if(cont==1){
                cout << "\nEstao disponiveis as casas de numero:\n";
            }
            printf("\n\n************* CASA [%d] *************\n", i);
            cout << "Nome da rua: " << Imoveis.casas[i].nomerua << "\nNumero da casa: " << Imoveis.casas[i].numero << "\nBairro: " << Imoveis.casas[i].bairro << "\nCEP: " << Imoveis.casas[i].cep
            << "\nNome da cidade: " << Imoveis.casas[i].cidade  << "\nQuantidade de pavimentos: " << Imoveis.casas[i].pavimentos << "\nQuantidade de quartos: " << Imoveis.casas[i].quartos
            << "\nArea do terreno: " << Imoveis.casas[i].areaterreno << "\nArea da casa: " << Imoveis.casas[i].areacasa << endl;
            if(Imoveis.casas[i].alugarouvender == 1){
                cout << "Ela esta disponivel para alugar."<< endl;
            }else{
                cout << "Ela esta disponivel para vender."<< endl<< endl;
            }
        }
    }
    cont=0;

    for (int i = 0; i < 100; i++)
    {

        if (Imoveis.apts[i].numero <= 0 || Imoveis.apts[i].alugarouvender != 0 || strcmp(strupr(Imoveis.apts[i].bairro), strupr(bairroso)) != 0)
        {
            cout << "";
        }
        else
        {
            cont++;
            if(cont==1){
                cout << "\nEstao disponiveis os apartamentos de numero:\n";
            }
            printf("\n\n************* APARTAMENTO [%d] *************\n", i);
            cout << "Nome da rua: " << Imoveis.apts[i].nomerua << "\nNumero do predio: " << Imoveis.apts[i].numero << "\nBairro: " << Imoveis.apts[i].bairro << "\nCEP: " << Imoveis.apts[i].cep
            << "\nNome da cidade: " << Imoveis.apts[i].cidade  << "\nArea do apartamento: " << Imoveis.apts[i].area << "\nQuantidade de quartos: " << Imoveis.apts[i].quartos
            << "\nPosicao: " << Imoveis.apts[i].posicao << "\nValor: " << Imoveis.apts[i].valor << "\nVagas: " << Imoveis.apts[i].vagas << endl;
            if(Imoveis.apts[i].alugarouvender == 1){
                cout << "Ele esta disponivel para alugar."<< endl;
            }else{
                cout << "Ele esta disponivel para vender."<< endl<< endl;
                }
        }
    }
    cont=0;
    for (int i = 0; i < 100; i++)
    {
        if (Imoveis.terrenos[i].numero <= 0 || Imoveis.terrenos[i].alugarouvender != 0 || strcmp(strupr(Imoveis.terrenos[i].bairro), strupr(bairroso)) != 0)
        {
            cout << "";
        }
        else
        {
            cont++;
            if(cont==1){
                cout << "\nEstao disponiveis os terrenos de numero:\n";
            }
            printf("\n\n************* TERRENO [%d] *************\n", i);
            cout << "Nome da rua: " << Imoveis.terrenos[i].nomerua << "\nNumero do predio: " << Imoveis.terrenos[i].numero << "\nBairro: " << Imoveis.terrenos[i].bairro << "\nCEP: " << Imoveis.terrenos[i].cep
            << "\nNome da cidade: " << Imoveis.terrenos[i].cidade << "\nArea do terreno: " << Imoveis.terrenos[i].area << "Esta para a direcao " << Imoveis.terrenos[i].alugarouvender << endl;
            //if(Imoveis.terrenos[i].alugarouvender == 0){
        }
    }
    cont=0;
    for (int i = 0; i < 100; i++)
    {
        if (Imoveis.flats[i].numero <= 0 || Imoveis.flats[i].alugarouvender != 0 || strcmp(strupr(Imoveis.flats[i].bairro), strupr(bairroso)) != 0)
        {
            cout << "";
        }
        else
        {
            cont++;
            if(cont==1){
                cout << "\nEstao disponiveis os flats:\n";
            }
            printf("\n\n************* FLAT [%d] *************\n", i);
             cout << "Area do flat: " << Imoveis.flats[i].area << "\nO valor do flat: " << Imoveis.flats[i].valor << "\nA quantidade de ar condicionados: " << Imoveis.flats[i].arcond << "\nInternet: " << Imoveis.flats[i].internet
            << "\nTV a cabo: " << Imoveis.flats[i].tvacabo << "\nServico de lavanderia: " << Imoveis.flats[i].servlav <<  "\nServico de limpeza: " << Imoveis.flats[i].arrumlimp <<
            "\nRecepcao 24h: " << Imoveis.flats[i].recep << "\nNumero do flat: " << Imoveis.flats[i].numero << "\nCidade: " << Imoveis.flats[i].cidade <<
            "\nBairro: " << Imoveis.flats[i].bairro << "\nCEP: " << Imoveis.flats[i].cep << "\nNome da rua: " << Imoveis.flats[i].nomerua << endl;
            if(Imoveis.flats[i].alugarouvender == 1){
                cout << "Ele esta disponivel para alugar."<< endl;
            }else{
                cout << "Ele esta disponivel para vender."<< endl<< endl;
            }

        }
    }
    cont=0;
    for (int i = 0; i < 100; i++)
    {
        if (Imoveis.studio[i].numero <=0 || Imoveis.studio[i].alugarouvender != 0 || strcmp(strupr(Imoveis.studio[i].bairro), strupr(bairroso)) != 0)
        {
            cout << "";
        }
        else
        {
            cont++;
            if(cont==1){
                 cout << "\nEstao disponiveis os estudios:\n";
            }
            printf("\n\n************* STUDIO [%d] *************\n", i);
            cout << "Area do estudio: " << Imoveis.studio[i].area << "\nO valor do estudio: " << Imoveis.studio[i].valor << "\nA quantidade de ar condicionados: " << Imoveis.studio[i].arcond << "\nInternet: " << Imoveis.studio[i].internet
            << "\nTV a cabo: " << Imoveis.studio[i].tvacabo << "\nServico de lavanderia: " << Imoveis.studio[i].servlav <<  "\nServico de limpeza: " << Imoveis.studio[i].arrumlimp <<
            "\nRecepcao 24h: " << Imoveis.studio[i].recep << "\nNumero do estudio: " << Imoveis.studio[i].numero << "\nPiscina no estudio: " <<
            Imoveis.studio[i].piscina << "\nSauna no estudio: "<< Imoveis.studio[i].sauna << "\nSala de ginastica no estudio: " << Imoveis.studio[i].salagin << "\nNome da rua: " << Imoveis.studio[i].nomerua <<
            "\nBairro: " << Imoveis.studio[i].bairro << "\nCEP: " << Imoveis.studio[i].cep << "\nCidade: " << Imoveis.studio[i].cidade << endl;
            if(Imoveis.studio[i].alugarouvender == 1){
                cout << "Ele esta disponivel para alugar."<< endl;
            }else{
                cout << "Ele esta disponivel para vender."<< endl<< endl;
            }
        }
    }
    //}
    printf("\nDigite ENTER para voltar ao menu.\n");
	scanf("%c", &enter);
	scanf("[^\n]");
	if(enter=='\n'){
    system("clear || cls");
    }
}

void ImoveisPorCidade()
{
    char enter=0;
	char cidadosa[100];
	scanf("[^\n]");
	cout << "Deseja procurar por Imoveis em que cidade? ";
	cin >> cidadosa;
	for (int i = 0; i < 100; i++)
	{
		if ((Imoveis.casas[i].numero <=0) || (strcmp(strupr(Imoveis.casas[i].cidade), strupr(cidadosa)) != 0))
		{
			cout << "";
		}
		else
		{
		    printf("\n\n************* CASA [%d] *************\n", i);
            cout << "Nome da rua: " << Imoveis.casas[i].nomerua << "\nNumero da casa: " << Imoveis.casas[i].numero << "\nBairro: " << Imoveis.casas[i].bairro << "\nCEP: " << Imoveis.casas[i].cep
            << "\nNome da cidade: " << Imoveis.casas[i].cidade  << "\nQuantidade de pavimentos: " << Imoveis.casas[i].pavimentos << "\nQuantidade de quartos: " << Imoveis.casas[i].quartos
            << "\nArea do terreno: " << Imoveis.casas[i].areaterreno << "\nArea da casa: " << Imoveis.casas[i].areacasa << endl;
            if(Imoveis.casas[i].alugarouvender == 1){
                cout << "Ela esta disponivel para alugar."<< endl;
            }else{
                cout << "Ela esta disponivel para vender."<< endl<< endl;
            }
		}
		if (Imoveis.apts[i].numero <=0 || strcmp(strupr(Imoveis.apts[i].cidade), strupr(cidadosa)) != 0)
		{
			cout << "";
		}
		else
		{
		    printf("\n\n************* APARTAMENTO [%d] *************\n", i);
            cout << "Nome da rua: " << Imoveis.apts[i].nomerua << "\nNumero do predio: " << Imoveis.apts[i].numero << "\nBairro: " << Imoveis.apts[i].bairro << "\nCEP: " << Imoveis.apts[i].cep
            << "\nNome da cidade: " << Imoveis.apts[i].cidade  << "\nArea do apartamento: " << Imoveis.apts[i].area << "\nQuantidade de quartos: " << Imoveis.apts[i].quartos
            << "\nPosicao: " << Imoveis.apts[i].posicao << "\nValor: " << Imoveis.apts[i].valor << "\nVagas: " << Imoveis.apts[i].vagas << endl;
            if(Imoveis.apts[i].alugarouvender == 1){
                cout << "Ela esta disponivel para alugar."<< endl;
            }else{
                cout << "Ela esta disponivel para vender."<< endl<< endl;
            }
		}
		if (Imoveis.terrenos[i].numero <= 0 || strcmp(strupr(Imoveis.terrenos[i].cidade), strupr(cidadosa)) != 0)
		{
			cout << "";
		}
		else
        {
            printf("\n\n************* TERRENO [%d] *************\n", i);
            cout << "Nome da rua: " << Imoveis.terrenos[i].nomerua << "\nNumero do predio: " << Imoveis.terrenos[i].numero << "\nBairro: " << Imoveis.terrenos[i].bairro << "\nCEP: " << Imoveis.terrenos[i].cep
            << "\nNome da cidade: " << Imoveis.terrenos[i].cidade << "\nArea do terreno: " << "\nEle esta para " << Imoveis.terrenos[i].alugarouvender << endl;

		}
        if (Imoveis.flats[i].numero <= 0 || strcmp(strupr(Imoveis.flats[i].cidade), strupr(cidadosa)) != 0)
		{
			cout << "";
		}
		else
		{
		    printf("\n\n************* FLAT [%d] *************\n", i);
             cout << "Area do flat: " << Imoveis.flats[i].area << "\nO valor do flat: " << Imoveis.flats[i].valor << "\nA quantidade de ar condicionados: " << Imoveis.flats[i].arcond << "\nInternet: " << Imoveis.flats[i].internet
            << "\nTV a cabo: " << Imoveis.flats[i].tvacabo << "\nServico de lavanderia: " << Imoveis.flats[i].servlav <<  "\nServico de limpeza: " << Imoveis.flats[i].arrumlimp <<
            "\nRecepcao 24h: " << Imoveis.flats[i].recep << "\nNumero do flat: " << Imoveis.flats[i].numero << "\nCidade: " << Imoveis.flats[i].cidade <<
            "\nBairro: " << Imoveis.flats[i].bairro << "\nCEP: " << Imoveis.flats[i].cep << "\nNome da rua: " << Imoveis.flats[i].nomerua << endl;
            if(Imoveis.flats[i].alugarouvender == 1){
                cout << "Ele esta disponivel para alugar."<< endl;
            }else{
                cout << "Ele esta disponivel para vender."<< endl<< endl;
            }

		}
		if (Imoveis.studio[i].numero <= 0 || strcmp(strupr(Imoveis.studio[i].cidade), strupr(cidadosa)) != 0)
		{
			cout << "";
		}
		else
		{
		    printf("\n\n************* ESTUDIO [%d] *************\n", i);
             cout << "Area do estudio: " << Imoveis.studio[i].area << "\nO valor do estudio: " << Imoveis.studio[i].valor << "\nA quantidade de ar condicionados: " << Imoveis.studio[i].arcond << "\nInternet: " << Imoveis.studio[i].internet
            << "\nTV a cabo: " << Imoveis.studio[i].tvacabo << "\nServico de lavanderia: " << Imoveis.studio[i].servlav <<  "\nServico de arrumacao ou limpeza: " << Imoveis.studio[i].arrumlimp <<
            "\nRecepcao 24h: " << Imoveis.studio[i].recep << "\nNumero do estudio: " << Imoveis.studio[i].numero  << "\nPiscina no estudio: " <<
            Imoveis.studio[i].piscina << "\nSauna no estudio: "<< Imoveis.studio[i].sauna << "\nSala de ginastica no estudio: " << Imoveis.studio[i].salagin << "\nNome da rua: " << Imoveis.studio[i].nomerua <<
            "\nBairro: " << Imoveis.studio[i].bairro << "\nCEP: " << Imoveis.studio[i].cep << "\nCidade: " << Imoveis.studio[i].cidade << endl;
            if(Imoveis.studio[i].alugarouvender == 1){
                cout << "Ele esta disponivel para alugar."<< endl;
            }else{
                cout << "Ele esta disponivel para vender."<< endl<< endl;
            }
		}
	}

    printf("\nDigite ENTER para voltar ao menu.\n");
	scanf("%c", &enter);
	scanf("[^\n]");
	if(enter=='\n'){
    system("clear || cls");
    }
}

void menu(){

	int opcao = 0;

	while(1){
        printf("\n\n============ESTRELINHA IMOBILIARIA============\n\nEscolha uma opcao:\n\n");
        printf("1. Cadastrar Imovel.\n");
        printf("2. Consutar Imovel.\n");
        printf("3. Consutar Imovel por tipo.\n");
        printf("4. Consultar por Cidade.\n");
        printf("5. Consultar imoveis para vender por bairro.\n");
        printf("6. Consultar imoveis para alugar por bairro.\n");
        printf("0. Para encerrar.\n");

        scanf("%d", &opcao);

        switch (opcao){
            case 0:
                exit(0);
            case 1:
                Cadastra();
                //menu();
                break;
            case 2:
                consultaImoveis();
                //menu();
                break;
            case 3:
                consultaImoveisPorTipo();
                break;
            case 4:
                ImoveisPorCidade();
                break;
            case 5:
                venderPorBairro();
                break;
            case 6:
                alugarPorBairro();
                break;

        }
	}
}

int main()
{
	menu();

	return 0;
}
