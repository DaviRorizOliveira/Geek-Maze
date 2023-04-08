/*
Aluno: Davi Roriz Oliveira
Matrícula: 202210342
Linguagem de Programação 1
Professora: Vânia Cordeiro da Silva
*/
#include <stdio.h> // Bibliotecas padrão ANSI utilizadas no labirinto
#include <stdlib.h>

#define reset "\x1b[0m" // Códigos das cores utilizadas no labirinto
#define red "\x01b[31;1m"
#define green "\x01b[32;1m"
#define yellow "\x01b[33;1m"
#define blue "\x01b[34;1m"
#define magenta "\x01b[35;1m"
#define cyan "\x01b[36;1m"
#define red_B "\x01b[41;1m"
#define green_B "\x01b[42;1m"
#define yellow_B "\x01b[43;1m"
#define blue_B "\x01b[44;1m"
#define magenta_B "\x01b[45;1m"
#define cyan_B "\x01b[46;1m"
#define white_B "\x01b[47;1m"

#define corredor 0
#define parede 1
#define saida 2
#define entrada 3

#define esferas 4 // Esferas do Dragão - Dragon Ball / Anime

#define madara 5 // Uchiha Madara - Naruto / Anime
#define salao_madara 6
#define confronto_madara 7
#define parede_invisivel 8

#define demogorgon 9 // Demogorgon - Strangers Things / Série
#define monica 10 // Mônica - Turma da Mônica / HQ
#define vader 11 // Darth Vader - Star Wars / Filme
#define negan 12 // Negan - The Walking Dead / HQ | Série
#define plankton 13 // Plânkton - Bob Esponja / Desenho
#define majin 14 // Majin Boo - Dragon Ball / Anime
#define megatron 15 // Megatron - Transformers / Filme | Desenho
#define davy 16 // Davy Jones - Piratas do Caribe / Filme
#define darkseid 17 // Darkseid - DC / HQ
#define guarda_caixao 18 // Esconde-Esconde / Jogo
#define isildur 19 // Isildur - Senhor dos Anéis / Livro | Filme
#define walter_white 25 // Walter White - Breaking Bad / Série
#define julius 26 // Juliu - Todo mundo odeia o Chris / Série

#define cogumelo 20 // cogumelo - Mário Bros / Jogo
#define maca_dourada 21 // Maçã Dourada - Minecraft / Jogo
#define tio_patinhas 22 // Tio Patinhas - Disney / HQ

#define passagem 23
#define fenda 24 // Fenda dimensional - Fortnite / Jogo
#define muda 27 // Inspirado no Labirinto de Maze Runner

#define qLinhas 33 // Tamanho do labirinto
#define qColunas 41

#define maxP 30 // Numero máximo de caracteres para o nome do personagem

