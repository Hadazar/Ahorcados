#include <iostream>
#include <cstdlib>
#include <fstream>
#include <time.h>
#include <conio.h>
#include <windows.h>

using namespace std;

    //Leer de un flujo y escribir en una cadena.
char* Leer_F_Escribir_Ca(istream&Categoria,char* x){
            Categoria>>x;
            return x;
};
    //Crear una matriz.
char** Crear_Matriz(int n,int m){
    char** Matriz=new char*[n];
    for (int i=0;i<n;i++){
        Matriz[i]=new char[m];
    };
    return Matriz;
};

    //Seleccionar una palabra aleatoria.
char* Palabra_aleotoria(istream&Categoria,char* x,int Letras){
    int z=1+rand()%(55);
    char* w=new char[Letras];
    while(z>0){
            w=Leer_F_Escribir_Ca(Categoria,x);
            z--;
    };
    return w;
};
    //Llenar a la matriz vacía con carácteres del dibujo.
char** Dibujar (char** Matriz_vacia,char** Matriz_dibujo,int s,int v){
    if(s==1){switch (v){
                case 1:Matriz_vacia[1][4]=Matriz_dibujo[1][4];
                break;
                case 2:Matriz_vacia[2][4]=Matriz_dibujo[2][4];
                break;
                case 3:Matriz_vacia[3][4]=Matriz_dibujo[3][4];
                break;
                case 4:Matriz_vacia[2][3]=Matriz_dibujo[2][3];
                break;
                case 5:Matriz_vacia[2][5]=Matriz_dibujo[2][5];
                break;
                case 6:Matriz_vacia[3][3]=Matriz_dibujo[3][3];
                break;
                case 7:Matriz_vacia[3][5]=Matriz_dibujo[3][5];
                break;
                case 8:Matriz_vacia[4][6]=Matriz_dibujo[4][6];
                break;
                case 9:Matriz_vacia[4][5]=Matriz_dibujo[4][5];
                break;
                case 10:Matriz_vacia[4][4]=Matriz_dibujo[4][4];
                break;
                case 11:Matriz_vacia[4][3]=Matriz_dibujo[4][3];
                break;
                case 12:Matriz_vacia[4][2]=Matriz_dibujo[4][2];
                break;
                case 13:Matriz_vacia[4][1]=Matriz_dibujo[4][1];
                break;
                case 14:Matriz_vacia[4][0]=Matriz_dibujo[4][0];
                break;
                case 15:Matriz_vacia[3][0]=Matriz_dibujo[3][0];
                break;
                case 16:Matriz_vacia[2][0]=Matriz_dibujo[2][0];
                break;
                case 17:Matriz_vacia[1][0]=Matriz_dibujo[1][0];
                break;
                case 18:Matriz_vacia[0][0]=Matriz_dibujo[0][0];
                break;
                case 19:Matriz_vacia[0][1]=Matriz_dibujo[0][1];
                break;
                case 20:Matriz_vacia[0][2]=Matriz_dibujo[0][2];
                break;
                case 21:Matriz_vacia[0][3]=Matriz_dibujo[0][3];
                break;
                case 22:Matriz_vacia[0][4]=Matriz_dibujo[0][4];
                break;
                case 23:Matriz_vacia[1][3]=Matriz_dibujo[1][3];
                break;
                case 24:Matriz_vacia[1][5]=Matriz_dibujo[1][5];
                break;
        };
    };
    if(s==2){switch (v){
                case 2:Matriz_vacia[1][4]=Matriz_dibujo[1][4];Matriz_vacia[2][4]=Matriz_dibujo[2][4];
                break;
                case 4:Matriz_vacia[3][4]=Matriz_dibujo[3][4];Matriz_vacia[2][3]=Matriz_dibujo[2][3];
                break;
                case 6:Matriz_vacia[2][5]=Matriz_dibujo[2][5];Matriz_vacia[3][3]=Matriz_dibujo[3][3];
                break;
                case 8:Matriz_vacia[3][5]=Matriz_dibujo[3][5];Matriz_vacia[4][6]=Matriz_dibujo[4][6];
                break;
                case 10:Matriz_vacia[4][5]=Matriz_dibujo[4][5];Matriz_vacia[4][4]=Matriz_dibujo[4][4];
                break;
                case 12:Matriz_vacia[4][3]=Matriz_dibujo[4][3];Matriz_vacia[4][2]=Matriz_dibujo[4][2];
                break;
                case 14:Matriz_vacia[4][1]=Matriz_dibujo[4][1];Matriz_vacia[4][0]=Matriz_dibujo[4][0];
                break;
                case 16:Matriz_vacia[3][0]=Matriz_dibujo[3][0];Matriz_vacia[2][0]=Matriz_dibujo[2][0];
                break;
                case 18:Matriz_vacia[1][0]=Matriz_dibujo[1][0];Matriz_vacia[0][0]=Matriz_dibujo[0][0];
                break;
                case 20:Matriz_vacia[0][1]=Matriz_dibujo[0][1];Matriz_vacia[0][2]=Matriz_dibujo[0][2];
                break;
                case 22:Matriz_vacia[0][3]=Matriz_dibujo[0][3];Matriz_vacia[0][4]=Matriz_dibujo[0][4];
                break;
                case 24:Matriz_vacia[1][3]=Matriz_dibujo[1][3];Matriz_vacia[1][5]=Matriz_dibujo[1][5];
                break;
                };
    };
    if(s==3){switch (v){
                case 3:Matriz_vacia[1][4]=Matriz_dibujo[1][4];Matriz_vacia[2][4]=Matriz_dibujo[2][4];Matriz_vacia[3][4]=Matriz_dibujo[3][4];
                break;
                case 6:Matriz_vacia[2][3]=Matriz_dibujo[2][3];Matriz_vacia[2][5]=Matriz_dibujo[2][5];Matriz_vacia[3][3]=Matriz_dibujo[3][3];
                break;
                case 9:Matriz_vacia[3][5]=Matriz_dibujo[3][5];Matriz_vacia[4][6]=Matriz_dibujo[4][6];Matriz_vacia[4][5]=Matriz_dibujo[4][5];
                break;
                case 12:Matriz_vacia[4][4]=Matriz_dibujo[4][4];Matriz_vacia[4][3]=Matriz_dibujo[4][3];Matriz_vacia[4][2]=Matriz_dibujo[4][2];
                break;
                case 15:Matriz_vacia[4][1]=Matriz_dibujo[4][1];Matriz_vacia[4][0]=Matriz_dibujo[4][0];Matriz_vacia[3][0]=Matriz_dibujo[3][0];
                break;
                case 18:Matriz_vacia[2][0]=Matriz_dibujo[2][0];Matriz_vacia[1][0]=Matriz_dibujo[1][0];Matriz_vacia[0][0]=Matriz_dibujo[0][0];
                break;
                case 21:Matriz_vacia[0][1]=Matriz_dibujo[0][1];Matriz_vacia[0][2]=Matriz_dibujo[0][2];Matriz_vacia[0][3]=Matriz_dibujo[0][3];
                break;
                case 24:Matriz_vacia[0][4]=Matriz_dibujo[0][4];Matriz_vacia[1][3]=Matriz_dibujo[1][3];Matriz_vacia[1][5]=Matriz_dibujo[1][5];
            };
    };
    return Matriz_vacia;
};

