int contarPares(int x[], int y){

    int cantidadPares = 0;
    for (int i = 0; i < y; i++){

        if(x[i]%2 == 0){
            cantidadPares += 1;
        }
    }

    return cantidadPares;

}
