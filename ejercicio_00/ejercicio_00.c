#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_EST 100
#define MAX_NOM 50
#define MAX_COD 15

typedef struct {
    char nombre[MAX_NOM];
    char codigo[MAX_COD];
    int edad;
    float promedio;
    bool activo;
} Estudiante;

Estudiante est[MAX_EST];
int total = 0;

// VALIDACIÓN
int promOk(float p) { return p >= 0.0 && p <= 10.0; }

// FUNCIONES DE ACTUALIZACIÓN (las que pides)
void actNombre(Estudiante *e) {
    printf("Nuevo nombre: ");
    getchar();
    fgets(e->nombre, MAX_NOM, stdin);
    e->nombre[strcspn(e->nombre, "\n")] = 0;
}
void actCodigo(Estudiante *e) {
    printf("Nuevo codigo: ");
    scanf("%s", e->codigo);
}
void actEdad(Estudiante *e) {
    printf("Nueva edad: ");
    scanf("%d", &e->edad);
}
void actPromedio(Estudiante *e) {
    do {
        printf("Nuevo promedio (0-10): ");
        scanf("%f", &e->promedio);
    } while(!promOk(e->promedio));
}
void actActivo(Estudiante *e) {
    int op;
    printf("Activo? (1=si, 0=no): ");
    scanf("%d", &op);
    e->activo = (op == 1);
}
// FUNCIONES DE VISUALIZACIÓN (las que pides)
void verNombre(Estudiante *e) { printf("Nombre: %s\n", e->nombre); }
void verCodigo(Estudiante *e) { printf("Codigo: %s\n", e->codigo); }
void verEdad(Estudiante *e) { printf("Edad: %d\n", e->edad); }
void verPromedio(Estudiante *e) { printf("Promedio: %.2f\n", e->promedio); }
void verActivo(Estudiante *e) { printf("Estado: %s\n", e->activo ? "Activo" : "Inactivo"); }

// MOSTRAR TODO JUNTO
void verTodo(Estudiante *e) {
    printf("\n--- ESTUDIANTE ---\n");
    verNombre(e);
    verCodigo(e);
    verEdad(e);
    verPromedio(e);
    verActivo(e);
}

// AGREGAR (como tu código original)
void agregar() {
    if (total >= MAX_EST) {
        printf("Lista llena\n");
        return;
    }
    
    printf("\n--- NUEVO ESTUDIANTE ---\n");
    printf("Nombre: ");
    getchar();
    fgets(est[total].nombre, MAX_NOM, stdin);
    est[total].nombre[strcspn(est[total].nombre, "\n")] = 0;
    
    printf("Codigo: ");
    scanf("%s", est[total].codigo);
    
    printf("Edad: ");
    scanf("%d", &est[total].edad);
    
    do {
        printf("Promedio (0-10): ");
        scanf("%f", &est[total].promedio);
    } while(!promOk(est[total].promedio));
    
    int act;
    printf("Activo (1=si, 0=no): ");
    scanf("%d", &act);
    est[total].activo = (act == 1);
    
    total++;
    printf("Agregado!\n");
}

// BUSCAR Y MOSTRAR UNO
void buscarUno() {
    if (total == 0) {
        printf("No hay estudiantes\n");
        return;
    }
    
    char cod[MAX_COD];
    printf("Codigo a buscar: ");
    scanf("%s", cod);
    
    for (int i = 0; i < total; i++) {
        if (strcmp(est[i].codigo, cod) == 0) {
            verTodo(&est[i]);
            
            // Opción para modificar
            char op;
            printf("\nModificar? (s/n): ");
            scanf(" %c", &op);
            
            if (op == 's' || op == 'S') {
                int campo;
                printf("\nQue modificar?\n");
                printf("1. Nombre  2. Codigo  3. Edad\n");
                printf("4. Promedio  5. Estado  6. Cancelar\n");
                printf("Opcion: ");
                scanf("%d", &campo);
                
                switch(campo) {
                    case 1: actNombre(&est[i]); break;
                    case 2: actCodigo(&est[i]); break;
                    case 3: actEdad(&est[i]); break;
                    case 4: actPromedio(&est[i]); break;
                    case 5: actActivo(&est[i]); break;
                    case 6: break;
                    default: printf("Opcion invalida\n");
                }
            }
            return;
        }
    }
    printf("No encontrado\n");
}

// MOSTRAR TODOS
void mostrarTodos() {
    if (total == 0) {
        printf("No hay estudiantes\n");
        return;
    }
    
    printf("\n=== TOTAL: %d ===\n", total);
    for (int i = 0; i < total; i++) {
        printf("\n[%d] ", i+1);
        verTodo(&est[i]);
    }
}

// MENÚ
void menu() {
    printf("\n=== GESTION DE ESTUDIANTES ===\n");
    printf("1. Agregar Estudiante\n");
    printf("2. Buscar estudiante por codigo\n");
    printf("3. Mostrar a todos los estudiantes\n");
    printf("4. Salir\n");
    printf("Opcion: ");
}

// MAIN
int main() {
    int op;
    
    do {
        menu();
        scanf("%d", &op);
        
        switch(op) {
            case 1: agregar(); break;
            case 2: buscarUno(); break;
            case 3: mostrarTodos(); break;
            case 4: printf("Adios\n"); break;
            default: printf("Opcion invalida\n");
        }
    } while(op != 4);
    
    return 0;
}