int main()
{
    bool Seguir_jugando=1;
    while (Seguir_jugando==1){

    system ("COLOR F0");
    srand(time(NULL));
    ifstream Adjetivo ("Adjetivo.txt");
    ifstream Alimento ("Alimento.txt");
    ifstream Apellido ("Apellido.txt");
    ifstream Lugar ("Lugar.txt");
    ifstream Nombre ("Nombre.txt");
    ifstream Objeto ("Objeto.txt");
    ifstream Profesion ("Profesion.txt");
    ifstream Ser_vivo ("Ser_vivo.txt");
    ifstream Verbo ("Verbo.txt");
    ifstream Dibujo ("Dibujo.txt");
    ifstream Puntaje_maximo ("Puntaje_maximo.txt");

    int y=1+rand()%(9);
    int Letras=30;
    char* Palabra=new char[Letras];

        //Selección de una categoría y una palabra al azar.
    switch (y){
        case 1:Palabra_aleotoria(Adjetivo, Palabra, Letras);
            break;
        case 2:Palabra_aleotoria(Alimento, Palabra, Letras);
            break;
        case 3:Palabra_aleotoria(Apellido, Palabra, Letras);
            break;
        case 4:Palabra_aleotoria(Lugar, Palabra, Letras);
            break;
        case 5:Palabra_aleotoria(Nombre, Palabra, Letras);
            break;
        case 6:Palabra_aleotoria(Objeto, Palabra, Letras);
            break;
        case 7:Palabra_aleotoria(Profesion, Palabra, Letras);
            break;
        case 8:Palabra_aleotoria(Ser_vivo, Palabra, Letras);
            break;
        case 9:Palabra_aleotoria(Verbo, Palabra, Letras);
            break;

    };

    int n=0;
    bool c=0;

        //Determinacion de la cantidad de letras.
    while(c==0){
      if ((int)(Palabra[n])==0){c=1;}
      else {n++;};
    };

        //Contruccion de la palabra oculta.
    char* Palabra_oculta=new char[n];
    int j=0;

    while(j<n){
        Palabra_oculta[j]='_';
        j++;
    };

        //Llenado de una matriz con los caráteres del dibujo.
    char** Matriz_dibujo=Crear_Matriz(5,7);
    for (int i=0;i<5;i++){
        for (int j=0;j<7;j++){
            char t;
            Dibujo>>t;
            Matriz_dibujo[i][j]=t;
        };
    };

        //Llenado de una matriz de igual tamaño de la anterior, pero con espacios vacíos.
    char** Matriz_vacia=Crear_Matriz(5,7);
    for (int i=0;i<5;i++){
        for (int j=0;j<7;j++){
            Matriz_vacia[i][j]=32;
        };
    };

        //Descripcioión del juego.
    cout <<"Ahorcados Clasico"<<'\n'<< endl;
    cout <<"El juego consiste en adivinar una palabra seleccionada al azar antes"<<endl;
    cout <<"de que el dibujo del 'ahorcado' se termine, puede valerse de pistas"<<endl;
    cout <<"si lo desea, pero usarlas tambien genera una progresion en el dibujo"<<endl;
    cout <<"del 'ahorcado'.Pulse una letra para intentar adivinar la palabra.Pulse"<<endl;
    cout <<"la tecla '0' para usar una pista.Advertencia: Las pistas pueden repetirse."<<'\n'<<endl;
    cout <<"Seleccione un nivel de dificultad:"<<endl;
    cout <<'\n'<< endl;
    cout <<"1. Facil."<<endl;
    cout <<"2. Medio."<<endl;
    cout <<"3. Dificil."<<'\n'<<endl;
    cout <<"Nivel de dificultad: ";

        //Determinación del nivel de dificultad.
    char s_c;
    int s;
    s_c=getch();
    cout <<s_c;
    Sleep(500);
    if (!(s_c==49||s_c==50||s_c==51)){
        cout <<'\n'<<'\n'<<"El caracter introducido no corresponde a ningun nivel."<<endl;
        cout <<"Se seleccionara por defecto: 'Dificil'."<<endl;
        s=3;
        cout <<"Presione una tecla para continuar."<<endl;
        getch();
    }else {
        if (s_c==49){s=1;};
        if (s_c==50){s=2;};
        if (s_c==51){s=3;};
    };
                    //Pista 3: categoría.
    system("cls");


        //Desarrollo del juego.

    char* Letras_usadas=new char[200];
    Letras_usadas[0]=0;
    int k=0;
    int b=0;
    int v=0;
    j=0;
    int Vocales=0;
    while (b!=n&&v<24){
            //Dibujo.
        cout <<"Dibujo: "<<'\n'<<endl;
        for (int i=0;i<5;i++){
            for (int j=0;j<7;j++){
                cout <<Matriz_vacia[i][j];
            };
        cout<<'\n';
        };
        cout<<'\n';

            //Impresión en pantalla de las letras usadas.
        j=0;
        cout <<"Letras usadas: ";
        while (Letras_usadas[j]!=0){
            cout <<Letras_usadas[j]<<" ";
            j++;
        };
        cout<<'\n'<<endl;

        cout <<"Palabra: "<<'\n'<<endl;

            //Impresion en la pantalla de la palabra oculta.
        j=0;
        while (j<n){
            cout <<Palabra_oculta[j]<<" ";
            j++;
        };
        cout<<'\n'<<endl;

        char Letra;
        Letra=getch();;
        cout<<'\n'<<endl;

            //Conversión de mayúsculas a minúsculas.
        if ((int)Letra>=65&&(int)Letra<=90){
            Letra=(int)Letra+32;
        };
            //Verificación de que el carácter introducido es una letra.
        if (!((int)Letra>=97&&(int)Letra<=122)&&(Letra!='0')){
            cout <<"El caracter introducido no es una letra"<<endl;
            cout <<'\n'<<"Presiona una tecla para continuar.";
            getch();
            if (s==1){
                v=v+s;
                Matriz_vacia=Dibujar(Matriz_vacia,Matriz_dibujo,s,v);
            };
            //Pistas.
        }else if (Letra=='0'){
            cout <<'\n'<<"Pista: ";
            int z=1+rand()%(5);
            Vocales=0;
            switch (z){
                    //Pista 1: cantidad de vocales.
                case 1:j=0;
                    while (j<n){
                        if (Palabra[j]=='a'||Palabra[j]=='e'||Palabra[j]=='i'||Palabra[j]=='o'||Palabra[j]=='u'){Vocales++;};
                        j++;
                    };
                    cout <<"La palabra tiene "<<Vocales<<" vocales."<<endl;
                break;
                    //Pista 2: cantidad de consonantes.
                case 2:j=0;
                    while (j<n){
                        if (Palabra[j]=='a'||Palabra[j]=='e'||Palabra[j]=='i'||Palabra[j]=='o'||Palabra[j]=='u'){Vocales++;};
                        j++;
                    };
                    cout <<"La palabra tiene "<<n-Vocales<<" consonantes."<<endl;
                break;
                    //Pista 3: categoría.
                case 3:switch (y){
                        case 1:cout<<"Es un adjetivo."<<endl;
                        break;
                        case 2:cout<<"Es un alimento."<<endl;
                        break;
                        case 3:cout<<"Es un apellido."<<endl;
                        break;
                        case 4:cout<<"Es un lugar."<<endl;
                        break;
                        case 5:cout<<"Es un nombre."<<endl;
                        break;
                        case 6:cout<<"Es un objeto."<<endl;
                        break;
                        case 7:cout<<"Es una profesion."<<endl;
                        break;
                        case 8:cout<<"Es un ser vivo."<<endl;
                        break;
                        case 9:cout<<"Es un verbo."<<endl;
                        break;
                case 4:
                    cout<<"La primera letra es:"<<Palabra[0]<<endl;
                    break;

                                    //Pista 5: ultima letra.
                case 5:
                    cout<<"La ultima letra es:"<<Palabra[n-1]<<endl;
                    break;
            };
        v=v+s;
        Matriz_vacia=Dibujar(Matriz_vacia,Matriz_dibujo,s,v);
        cout <<'\n'<<"Presiona una tecla para continuar.";
       getch();
        }else {

                    };
                break;
                                    //Pista 4: Primera letra.
            c=0;
            j=0;
            bool d=0;

                //comprobación de que la letra introducida no había sido introducida antes.
            while (c==0){
                if (Letra==Letras_usadas[j]){c=1;};
                if (Letras_usadas[j]==0){c=1;d=1;};
                j++;
            };

            if (d==0){
            cout <<"Ya introdujo esa letra, introduzca una diferente"<<endl;
            cout <<'\n'<<"Presiona una tecla para continuar.";
            getch();
            if (s==1){
                v=v+s;
                Matriz_vacia=Dibujar(Matriz_vacia,Matriz_dibujo,s,v);
            };
            }

                //Llenado de la palabra oculta y registro de las letras usadas.
            else {
                j=0;
                c=0;
                while(j<n){
                    if(Letra==Palabra[j]){Palabra_oculta[j]=Letra;b++;c=1;};
                    j++;
                };
                if (c==0){
                    v=v+s;
                    Matriz_vacia=Dibujar(Matriz_vacia,Matriz_dibujo,s,v);
                };
                Letras_usadas[k]=Letra;
                Letras_usadas[k+1]=0;
                k++;
            };
        };
            //Última impresión en pantalla.
        if (b==n){
        system("cls");
            //Dibujo.
        cout <<"Dibujo: "<<'\n'<<endl;
        for (int i=0;i<5;i++){
            for (int j=0;j<7;j++){
                cout <<Matriz_vacia[i][j];
            };
        cout<<'\n';
        };
        cout<<'\n';

            //Impresión en pantalla de las letras usadas.
        j=0;
        cout <<"Letras usadas: ";
        while (Letras_usadas[j]!=0){
            cout <<Letras_usadas[j]<<" ";
            j++;
        };
        cout<<'\n'<<endl;

        cout <<"Palabra: "<<'\n'<<endl;

            //Impresion en la pantalla de la palabra oculta.
        j=0;
        while (j<n){
            cout <<Palabra_oculta[j]<<" ";
            j++;
        };
        cout<<'\n'<<endl;
        Sleep(500);
        };
        system("cls");

    };

        //Derrota.
    if (v==24){
        cout <<"Dibujo: "<<'\n'<<endl;
        for (int i=0;i<5;i++){
            for (int j=0;j<7;j++){
                cout <<Matriz_vacia[i][j];
            };
        cout<<'\n';
        };
        cout<<'\n';
        cout <<"Ahorcado!"<<'\n'<<endl;
        cout <<"Has perdido!"<<'\n'<<endl;
        cout <<"La palabra era: "<<Palabra<<'\n'<<endl;
    }
        //Victoria.
    if (b==n){
        cout <<"Dibujo: "<<'\n'<<endl;
        for (int i=0;i<5;i++){
            for (int j=0;j<7;j++){
                cout <<Matriz_vacia[i][j];
            };
        cout<<'\n';
        };
        cout<<'\n';
        cout <<"Palabra: "<<Palabra<<'\n'<<endl;
        cout <<"Has ganado!"<<'\n'<<endl;

        double Puntaje=100*s*n/(v+1);
        cout <<"Puntaje: "<<Puntaje<<'\n'<<endl;
        double w;
        Puntaje_maximo>>w;
        if (Puntaje>w){
            cout <<"Nuevo record!"<<'\n'<<endl;
            Puntaje_maximo.close();
            ofstream Puntaje_maximo ("Puntaje_maximo.txt");
            Puntaje_maximo<<Puntaje;
        }
        };

    cout <<"Si desea salir introduzca '1', sino introduzca cualquier caracter."<<'\n'<<endl;
    char s_j=getch();
    cout <<s_j;
    Sleep(500);
    if (s_j=='1'){Seguir_jugando=0;}
    else {Seguir_jugando=1;};
    system("cls");


    Alimento.close();
    Apellido.close();
    Ser_vivo.close();
    Puntaje_maximo.close();
    Lugar.close();
    Adjetivo.close();
    Nombre.close();
    Verbo.close();
    Objeto.close();
    Profesion.close();
    Dibujo.close();
    };
    return 0;
}