int main() {
    int labirinto[qLinhas][qColunas] = {
        1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
        1,0,0,0,0,0,0,0,0,0,1,0,0,0,19,1,0,0,0,1,9,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,
        1,0,1,1,1,0,1,1,1,0,0,0,1,1,0,1,1,1,0,1,0,1,1,0,1,0,0,0,1,1,1,0,20,0,1,1,1,21,0,9,1,
        1,0,0,9,1,0,1,0,1,1,1,0,1,0,0,0,0,0,12,1,0,0,1,0,1,0,1,1,1,0,0,0,1,1,1,0,1,1,0,1,1,
        1,1,1,0,1,0,1,0,0,0,1,0,1,1,1,1,1,1,0,1,1,0,1,1,1,0,0,1,0,0,1,0,0,0,0,0,1,0,0,0,1,
        1,0,1,0,1,9,0,0,1,1,1,13,0,0,1,0,20,0,0,0,1,26,1,17,0,20,1,1,0,1,1,1,1,1,1,0,1,0,1,0,1,
        1,0,1,0,1,1,1,21,1,0,1,1,1,0,1,0,1,1,1,0,1,1,1,1,1,0,1,0,0,0,0,0,0,0,1,1,1,0,1,0,1,
        1,0,0,0,0,23,0,0,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,1,23,1,16,0,0,1,26,1,1,1,
        1,1,1,1,0,1,1,1,1,0,0,0,1,20,0,0,1,0,1,1,0,1,1,0,1,1,1,1,1,0,1,0,1,1,1,0,1,0,0,0,1,
        1,0,1,0,0,0,1,0,1,0,1,0,1,1,23,1,1,1,1,0,0,0,19,0,1,26,0,0,0,13,1,0,0,1,0,0,1,1,1,0,1,
        1,0,0,0,1,20,1,0,0,0,1,0,0,0,0,1,0,1,10,0,1,1,1,1,1,0,1,11,1,1,1,1,0,1,1,1,1,0,0,0,1,
        1,1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,0,1,1,0,0,0,1,0,0,0,1,1,1,20,0,1,0,1,0,0,1,0,1,1,1,
        1,0,0,0,0,0,0,0,1,0,0,0,1,9,0,0,0,0,1,1,0,1,1,0,1,0,0,0,1,1,0,1,19,0,0,1,1,0,0,0,1,
        1,10,1,0,1,1,1,0,1,0,1,24,1,0,1,1,1,0,0,1,6,1,0,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,1,
        1,1,1,1,1,0,1,17,1,0,1,1,1,0,1,16,0,0,1,1,0,1,1,0,1,0,1,0,1,1,1,1,0,1,1,0,1,1,1,0,1,
        1,0,1,0,0,0,1,0,1,0,25,0,0,0,1,0,1,1,1,0,7,0,1,1,1,0,1,1,1,0,25,0,0,0,1,1,1,26,0,0,1,
        1,0,1,0,1,1,1,0,1,1,1,1,1,1,1,0,0,6,0,7,5,0,0,0,0,0,0,17,0,0,1,1,1,10,1,0,0,0,1,12,1,
        1,0,0,20,0,0,0,0,1,0,0,0,1,11,0,20,1,1,1,0,0,0,1,1,1,0,1,1,1,0,1,0,0,0,23,0,1,1,1,1,1,
        1,1,0,1,1,0,1,1,1,0,1,0,1,1,1,0,1,0,1,1,0,1,1,0,0,25,1,0,1,0,1,1,1,1,1,0,1,0,0,0,1,
        1,0,0,1,0,0,1,0,0,0,1,0,0,20,1,0,26,0,0,1,0,1,0,0,1,1,1,0,0,0,0,1,0,0,0,9,1,0,1,0,1,
        1,0,1,1,1,9,1,0,1,1,1,23,1,0,1,1,1,1,1,1,0,1,20,1,1,0,1,1,1,1,1,1,0,1,1,0,1,21,1,1,1,
        1,0,0,0,1,0,0,0,1,0,0,0,1,1,1,1,0,0,21,0,0,1,0,0,0,0,1,0,0,0,0,1,1,1,0,0,1,0,0,0,1,
        1,1,1,0,1,1,1,1,1,14,1,0,0,0,0,0,0,1,1,0,1,1,1,1,1,0,20,0,1,1,0,1,0,1,0,1,1,1,1,0,1,
        1,0,1,0,1,0,0,0,1,0,1,1,1,1,0,1,0,9,1,0,0,1,0,0,1,0,1,10,0,1,0,0,0,1,0,0,0,11,1,0,1,
        1,0,0,0,0,15,1,1,1,0,0,1,0,0,0,1,1,1,1,1,0,1,1,0,1,0,1,1,0,1,1,1,23,1,1,0,1,0,1,0,1,
        1,1,1,1,0,1,1,0,1,1,0,1,1,1,0,1,0,0,0,1,1,1,0,0,1,0,1,0,0,1,16,0,0,0,1,0,1,0,0,0,1,
        1,0,0,8,0,8,0,0,0,1,0,0,0,1,1,1,0,1,0,1,0,0,0,1,1,0,1,1,1,1,0,1,1,0,1,0,1,1,1,20,1,
        1,0,8,8,26,8,0,8,0,1,1,1,0,1,0,0,0,1,0,23,0,1,0,1,0,0,27,1,0,0,0,1,26,0,1,0,0,0,0,0,1,
        1,0,8,0,0,8,4,8,20,0,1,0,0,1,0,1,1,1,0,1,1,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,1,0,1,0,1,
        1,10,8,0,8,8,8,8,8,0,1,0,1,1,0,1,1,0,0,0,0,1,9,1,1,1,0,20,0,0,0,1,0,0,0,1,0,0,1,0,1,
        1,0,0,0,8,0,0,0,8,0,1,0,1,0,0,0,1,0,1,1,0,1,1,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,1,0,1,
        1,0,8,0,0,0,8,12,0,0,1,22,0,0,1,11,1,0,0,1,0,0,15,0,0,1,25,0,0,1,18,0,0,1,0,0,0,14,0,0,1,
        1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        }; // Mapa de colisão do labirinto

    char personagem[maxP];
    char mov; // Variável que lê o movimento do jogador
    int y = 0; // Posição inicial do personagem no eixo y
    int x = 5; // Posição inicial do personagem no eixo x
    int aux1; // aux1 e aux2 são as variáveis que constroem o mapa do labirinto no laço for
    int aux2;
    int fimJogo = 0; // Variável para finalizar o jogo
    int status = 0; // Variável para printar na tela as informações
    int etapa = 0; // Variável para avançar de etapa no jogo
    int HP = 250; // HP inicial do jogador

    system("clear || cls");

    do { // Início do loop do jogo

        if(etapa == 0) { // Etapa que mostra a história, objetivo, tutorial e legenda | Menu principal
            printf(red "\n\t------- GEEK'S MAZE -------\n\n" reset);
            printf(yellow "\t'Simplesmente nao posso ir sem saber para onde' - Bilbo Bonseiro\n\n" reset);
            printf(green "\tObjetivo do jogo: " reset);
            printf("Voce entrou no GEEK'S MAZE, um labrinto onde voce podera\n\tencontrar diversos desafios, loucuras e... personagens? Sim! Aqui voce pode\n\tse deparar com personagens, monstros, objetos e muito mais! Todos eles sendo\n\tpertencentes a HQ's, Filmes, Series, Animes e Livros!! Mas tome cuidado, ao\n\tencontrar inimigos voce perdera vida, entao sempre se atente para que seu HP\n\tnao chegue a 0, entao boa sorte, meu campones!!\n\n");
            printf(green "\tTutorial do jogo:" reset);
            printf("\n\tTecla 'w' para se movimentar para cima\n\tTecla 's' para se movimentar para baixo\n\tTecla 'a' para se movimentar para a esquerda\n\tTecla 'd' para se movimentar para a direita\n\tTecla 'm' para voltar para o menu principal\n\tTecla 'n' para sair do jogo\n\n");
            printf(green "\tDica: " reset);
            printf("Encontre a chave! Somente com ela voce sera capaz de ver a saida!\n");
            printf(green "\n\tLegenda:\n" reset);
            printf("\tPlayer  -> " red red_B "__" reset);
            printf("\n\tSaida   -> " green green_B "__" reset);
            printf("\n\tEntrada -> " blue blue_B "__" reset);
            printf("\n\tChave   -> " yellow yellow_B "__" reset);
            printf("\n\tBoss    -> " magenta magenta_B "__" reset);
            printf("\n\n\tPressione a tecla 's' para continuar\n");
            scanf("\t%c", &mov);
            scanf("%*c");
            if(mov == 's' || mov == 'S') {
                etapa++;
            }
            system("clear || cls");
        }

        if(etapa == 1) { // Etapa que faz a leitura do nome do personagem
            printf(red "\n\t------- GEEK'S MAZE -------\n\n" reset);
            printf("\n\tEscolha o nome do seu personagem (max de 30 caracteres): ");
            scanf("%[^\n]s", personagem); // Leitura do nome do jogador
            scanf("%*c");
            printf("\tNome escolhido: %s\n\n", personagem);
            printf("\tPressione a tecla 's' para iniciar o jogo\n");
            scanf("\t%c", &mov);
            scanf("%*c");
            if(mov == 's' || mov == 'S') {
                etapa++;
            }
            system("clear || cls");
        }

        if(etapa == 2) {
            printf(red "\n\t------- GEEK'S MAZE -------\n" reset);
            printf("\n\tPersonagem: %s", personagem); // Print do nome do jogador
            printf("\n\tHP: %d", HP); // Print do HP do jogador
            printf("\n\n\t");
            for(aux1 = 0 ; aux1 < qLinhas ; aux1++) { // Laço for que constrói o labirinto
                for(aux2 = 0 ; aux2 < qColunas ; aux2++) {
                    if(y == aux1 && x == aux2) printf(red red_B "__" reset); // Inicio dos prints do labirinto, incluindo os obst�culos
                    else if(labirinto[aux1][aux2] == corredor) printf("  ");
                    else if(labirinto[aux1][aux2] == parede) printf(white_B "__" reset);
                    else if(labirinto[aux1][aux2] == saida) printf(green green_B "__" reset);
                    else if(labirinto[aux1][aux2] == entrada) printf(blue blue_B "__" reset);
                    else if(labirinto[aux1][aux2] == esferas) printf(yellow yellow_B "__" reset);
                    else if(labirinto[aux1][aux2] == madara) printf(magenta magenta_B "__" reset);
                    else if(labirinto[aux1][aux2] == salao_madara) printf("  ");
                    else if(labirinto[aux1][aux2] == confronto_madara) printf("  ");
                    else if(labirinto[aux1][aux2] == parede_invisivel) printf("  ");
                    else if(labirinto[aux1][aux2] == demogorgon) printf("  ");
                    else if(labirinto[aux1][aux2] == monica) printf("  ");
                    else if(labirinto[aux1][aux2] == vader) printf("  ");
                    else if(labirinto[aux1][aux2] == negan) printf("  ");
                    else if(labirinto[aux1][aux2] == plankton) printf("  ");
                    else if(labirinto[aux1][aux2] == majin) printf("  ");
                    else if(labirinto[aux1][aux2] == megatron) printf("  ");
                    else if(labirinto[aux1][aux2] == davy) printf("  ");
                    else if(labirinto[aux1][aux2] == darkseid) printf("  ");
                    else if(labirinto[aux1][aux2] == guarda_caixao) printf("  ");
                    else if(labirinto[aux1][aux2] == isildur) printf("  ");
                    else if(labirinto[aux1][aux2] == cogumelo) printf("  ");
                    else if(labirinto[aux1][aux2] == maca_dourada) printf("  ");
                    else if(labirinto[aux1][aux2] == tio_patinhas) printf("  ");
                    else if(labirinto[aux1][aux2] == passagem) printf(white_B "__" reset);
                    else if(labirinto[aux1][aux2] == fenda) printf("  ");
                    else if(labirinto[aux1][aux2] == walter_white) printf("  ");
                    else if(labirinto[aux1][aux2] == julius) printf("  ");
                    else if(labirinto[aux1][aux2] == muda) printf("  ");
                }
                printf("\n\t");
            }

            if(status == 1) { // Printf caso o jogador tente ir para a parede
                printf("Voce nao e a Lince Negra para atravessar paredes, procure outro caminho!\n");
                status--;
            }
            if(status == 2) { // In�cio dos prints dos obst�culos e seu dano, caso o player passe por eles
                printf("Voce chega a um grande salao, e no meio dele encontra uma figura misteriosa...\n");
                printf( magenta "\tUchiha Madara: Me diga... Voce deseja apanhar, com ou sem Susano'o?\n" reset );
                status = status - 2;
            }
            if(status == 3) { //
                printf("Voce sai vitorioso no confronto contra o usuario de sharingan, mas isso lhe custou 100 pontos de vida...\n");
                status = status - 3;
            }
            if(status == 4) {
                printf("Oh no! Voce encontrou um Demogorgon! " red "-15 HP\n" reset);
                status = status - 4;
            }
            if(status == 5) {
                printf("Ihh rapaz... Voce deu um no nas orelhas do sansao, a Monica nao gostou nem um pouco... " red "-40 HP\n" reset);
                status = status - 5;
            }
            if(status == 6) {
                printf("Hmm... Darth Vader nao gostou nem um pouco de voce ter passado por aqui... " red "-40 HP\n" reset);
                status = status - 6;
            }
            if(status == 7) {
                printf("O Negan amassou a sua cabeca com a Lucille... " red "-20 HP\n" reset);
                status = status - 7;
            }
            if(status == 8) {
                printf("O plankton roubou a sua receita secreta de hamburguer!! " red "-20 HP\n" reset);
                status = status - 8;
            }
            if(status == 9) {
                printf("Voce pegou o ultimo pudim... Agora o Majin Boo nao ira te perdoar!! " red "-25 HP\n" reset);
                status = status - 9;
            }
            if(status == 10) {
                printf("O Megatron veio atras do cubo!! Proteja-o com a sua vida!! " red "-30 HP\n" reset);
                status = status - 10;
            }
            if(status == 11) {
                printf("O Davy Jones recuperou o vaso de terra!! Agora ele tem o coracao!! " red "-20 HP\n" reset);
                status = status - 11;
            }
            if(status == 12) {
                printf("EU SOU ENTROPIA, EU SOU A MORTE... EU SOU DARKSEID! " red "-40 HP\n" reset);
                status = status - 12;
            }
            if(status == 13) {
                printf("Ahh nao!! Tinha um palhaco guardando caixao na saida achando que aquilo era um esconde-esconde! " red "-20 HP\n" reset);
                status = status - 13;
            }
            if(status == 14) {
                printf("MUITO BEM! Voce encontrou as esferas do dragao, agora voce sera capaz de ver a saida!\n");
                status = status - 14;
            }
            if(status == 15) {
                printf("Oh no! Isildur te traiu e roubou o Um anel! " red "-20 HP\n" reset);
                status = status - 15;
            }
            if(status == 16) {
                printf("UAU, voce comeu um cogumelo e ficou GRANDAAAOOO! To achando que voce e o Mario... " green "+10 HP\n" reset);
                status = status - 16;
            }
            if(status == 17) {
                printf("Hmmm, essa maca dourada ta muito boa " green "+15 HP\n" reset);
                status = status - 17;
            }
            if(status == 18) {
                printf( yellow "Tio Patinhas lhe deu uma moeda!! " reset green "+40 HP\n" reset);
                status = status - 18;
            }
            if(status == 19) {
                printf("UAU, eu acho que voce e mesmo a Lince Negra...\n");
                status = status - 19;
            }
            if(status == 20) {
                printf("Eita... Uma fenda dimensional... Sera que eu estou em Torres Tortas?\n");
                status = status - 20;
            }
            if(status == 21) {
                printf("O Walter White veio cobrar umas dividas... " red "-10 HP\n" reset);
                status = status - 21;
            }
            if(status == 22) {
                printf("O Julius ta ate em seus sonhos! Sera que ele vai estar no banheiro tambem? " red "-10 HP\n" reset);
                status = status - 22;
            }
            if(status == 23) {
                printf("WOW!! O labirinto se moveu??\n");
                status = status - 23;
            }

            scanf("\t%c", &mov); // Leitura do movimento do personagem
            scanf("%*c");
            if(mov == 'w' || mov == 'W') { // Comando para Cima
                y--;
                if(labirinto[y][x] == parede) { // Teste se � parede
                    y++;
                    status++;
                }
                if(labirinto[y][x] == parede_invisivel) { // Teste se é parede invisível
                    y++;
                }
            }
            if(mov == 'a' || mov == 'A') { // Comando para Esquerda
                x--;
                if(labirinto[y][x] == parede) { // Teste se é parede
                    x++;
                    status++;
                }
                if(labirinto[y][x] == parede_invisivel) { // Teste se é parede invisível
                    x++;
                }
            }
            if(mov == 's' || mov == 'S') { // Comando para Baixo
                y++;
                if(labirinto[y][x] == parede) { // Teste se é parede
                    y--;
                    status++;
                }
                if(labirinto[y][x] == parede_invisivel) { // Teste se é parede invisível
                    y--;
                }
            }
            if(mov == 'd' || mov == 'D') { // Comando para Direita
                x++;
                if(labirinto[y][x] == parede) { // Teste se é parede
                    x--;
                    status++;
                }
                if(labirinto[y][x] == parede_invisivel) { // Teste se é parede invisível
                    x--;
                }
            }
            if(mov == 'm' || mov == 'M') { // Comando para voltar ao Menu Principal
                etapa = etapa - 2;
            }
            if(mov == 'n' || mov == 'N') { // Comando para sair do jogo
                fimJogo++;
            }

            if(labirinto[y][x] == esferas) { // Teste para ver se a posição é a chave, se for, abre a saída e transforma a chave em corredor
                labirinto[32][32] = saida;
                labirinto[y][x] = corredor;
                status = status + 14;
            }

            if(labirinto[y][x] == salao_madara) { // Teste para ver quando o jogador chegar no salão do Madara
                labirinto[y-1][x] = parede; // Cria uma parede atrás dele para que não seja possível voltar até derrotar o boss
                labirinto[y][x-1] = parede;
                status = status + 2;
            }
            if(labirinto[y][x] == confronto_madara) { // Momento do confronto contra o Madara, remove as paredes que foi criada atrás dele e
                labirinto[16][17] = corredor; // transforma tudo relacionado ao Madara em corredor, confirmando a derrota do boss
                labirinto[16][16] = corredor;
                labirinto[16][19] = corredor;
                labirinto[12][20] = corredor;
                labirinto[13][20] = corredor;
                labirinto[15][20] = corredor;
                labirinto[16][20] = corredor;
                HP = HP - 100; // Vida perdida contra o Madara
                status = status + 3;
            }
            if(labirinto[y][x] == demogorgon) { // Existem 9 Demogorgons pelo mapa
                HP = HP - 15; // Quantidade de vida que o obstáculo retira
                status = status + 4; // O status vai indicar na tela qual é o obstáculo e o seu dano
                labirinto[y][x] = corredor; // Transforma aquele ponto em corredor para caso o jogador passe por lá novamente
            }
            if(labirinto[y][x] == monica) { // Existem 5 Mônicas pelo mapa
                HP = HP - 40;
                status = status + 5;
                labirinto[y][x] = corredor;
            }
            if(labirinto[y][x] == vader) { // Existem 4 Darth Vaders pelo mapa
                HP = HP - 40;
                status = status + 6;
                labirinto[y][x] = corredor;
            }
            if(labirinto[y][x] == negan) { // Existem 3 Negans pelo mapa
                HP = HP - 20;
                status = status + 7;
                labirinto[y][x] = corredor;
            }
            if(labirinto[y][x] == plankton) { // Existem 2 Plânktons pelo mapa
                HP = HP - 20;
                status = status + 8;
                labirinto[y][x] = corredor;
            }
            if(labirinto[y][x] == majin) { // Existem 2 Majin Boos pelo mapa
                HP = HP - 25;
                status = status + 9;
                labirinto[y][x] = corredor;
            }
            if(labirinto[y][x] == megatron) { // Existem 2 Megatrons pelo mapa
                HP = HP - 30;
                status = status + 10;
                labirinto[y][x] = corredor;
            }
            if(labirinto[y][x] == davy) { // Existem 3 Davy Jones pelo mapa
                HP = HP - 20;
                status = status + 11;
                labirinto[y][x] = corredor;
            }
            if(labirinto[y][x] == darkseid) { // Existem 3 Darkseids pelo mapa
                HP = HP - 40;
                status = status + 12;
                labirinto[y][x] = corredor;
            }
            if(labirinto[y][x] == guarda_caixao) { // Esistem 1 Gurda-Caixão pelo mapa
                HP = HP - 20;
                status = status + 13;
                labirinto[y][x] = corredor;
            }
            if(labirinto[y][x] == isildur) { // Existem 3 Isildurs pelo mapa
                HP = HP - 20;
                status = status + 15;
                labirinto[y][x] = corredor;
            }
            if(labirinto[y][x] == walter_white) { // Existem 4 Walter Whites pelo mapa
                HP = HP - 10;
                status = status + 21;
                labirinto[y][x] = corredor;
            }
            if(labirinto[y][x] == julius) { // Existem 5 Julius pelo mapa
                HP = HP - 10;
                status = status + 22;
                labirinto[y][x] = corredor;
            }

            if(labirinto[y][x] == cogumelo) { // Existem 14 Cogumelos pelo mapa
                HP = HP + 10;
                status = status + 16;
                labirinto[y][x] = corredor;
            }
            if(labirinto[y][x] == maca_dourada) { // Existem 4 Maçãs Douradas pelo mapa
                HP = HP + 15;
                status = status + 17;
                labirinto[y][x] = corredor;
            }
            if(labirinto[y][x] == tio_patinhas) { // Existe 1 Tio Patinhas pelo mapa
                HP = HP + 40;
                status = status + 18;
                labirinto[y][x] = corredor;
            }

            if(labirinto[y][x] == passagem) { // Existem 7 passagens pelo mapa
                status = status + 19; // Basicamente uma parede falsa que permite que o jogador possa atravessá-la
            }
            if(labirinto[y][x] == fenda) { // Existe 1 fenda dimensional pelo mapa
                status = status + 20; // Uma fenda que teletransporta o jogador para outro ponto do mapa
                y = 20;
                x = 32;
            }
            if(labirinto[y][x] == muda) {
                labirinto[y][x] = corredor;
                labirinto[27][27] = corredor;
                labirinto[28][28] = parede;
                labirinto[29][31] = corredor;
                status = status + 23;
            }

            if(labirinto[y][x] == saida) { // Teste se o jogador chegar na saída
                etapa++;
                fimJogo++; // Finaliza o jogo
            }
            if(HP <= 0) { // Teste caso o HP do jogador chegue a 0 ou menos
                etapa = etapa + 2;
                fimJogo++; // Finaliza o jogo
            }
        }
        system("clear || cls");
    } while(fimJogo == 0); // Fim do loop do jogo

    if(etapa == 2) { // Print caso o jogador decida sair antes de terminar o jogo
        printf(red "\n\t------- GEEK'S MAZE -------\n\n" reset);
        printf("\n\tUma pena que desejas sair :( , espero te ver por aqui de novo...\n\n");
    }
    if(etapa == 3) { // Print caso o jogador consiga conluir o labirinto
        printf(red "\n\t------- GEEK'S MAZE -------\n\n" reset);
        printf("\n\t------- PARABENS MEU CAMPONES, VOCE CONSEGUIU COMPLETAR O JOGO! -------\n\n\n");
        printf(yellow "\t------- RECEBA SEU PREMIO -------\n\n\n" reset);
        printf("\t\t---CREDITOS DA EQUIPE---\n\n\t\tPROGRAMADOR\n\t\tDavi Roriz Oliveira\n\n\t\tDESIGNER\n\t\tDavi Roriz Oliveira\n\n\t\tDIRETOR DE ARTE\n\t\tDavi Roriz Oliveira\n\n\t\tPRODUTOR EXECUTIVO\n\t\tDavi Roriz Oliveira\n\n");
    }
    if(etapa == 4) { // Printf caso o HP jogador chegue a 0 ou menos
        printf(red "\n\t------- GEEK'S MAZE -------\n\n" reset);
        printf("\n\tInfelizmente nao foi dessa vez...\n\tQue tal tentar outra vez??\n\tTalvez dessa vez a forca esteja com voce!!\n\n");
    }
    return 0;
}
