struct point {
  int x,y;
} point;

  int main(int argc, char *argv[]) {

    point *p;
    
    p = (point *) malloc(sizeof(point) * 5);

    p[0].x = 0;
    p[0].y = 5;


    

  }
