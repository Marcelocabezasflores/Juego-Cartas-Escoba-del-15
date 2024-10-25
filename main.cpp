#include <iostream>

using namespace std;

struct lista{int carta; lista *sgte=NULL;};//Lista para cartas en la mesa y cartas tomadas por el jugador


void InsertarLista(lista*& mesa,int carta);
{

}

void SacarLista(lista*&,int carta);
{

}

void barajear(int mazo[]);//Crea una baraja aleatoria
{

}

void repartir_mesa(int mazo[] ,lista &repartidas);//Añade cartas a la mesa desde la baraja
void repartir_jugador(int mazo[],int** jugadores,int cant);//Añade las cartas a la mano del jugador desde la baraja
void play(int** jugadores,lista &mesa,lista** pozo_jugadores,int n);//Tirar a la mesa, saca cartas de la mesa si hay 15 o agregra si no hay.
void calcular_puntaje(lista** pozo,int** jugadores,int n, int puntaje[]);//Calcula los puntos del jugador n
int hay_15(int** jugadores,int n, lista &mesa);//Confirma si la carta jugada tiene combinacion que hace 15 , se usa dentro de play_2j
void mostrar_mesa(lista &mesa);//Muestra la mesa en pantalla
void mostrar_mesa(lista *mesa) {
    lista *actual = mesa;
    while (actual != null)
    {
        cout << actual->carta <<endl;
        actual = actual->sgte;
    }
    return;
}
void mostrar_mano(int** jugadores,int n);//Muestra la mano de un jugador en pantalla











void play(int** jugadores,lista &mesa,lista** pozo_jugadores,int n);//Tirar a la mesa, saca cartas de la mesa si hay 15 o agregra si no hay.
 {
     lista* aux=new lista
     int posc;
     cout<< "Ingrese la posicion de la carta que quiere jugar" << endl;
     cin >> posc;
     if

 }


int hay_15(int** jugadores,lista &mesa,lista** pozo,int n,int carta,lista);//Confirma si la carta jugada tiene combinacion que hace 15 , se usa dentro de play_2j
 {

 }















bool verificar_juego(int** jugadores,int baraja[],lista &mesa,int n);//verifica si el juego puede continuar
bool verificar_mesa(lista &mesa); //Verifica si la mesa esta vacia
bool verificar_manos(int** jugadores); //Verifica si las manos de los jugadores estan vacias
void calcular_puntaje(lista** pozo,int** jugadores,int n, int puntaje[]);//Calcula los puntos del jugador n



int main()
{
    int n;
    cout <<"Bienvenido a la Escoba 15" << endl;
    while(true)//Verifica que la cantidad de jugadores sea 2 o 3
        {
         cout <<"Indique la cantidad de Jugadores:";
         cin >> n;
         if(n<4 && n>1){ break;}
        }
        int puntaje[3]={0};
        int **players=new int*[n];//Primera dimension de la matriz
        for (int i = 0; i < n; ++i)
            {
             players[i] = new int[3]; // Segunda dimensión
            }
        int baraja[40];//0->La carta en esa pocision ya fue repartida || 1-10=Basto, 11-20=Espada, 21-30=Oro, 31-40=Copas || 10->8 11->9 12->10
        lista *mesa=new lista; //Lista de las cartas en la mesa
        lista **pozo_jugadores=new lista*[3];//Lista de las cartas tomadas, tiene que ser un vector N de listas
        barajear(baraja);
        repartir_mesa(baraja, *mesa);
        repartir_jugador(baraja,players,n);

        int i=1;//contador para saber que jugador toca

        while(true)
            {
              mostrar_mesa(*mesa);
              mostrar_mano(players, i);
              play(players,*mesa,pozo_jugadores,i);//El Jugador elige la carta y la maquina juega la primera combinacion que encuentre, si es escoba suma 1 a puntuacion
              calcular_puntaje(pozo_jugadores,players,i,puntaje);
              if(puntaje[i-1]>=15){ cout<<"Gano el Jugador"<< i <<"con "<<puntaje[i-1]<<" puntos." ;return 0;}

              if(!verificar_juego(players,baraja,*mesa,n))
                    {break;}//verifica que se pueda seguir jugando

              if(!verificar_mesa(*mesa))
                    {repartir_mesa(baraja, *mesa);}//verifica si la mesa necesita repartir

              if(!verificar_juego(players,baraja,*mesa,n))
                    {break;}//verifica que se pueda seguir jugando

              if(!verificar_manos(players))
                    {repartir_jugador(baraja,players,n);}


              i++;
              if(i>n){i=1;}
              system("cls");
            }


}
