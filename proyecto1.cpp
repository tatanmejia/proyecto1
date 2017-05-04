#include <stdio.h>
#include <stdlib.h>
#define reservar_memoria (nodo*)malloc(sizeof(nodo))

struct nodo{
    int dato;
    nodo *siguiente; };

//FUNCIONES LISTAS LIFO
void crear_pila ();
void insertar_pila (nodo *&, int);
void imprimir_pila (nodo *&);
void buscar_pila ();
void eliminar_elementos_pila (nodo *&, int &);
void editar_pila ();
void vaciar_elementos_pila ();
bool pila_vacia (nodo *&);
void eliminar_pila ();

//FUNCIONES LISTAS FIFO
void crear_cola();
void insertar_cola (nodo *&, nodo *&, int);
void imprimir_cola (nodo *&, nodo *&);
bool buscar_cola (nodo *&, nodo *&, int);
void eliminar_elementos_cola (nodo *&, nodo *&, int &);
void editar_cola();
void vaciar_elementos_cola ();
bool cola_vacia (nodo *&);
void eliminar_cola ();

void menu();

int main(){
    menu();
    return 0;
}

void menu(){
    nodo * pila = NULL;
    nodo * inicio = NULL;
    nodo * fin = NULL;


    int opc;
    int salir=1;
    int n,bus,dbusc;
    bool vald=false;

    do{
        printf("\n  ------------ MENU LISTAS -----------\n\n");
        printf("  1. LISTAS LIFO.\n");
        printf("  2. LISTAS FIFO.\n");
        printf("  3. LISTA CIRCULAR SIMPLEMENTE ENLAZADA.\n");
        printf("  4. LISTA CIRCULAR DOBLEMENTE ENLAZADA.\n");
        printf("  5. LISTA SIMPLEMENTE ENLAZADAS.\n");
        printf("  6. LISTA DOBLEMENTE ENLAZADAS.\n");
        printf("  7. OPERACIONES ENTRE LISTAS.\n");
        printf("  0. SALIR. \n\n");
        printf("  Ingrese opcion: ");
        scanf("%d", &opc);

        switch(opc){

            case 0:
                salir=0;
                break;

            case 1:

            system("cls");
            printf("\n  ---------- MENU LISTAS LIFO ----------\n\n");
            printf("  1. Crear lista. \n");
            printf("  2. Insertar elementos. \n");
            printf("  3. Imprimir elementos. \n");
            printf("  4. Buscar elementos. \n");
            printf("  5. Eliminar elementos. \n");
            printf("  6. Editar elementos. \n");
            printf("  7. Vaciar elementos. \n");
            printf("  8. Lista vacia. \n");
            printf("  9. Eliminar lista. \n\n");
            printf("  0. Volver al menu anterior. \n\n");
            printf("  Ingrese una opcion: ");
            scanf("%d", &opc);

            switch(opc){
                case 1:
                    printf("\n Crear lista LIFO\n");
                    crear_pila();
                    printf("\nPila iniciada exitosamente!\n");
                    break;

                case 2:
                    printf("\n Insertar elementos LIFO\n");
                    printf("\nDigite un valor numerico\n");
                    while(n!=0){
                        scanf("%d",&n);
                        insertar_pila(pila,n);
                    }
                    break;
                case 3:
                    printf("\n\n Como desea mostrar los elementos: \n\n");
                    printf("  1. Mostrar el primero elemento. \n");
                    printf("  2. Mostrar el ultimo elemento. \n");
                    printf("  3. Mostrar todos los elementos. \n\n");
                    printf("  Ingrese una opcion: ");
                    scanf("%d", &opc);


                        switch(opc){
                            case 1:
                                nodo *aux=pila;
                                while(aux!=NULL)
                                {
                                    if(aux->siguiente==NULL)
                                    {
                                    printf("El primer elemento de la pila es: %d\n",pila->dato);
                                    }
                                    aux=aux->siguiente;
                                }

                                break;

                            case 2:
                               {
                                       printf("El ultimo elemento de la pila es: %d\n",pila->n);
                                    system("pause");
                                }
                                break;




                            case 3:
                                printf("\nMOSTRAR TODOS LOS ELEMENTOS \n\n");
                                printf("\nLa lista LIFO contiene los siguientes elementos: \n\n");
                                imprimir_pila(pila);
                                printf("\n\n<<%d>>",n);
                                break;
                            default: printf("\nOPCION INGRESADA NO VALIDA. \n\n");
                            }
                            break;

                case 4:
                    printf("\nBUSCAR ELEMENTOS\n\n");
                    printf("Digite valor a buscar en la pila: ");
                    scanf("%d",&bus);
                    while(pila!=NULL){
                    if(pila->dato==bus){
                        printf("\nEl valor buscado <%d>, se encuentra en la lista LIFO\n",bus);
                        vald=true;
                        pila=pila->siguiente;
                        }else{
                            pila=pila->siguiente;
                        }
                    }
                    break;
                case 5:
                    printf("Digite valor a eliminar de la pila: ");
                    scanf("%d",&dbusc);
                    while(pila!=NULL){
                    if(pila->dato==dbusc){
                        eliminar_elementos_pila (pila,dbusc);
                        pila=pila->siguiente;
                        printf("\nEl valor buscado <%d>, fue eliminado de la lista LIFO\n",dbusc);
                        vald=true;
                        }else{
                            pila=pila->siguiente;
                        }
                    }
                    if(vald!=true){
                        printf("\nEl valor buscado <%d>, no se encuentra en la lista LIFO\n",dbusc);
                    }
                    break;
                case 6:
                    printf("\nEDITAR ELEMENTOS\n\n");
                    editar_pila();
                    break;
                case 7:
                    printf("\nELIMINAR ELEMENTOS\n\n");
                    if(pila!=NULL){
                        pila=NULL;
                        printf("\n\nElementos de la Pila eliminados Correctamente!");
                    }else{
                            printf("\nLa Pila ya se encuentra vacia!!");
                    }
                    break;
                case 8:
                     printf("\nLIFO VACIA\n\n");
                    if(vaciar_elementos_pila(pila)){
                        printf("\nLa lista LIFO esta vacia!\n\n");
                    }else{
                        printf("\nLa lista LIFO  no esta vacia! ((%d))\n\n",pila->dato);
                    }

                    break;
                case 9:
                    printf("\nELIMINAR LIFO\n\n");
                    eliminar_pila();
                    printf("\nLista eliminada!\n\n");

                            break;
                case 0:
                    menu();
                    break;
                default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                    break;
                }
                break;


            case 2:

                system("cls");
                printf("\n  --------- MENU LISTAS FIFO ---------\n\n");
                printf("  1. Crear lista. \n");
                printf("  2. Insertar elementos. \n");
                printf("  3. Imprimir elementos. \n");
                printf("  4. Buscar elementos. \n");
                printf("  5. Eliminar elementos. \n");
                printf("  6. Editar elementos. \n");
                printf("  7. Vaciar elementos. \n");
                printf("  8. Lista vacia. \n");
                printf("  9. Eliminar lista. \n");
                printf("  0. Volver al menu anterior. \n\n");
                printf("  Ingrese una opcion: "); scanf("%d", &opc);

                switch(opc){
                    case 1:
                        break;
                    case 2:
                        break;
                    case 3:

                        printf("1. Mostrar el primero elemento. \n");
                        printf("2. Mostrar el ultimo elemento. \n");
                        printf("3. Mostrar todos los elementos. \n\n");
                        printf("Ingrese una opcion: "); scanf("%d", &opc);


                            switch(opc){
                                case 1:
                                    break;
                                case 2:
                                    break;
                                case 3:
                                    break;
                                default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                                }

                        break;

                    case 4:
                        break;
                    case 5:
                        break;
                    case 6:
                        break;
                    case 7:
                        break;
                    case 8:
                        break;
                    case 9:
                        break;
                    case 0:
                        menu();
                        break;
                    default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                        break;
                }
                break;


            case 3:

                system("cls");
                printf("\n ***** MENU LISTAS CIRCULARES SIMPLEMENTE ENLAZADAS *****\n\n");
                printf("  1. Crear lista. \n");
                printf("  2. Insertar elementos. \n");
                printf("  3. Imprimir elementos. \n");
                printf("  4. Buscar elementos. \n");
                printf("  5. Eliminar elementos. \n");
                printf("  6. Editar elementos. \n");
                printf("  7. Vaciar elementos. \n");
                printf("  8. Lista vacia. \n");
                printf("  9. Eliminar lista. \n");
                printf("  0. Volver al menu anterior. \n\n");
                printf("  Ingrese una opcion: ");
                scanf("%d", &opc);

                switch(opc){

                    case 1:
                        break;
                    case 2:
                        printf("\n\n  1. Al inicio.\n");
                        printf("    2. Al final.\n");
                        printf("    3. Despues de un nodo.\n");
                        printf("    4. Antes de un nodo.\n");
                        printf("    5. En medio de dos nodos.\n");
                        printf("    6. En forma ascendente.\n");
                        printf("    7. En forma descendente.\n\n");
                        printf("    Ingrese una opcion: ");
                        scanf("%d", &opc);

                            switch(opc){
                                case 1:
                                    break;
                                case 2:
                                    break;
                                case 3:
                                    break;
                                case 4:
                                    break;
                                case 5:
                                    break;
                                case 6:
                                    break;
                                case 7:
                                    break;
                                default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                                    break;
                            }

                        break;

                    case 3:
                        printf("\n\n    1. Mostrar el primer elememto.\n");
                        printf("    2. Mostrar el ultimo elemento.\n");
                        printf("    3. Mostrar todos los elementos.\n");
                        printf("    4. Mostrar el anterior elemento a un nodo dado.\n\n");
                        printf("    Ingrese una opcion: "); scanf("%d", &opc);


                            switch(opc){
                                case 1:
                                    break;
                                case 2:
                                    break;
                                case 3:
                                    break;
                                case 4:
                                    break;
                                default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                            }

                        break;

                    case 4:
                        break;
                    case 5:
                        break;
                    case 6:
                        break;
                    case 7:
                        break;
                    case 8:
                        break;
                    case 9:
                        break;
                    case 0:
                        menu();
                        break;
                    default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                        break;
                }
                break;

            case 4:

                system("cls");
                printf("\n ***** MENU LISTAS CIRCULARES DOBLEMENTE ENLAZADAS *****\n\n");
                printf("1. Crear lista. \n");
                printf("2. Insertar elementos. \n");
                printf("3. Imprimir elementos. \n");
                printf("4. Buscar elementos. \n");
                printf("5. Eliminar elementos. \n");
                printf("6. Editar elementos. \n");
                printf("7. Vaciar elementos. \n");
                printf("8. Lista vacia. \n");
                printf("9. Eliminar lista. \n");
                printf("0. Volver al menu principal. \n\n");
                printf("Ingrese una opcion: ");
                scanf("%d", &opc);

                switch(opc){
                    case 1:
                        break;
                    case 2:
                        printf("\n\n  1. Al inicio.\n");
                        printf("    2. Al final.\n");
                        printf("    3. Despues de un nodo.\n");
                        printf("    4. Antes de un nodo.\n");
                        printf("    5. En medio de dos nodos.\n");
                        printf("    6. En forma ascendente.\n");
                        printf("    7. En forma descendente.\n\n");
                        printf("    Ingrese una opcion: ");
                        scanf("%d", &opc);


                            switch(opc){
                                case 1:
                                    break;
                                case 2:
                                    break;
                                case 3:
                                    break;
                                case 4:
                                    break;
                                case 5:
                                    break;
                                case 6:
                                    break;
                                case 7:
                                    break;
                                default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                                    break;
                                }

                        break;

                    case 3:

                        printf("\n\n    1. Mostrar el primer elememto.\n");
                        printf("    2. Mostrar el ultimo elemento.\n");
                        printf("    3. Mostrar todos los elementos.\n");
                        printf("    4. Mostrar el anterior elemento a un nodo dado.\n\n");
                        printf("    Ingrese una opcion: ");
                        scanf("%d", &opc);

                            switch(opc){
                                case 1:
                                    break;
                                case 2:
                                    break;
                                case 3:
                                    break;
                                default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                                }

                        break;

                    case 4:
                        break;
                    case 5:
                        break;
                    case 6:
                        break;
                    case 7:
                        break;
                    case 8:
                        break;
                    case 9:
                        break;
                    case 0:
                        menu();
                        break;
                    default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                        break;
                }
                break;



            case 5:

                system("cls");
                printf("\n ***** MENU LISTAS SIMPLEMENTE ENLAZADAS *****\n\n");
                printf("  1. Crear lista. \n");
                printf("  2. Insertar elementos. \n");
                printf("  3. Imprimir elementos. \n");
                printf("  4. Buscar elementos. \n");
                printf("  5. Eliminar elementos. \n");
                printf("  6. Editar elementos. \n");
                printf("  7. Vaciar elementos. \n");
                printf("  8. Lista vacia. \n");
                printf("  9. Eliminar lista. \n");
                printf("  0. Volver al menu anterior. \n\n");
                printf("  Ingrese una opcion: ");
                scanf("%d", &opc);

                switch(opc){
                    case 1:
                        break;
                    case 2:
                        printf("\n\n  1. Al inicio.\n");
                        printf("    2. Al final.\n");
                        printf("    3. Despues de un nodo.\n");
                        printf("    4. Antes de un nodo.\n");
                        printf("    5. En medio de dos nodos.\n");
                        printf("    6. En forma ascendente.\n");
                        printf("    7. En forma descendente.\n\n");
                        printf("    Ingrese una opcion: "); scanf("%d", &opc);

                        switch(opc){
                        case 1:
                            break;
                        case 2:
                            break;
                        case 3:
                            break;
                        case 4:
                            break;
                        case 5:
                            break;
                        case 6:
                            break;
                        case 7:
                            break;
                        default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                            break;
                        }

                        break;
                    case 3:
                        printf("\n\n    1. Mostrar el primer elememto.\n");
                        printf("    2. Mostrar el ultimo elemento.\n");
                        printf("    3. Mostrar todos los elementos.\n");
                        printf("    4. Mostrar el anterior elemento a un nodo dado.\n\n");
                        printf("    Ingrese una opcion: ");
                        scanf("%d", &opc);

                        switch(opc){
                        case 1:
                            break;
                        case 2:
                            break;
                        case 3:
                            break;
                        default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                        }
                        break;
                    case 4:
                        break;
                    case 5:
                        break;
                    case 6:
                        break;
                    case 7:
                        break;
                    case 8:
                        break;
                    case 9:
                        break;
                    case 0:
                        menu();
                        break;
                    default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                        break;
                }
                break;



            case 6:

                system("cls");
                printf("\n***** MENU LISTAS DOBLEMENTE ENLAZADAS *****\n\n");
                printf("  1. Crear lista. \n");
                printf("  2. Insertar elementos. \n");
                printf("  3. Imprimir elementos. \n");
                printf("  4. Buscar elementos. \n");
                printf("  5. Eliminar elementos. \n");
                printf("  6. Editar elementos. \n");
                printf("  7. Vaciar elementos. \n");
                printf("  8. Lista vacia. \n");
                printf("  9. Eliminar lista. \n");
                printf("  0. Volver al menu anterior. \n\n");
                printf("  Ingrese una opcion: "); scanf("%d", &opc);

                        switch(opc){
                            case 1:
                                break;
                            case 2:
                                printf("\n\n  1. Al inicio.\n");
                                printf("    2. Al final.\n");
                                printf("    3. Despues de un nodo.\n");
                                printf("    4. Antes de un nodo.\n");
                                printf("    5. En medio de dos nodos.\n");
                                printf("    6. En forma ascendente.\n");
                                printf("    7. En forma descendente.\n\n");
                                printf("    Ingrese una opcion: ");
                                scanf("%d", &opc);

                                    switch(opc){
                                        case 1:
                                            break;
                                        case 2:
                                            break;
                                        case 3:
                                            break;
                                        case 4:
                                            break;
                                        case 5:
                                            break;
                                        case 6:
                                            break;
                                        case 7:
                                            break;
                                        default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                                            break;
                                        }

                                break;
                            case 3:
                                printf("\n\n    1. Mostrar el primer elememto.\n");
                                printf("    2. Mostrar el ultimo elemento.\n");
                                printf("    3. Mostrar todos los elementos.\n");
                                printf("    4. Mostrar el anterior elemento a un nodo dado.\n\n");
                                printf("    Ingrese una opcion: ");
                                scanf("%d", &opc);

                                    switch(opc){
                                        case 1:
                                            break;
                                        case 2:
                                            break;
                                        case 3:
                                            break;
                                        default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                                        }

                                break;
                            case 4:
                                break;
                            case 5:
                                break;
                            case 6:
                                break;
                            case 7:
                                break;
                            case 8:
                                break;
                            case 9:
                                break;
                            case 0:
                                menu();
                                break;
                            default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                                break;
                        }
                        break;



            case 7:

                system("cls");
                printf("\n  ---------- MENU DE OPERACIONES ----------\n\n");
                printf("  1. Concatenar dos listas. \n");
                printf("  2. Sumar dos listas. \n");
                printf("  3. Dividir dos listas. \n");
                printf("  4. Elevar una lista a la potencia de otra. \n");
                printf("  5. Copiar una lista en otra. \n");
                printf("  6. Problema de Josephus. \n\n");
                printf("  0. Volver al menu anterior. \n\n");
                printf("  Ingrese una opcion: ");
                scanf("%d", &opc);

                    switch(opc){
                        case 0:
                            menu();
                            break;
                        case 1:
                            break;
                        case 2:
                            break;
                        case 3:
                            break;
                        case 4:
                            break;
                        case 5:
                            break;
                        case 6:
                            break;
                        default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                            break;
                    }



            default: printf("\n LA OPCION INGRESADA NO ES VALIDA. \n\n");
                break;
            }

        system("Pause");
        system("cls");
        }while(salir!=0);
}

