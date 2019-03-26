int obtenerMaximo(int x, int y, int z){
    int aux;

    if (x >= y && x >= z){
        aux = x;
    }
    else
    {
        if (y >= z && y >= x){
            aux = y;
        }
        else
        {
            aux = z;
        }
    }
    return aux;
}
