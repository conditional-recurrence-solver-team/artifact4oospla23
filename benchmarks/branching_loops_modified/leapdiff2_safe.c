// WARNING: The files in this directory have not been extensively tested
//   and may be incorrect. --JTB

void main(int N) {
    int x;
    int y;
    int z;
    if (!(x - y == 1 || x - y == -1)) return 0;
    for(int t = 0; t < N; t++) {
        if (z == 1) {
            x = x + 2; 
            z = 0;
        } else { 
            y = y + 2; 
            z = 1;
        }
    }
    __VERIFIER_assert(x - y == 1 || x - y == -1);
    //assert((-1 <= x - y) && (x - y <= 1));
}