//FUNCIONES DE LISTAS LIFO

void crear_pila (){
    printf("\n\n LA PILA SE INICIO CORRECTAMENTE.\n\n");
}

void insertar_pila (nodo *&pila, int n){
    nodo *nuevo_nodo = reservar_memoria;
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
}

void imprimir_pila (nodo *&pila){
    while(pila_vacia(pila)!= true);{
        printf("%d",pila -> dato);
        pila = pila -> siguiente; }
}

void buscar_pila (nodo *pila){

    int datobuscado;
    bool encontrado;

    nodo *primero = reservar_memoria;
    primero = pila;

    if(pila!=NULL){
        while (primero!=NULL){
        if(primero->dato == datobuscado){
                encontrado = true;
            }
                primero = primero->siguiente;
        }

    }else{  printf("\n  PILA VACIA!\n");}

    if(encontrado){
        printf("\nEL DATO BUSCADO SE ENCUENTRA EN LA PILA!");
    }
}

void eliminar_elementos_pila (nodo *&pila, int &n){
    nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    free(aux);
}

void editar_pila (){
     int buscar=0;
    bool encontrado=false;

    nodo *actual = reservar_memoria;
    actual = inicio;

    printf("\n  Ingrese el numero que desea editar de la pila: ");
    scanf("%d", &buscar);

    if(inicio != NULL){
        while(actual != NULL){
            if(actual->dato == buscar){
                printf("\n  El numero ( %d ) se encuentra en la pila.", buscar);
                printf("\n  Ingrese el nuevo numero: "); scanf("%d", &actual->dato);
                printf("\n  Editado con exito!\n");
                encontrado = true;
            }
            actual = actual->siguiente;
        }
        if(encontrado==false){
            printf("\n  El numero (%d) no se encuentra en la pila. ", buscar);
        }
    }else{
        printf("\n  La pila esta vacia. \n\n");
    }
}

}

