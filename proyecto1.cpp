#include <stdio.h>
#include <stdlib.h>
#define reservar_memoria (Nodo *)malloc(sizeof(Nodo))

struct Nodo{
    int dato;
    Nodo *Siguiente;
};

void menu();//FUNION PARA EL MENU

void iniciar_LIFO();//FUNCION PARA INICIALIZAR LA PILA
void ins_LIFO(Nodo *&, int);//FUNCION PARA INSERTAR ELEMENTOS EN LISTA LIFO
void most_LIFO(Nodo *&);//FUNCION PARA MOSTRAR ELEMENTOS DE LA PILA
void quit_LIFO(Nodo *&, int &);//FUNCION PARA LIMPIAR PILA
bool vacia_LIFO(Nodo *&);//FUNCION PARA VALIDAR LA PILA
void elim_LIFO();//FUNCION PARA VACIAR LA PILA EN NULL
//void busc_LIFO(Nodo *&, int, int);
int tama_LIFO(Nodo *&);

void iniciar_FIFO();
void ins_FIFO(Nodo *&inicio, Nodo *&fin, int num);
void most_FIFO(Nodo *&inicio, Nodo *&fin);
void quit_FIFO(Nodo *&inicio, Nodo *&fin, int num);
bool vacia_FIFO(Nodo *&inicio);
void elim_FIFO();

int main(){
    menu();

    system("cls");
    printf("\n\n\n\t\t\tHAS SALIDO DEL PROGRAMA, VUELVA PRONTO!!!\n\n\n\n");
    system("Pause");
    return 0;
}
