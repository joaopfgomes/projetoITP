#include <stdio.h>
#include <string.h>
#include <projeto.h>

int main() {
    //DECLARAÇÃO DE VARIÁVEIS GLOBAIS E DO ARQUIVO;
    FILE *imagem; 
    int dimx, dimy;
   char respostainicial[128];
   char console[128];


   printf("BEM VINDO, DIGITE image PARA CRIAR SUA IMAGEM OU open PARA ABRIR UMA EXISTENTE \n");
   scanf("%s", resposta);

   do{
    printf("VOCÊ NÃO PODE CUSTOMIZAR UMA IMAGEM SEM CRIA-LA, DIGITE image \n");
   } while (strcmp(resposta, "image") != 0)

    if (strcmp(resposta, "image") == 0){
    criar_imagem();

   do {
    scanf("%s", console);
    if (strcmp(console, "color") == 0){
    colorir_imagem();    
    }
    if (strcmp(console, "clear") == 0){
    limpa_imagem();    
    }
    if (strcmp(console, "rect") == 0){
    cria_retangulo();    
    }
    if (strcmp(console, "circle") == 0){
    cria_circulo();
    }
    if (strcmp(console, "polygon") == 0){
    cria_poligono();
    }
    if (strcmp(console, "fill") == 0){
    preenche_poligono();
    }
   }while(strcmp(console, "save") == 0)
   }

   //EM CASO DE ABERTURA DE OUTRA IMAGEM
   if (strcmp(resposta, "open") == 0){

   }
      return 0;
 }



//FUNÇÕES DESTINADAS AS PRIMITIVAS

void criar_imagem(){
     
     *imagem = fopen("imagem.ppm","w");
    printf("Digite o tamanho da imagem em pixels na horizontal\n");
    scanf("%i", dimx);
    printf("Digite o tamanho da imagem em pixels na vertical\n");
    scanf("%i", dimy);
    fprintf(fp, "P6\n%i %i\n 255\n", dimx, dimy);
     return "imagem criada com sucesso";
}

void colorir_imagem(){
    fprintf(stderr, "%s\n", );
}

void limpa_imagem(){

}

void cria_retangulo(){

}

void cria_circulo(){

}

void cria_poligono(){

}

void preenche_poligono(){

}

void salva_arquivo(){

}