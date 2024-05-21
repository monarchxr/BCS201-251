//replace function with this

char* catAndMouse(int x, int y, int z) {
    int d1 = abs(x-z);
    int d2 = abs(y-z);
    
    if(d1<d2){
        return "Cat A";
    }else if(d1>d2){
        return "Cat B";
    }else{
        return "Mouse C";
    }
}