void vaciar_elementos_pila (){
       nodo * pila = NULL;
}

bool pila_vacia(nodo *&pila){
    return (pila==NULL)?true: false;
}

void eliminar_pila (){
}


// FUNCIONES PARA LAS LISTAS FIFO

void crear_cola(){
    printf("\n\n    LA COLA SE INCIO CORRECTAMENTE!\n\n");
}

void insertar_cola (nodo *&inicio, nodo *&fin, int n){
    nodo *nuevo_nodo = reservar_memoria;
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;
    if(cola_vacia(inicio)){
        inicio = nuevo_nodo;
    }else{ fin->siguiente = nuevo_nodo; }
    fin = nuevo_nodo;
}

void imprimir_cola (nodo *&inicio, nodo *&fin){
    while(cola_vacia(inicio)!=true){
        printf("%d", inicio->dato);
        inicio=inicio->siguiente;
    }
}

bool buscar_cola (nodo *&inicio, nodo *&fin, int n){

    bool encontrado = false;
    nodo *primero = reservar_memoria;
    primero = inicio;

    if(cola_vacia(inicio) != true){
        while (primero != fin){
            if(primero->dato == n){
                encontrado=true;
            }
        primero = primero->siguiente;
        }
    }
    return encontrado;
}

void eliminar_elementos_cola (nodo *&inicio, nodo *&fin, int &n){
    n = inicio->dato;
    nodo *aux = inicio;
    if(inicio==fin){
        inicio=NULL;
        fin=NULL;
    }else{ inicio=inicio->siguiente; }
    free(aux);
}

void editar_cola(){
}

void vaciar_elementos_cola (){
}

bool cola_vacia(nodo *&inicio){
    return (inicio==NULL)? true:false;
    printf("Pila vacia");
}

void eliminar_cola (int dato){

    nodo *inicio=NULL;
    nodo *fin=NULL;

    printf("\n ELIMINANDO ELEMENTOS DE LA COLA.\n\n");
    while (inicio != NULL){
        eliminar_elementos_cola(inicio,fin,dato);
        if (inicio!=NULL){
            printf("%d , ", dato);
        }else{ printf("%d . ", dato); }
    }
}
