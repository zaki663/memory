void myplan(int plan) {
  //ambil = pick
  //taruh = drop
  if (plan == 1) {
    int a = 0;
    cp[0] = 0;
    c(a++, 0, hitam, 5,  8, 200,  220, 100, 0b11000000000000, atau, 0, pid,  -100,   150,  100, hitam, 0b01100000000000, atau); //0
  }
  if (plan == 2) {
    int a = 0;
    cp[0] = 4;
    cp[1] = 5;
    cp[2] = 8;
    c(a++, 0, hitam, 5, 8, 150,  220, 100, 0b11000000000000, atau, 0, pid,  -50,   100,  200, hitam, 0b00000111100000, atau); //0
    c(a++, 0, hitam, 5, 10, 180,  200, 200, 0b11000000000011, atau, 0, free,  -100,   150,  0, hitam, 0b01100000000000, atau); //1
    c(a++, 0, hitam, 5, 10, 225, 250, 100, 0b11000000000000, atau, 10,  pid,  -50,   100,  200, hitam, 0b01111000000000, atau); //2
    c(a++, 0, hitam, 3,  2,  100, 450,  30, TM             , atau,  0, pickp,    0,     0,  3000, hitam, 0b01100000000110, atau); //3
    c(a++, 0, hitam, 5, 15,  150,   0,  100, TM             , atau,  0, pid, -100,   100,  300, hitam, 0b11000000000000, atau); //4
    c(a++, 0, hitam, 5, 15, 150, 150,  100, 0b11100000000000, atau, 0, pid,    -60,   120,  250, putih, 0b00000001111000, atau); //5
    c(a++, 0, putih, 5, 15, 150, 400, 100, 0b00000000000011, atau, 0, pid,  150,   -100,  100, putih, 0b00000000000110, atau); //6
    c(a++, 0, putih, 5, 15, 200, 300, 200, 0b11000000000011, atau,  0, free,  100,   100,  0, hitam, 0b11000000000000, atau); //7
    c(a++, 0, hitam, 2, 10, 200, 550, 100, 0b11000000000000, atau, 25, pid,  -50,   100,  200, hitam, 0b01111000000000, atau); //8
    c(a++, 0, hitam, 5, 8, 100, 150,  100, 0b11000000000000, atau,  0, free,    0,     0,  0, hitam, 0b00000000001100, atau); //9
    c(a++, 0, hitam, 5, 8,  100,   60,  50, TM             , atau,  0, drop, 0,   0,  300, hitam, 0b00000011000000, atau); //10
    c(a++, 0, hitam, 5,  8, 100, 0, 100, TM, atau, 0, pid,  -100,   0,  300, hitam, 0b00011110000000, atau); //11
    c(a++, 0, hitam, 5,  8, 200, 400,  100, 0b11000000000000, atau,  0, pid,    -50,     100,  200, hitam, 0b00111000000000, atau); //12
    c(a++, 0, hitam, 2,  8, 200, 400,  100, 0b11000000000000, atau,  0, pid,    -50,     100,  200, hitam, 0b00111000000000, atau); //13
    c(a++, 0, hitam, 5,  8, 200, 350,  100, 0b11100000000111, atau,  0, free,    100,     100,  50, hitam, 0b00110000000000, atau); //14
    c(a++, 0, hitam, 3,  2, 100, 30,  30, TM              , atau,  0, pickp,    0,     0,  3000, hitam, 0b00110000001100, atau); //15
    c(a++, 0, hitam, 5,  8, 100, 0,  50, TM               , atau,  0, pid,    -100,     100,  350, hitam,0b11111100000000, atau); //16
    c(a++, 0, hitam, 6,  18, 200, 600,  100, 0b00000000000011, atau,  0, pid,    100,     -50,  200, hitam, 0b00000001111000, atau); //17
    c(a++, 0, hitam, 2,  10, 150, 750,  60,               TM, atau,  0, drop,    0,       0,  300, hitam, 0b00000000001100, atau); //18
    c(a++, 0, hitam, 5,  10, 150, 0,  60,               TM, atau,  0, pid,    -100,       100,  300, hitam, 0b01100000000000, atau); //19
    c(a++, 0, hitam, 5,  8, 150, 300,  100,0b11000000000000, atau,  0, pid,    -50,       100,  200, hitam, 0b00110000000000, atau); //20
    c(a++, 0, hitam, 5,  8, 150, 200,  100,0b00000000000011, atau,  0, pid,    100,       -50,  200, hitam, 0b00000000001100, atau); //21
    c(a++, 0, hitam, 5,  15, 200, 450,  100,0b11000000000011, atau,  0, free,    100,       -50,  0, hitam, 0b00000000001100, atau); //22
    c(a++, 0, putih, 5,  8, 100, 250,  100,0b00000000000011, atau,  0, pid,    100,       -50,  300, hitam, 0b00000000111100, atau); //23
    c(a++, 0, hitam, 5,  8, 100, 180,  100,0b11000000000000, atau,  0, pid,    -50,       100,  200, hitam, 0b00111100000000, atau); //24
    c(a++, 0, hitam, 5,  8, 100, 100,  100,0b11000000000011, atau,  0, free,    100,       100,  50, hitam, 0b00111100000000, atau); //25
    c(a++, 0, hitam, 3,  2, 100, 0,  30,TM                , atau,  0, pickp,    0,       0,  3000, hitam, 0b01100000000110, atau); //26
    c(a++, 0, hitam, 5,  8, 100, 0, 100, TM, atau, 0, pid,  0,   -100,  300, hitam, 0b00000011110000, atau); //27
    c(a++, 0, hitam, 5,  8, 100, 200,  100,0b00000000000011, atau,  0, pid,    100,       -50,  200, hitam, 0b00000011110000, atau); //28
    c(a++, 0, hitam, 5,  8, 150, 150,  200,0b11000000000011, atau,  0, free,    100,       -50,  0, hitam, 0b00000011110000, atau); //29
    c(a++, 0, hitam, 5,  8, 200, 450,  100,0b11000000000011, atau,  0, free,    100,       -50,  0, hitam, 0b00000011110000, atau); //30
    c(a++, 0, putih, 5,  8, 100, 350,  100,0b11000000000000, atau,  0, pid,    -50,       100,  200, putih, 0b00111100000000, atau); //31
    c(a++, 0, putih, 5,  8, 100, 400,  100,0b00000000000011, atau,  0, pid,    100,       -50,  200, putih, 0b00000011110000, atau); //32
    c(a++, 0, putih, 5,  8, 150, 100,  100,0b00000000000011, atau,  0, free,    100,       -50,  0, putih, 0b00000011110000, atau); //33
    c(a++, 0, putih, 5,  8, 100, 80,  50,TM               , atau,  0, drop,    0,       0,  300, putih, 0b00000011110000, atau); //34
    c(a++, 0, putih, 5,  8, 100, 0,  50,TM               , atau,  0, pid,    100,       -100,  350, putih, 0b00000000000011, atau); //35
    c(a++, 0, putih, 5,  8, 100, 150,  100,0b11000000000000, atau,  0, pid,    -50,       100,  200, putih, 0b00011110000000, atau); //36
    c(a++, 0, putih, 5,  8, 100, 150,  100,0b00000000000011, atau,  0, pid,    100,       -50,  200, putih, 0b00000001111000, atau); //37
    c(a++, 0, putih, 5,  8, 150, 300,  200,0b11000000000011, atau,  0, free,    100,       -50,  0, putih, 0b00000001111000, atau); //38
    c(a++, 0, hitam, 5,  8, 225, 550,  100,0b11000000000000, atau,  0, pid,    -50,       100,  200, hitam, 0b00011110000000, atau); //39
    c(a++, 0, hitam, 5,  8, 150, 200,  200,0b11000000000000, atau,  0, free,    -50,       100,  0, hitam, 0b01111000000000, atau); //40
    c(a++, 0, hitam, 5,  8, 225, 100,  150,0b11000000000011, atau,  0, free,    -50,       100,  0, hitam, 0b01111000000000, atau); //41
    c(a++, 0, putih, 5,  8, 150, 200,  200,0b11000000000000, atau,  0, free,    -50,       100,  0, hitam, 0b01111000000000, atau); //42
    c(a++, 0, putih, 5,  10, 200, 100,  100,0b11000000000000, atau,  0, free,    -50,       100,  0, hitam, 0b01111000000000, atau); //43
    c(a++, 0, putih, 5,  10, 100, 150,  100,0b11000000000000, atau,  0, free,    30,       30,  130, hitam, 0b01111000000000, atau); //44
  }
  if (plan == 3) {
    int a = 0;                             //JANCOK NGENE AE GAAK MARI MARI
    cp[0] = 0;                             //LEK GAK NIAT LOMBAA NGOMONGOOO
    c(a++, 0, hitam, 3,  5, 100,  200, 100, 0b11000000000000, atau, 0,   pid,     0,     0,      0, hitam, 0b11000000000000, atau); //0
  }
  if (plan == 4) {
    int a = 0;                             //JANCOK NGENE AE GAAK MARI MARI
    cp[0] = 0;                             //LEK GAK NIAT LOMBAA NGOMONGOOO
    c(a++, 0, hitam, 3,  5, 100,  200, 100, 0b11000000000000, atau, 0,   pid,     0,     0,      0, hitam, 0b11000000000000, atau); //0

  }
  if (plan == 5) {
    int a = 0;                             //JANCOK NGENE AE GAAK MARI MARI
    cp[0] = 0;                             //LEK GAK NIAT LOMBAA NGOMONGOOO
    c(a++, 0, hitam, 3,  5, 100,  200, 100, 0b11000000000000, atau, 0,   pid,     0,     0,      0, hitam, 0b11000000000000, atau); //0
  }

  if (plan == 6) {
    int a = 0;                             //JANCOK NGENE AE GAAK MARI MARI
    cp[0] = 0;                             //LEK GAK NIAT LOMBAA NGOMONGOOO
    c(a++, 0, hitam, 3,  5, 100,  200, 100, 0b11000000000000, atau, 0,   pid,     0,     0,      0, hitam, 0b11000000000000, atau); //0
  }
  if (plan == 7) {
    int a = 0;                             //JANCOK NGENE AE GAAK MARI MARI
    cp[0] = 0;                             //LEK GAK NIAT LOMBAA NGOMONGOOO
    c(a++, 0, hitam, 3,  5, 100,  200, 100, 0b11000000000000, atau, 0,   pid,     0,     0,      0, hitam, 0b11000000000000, atau); //0
  }
  if (plan == 8) {
    int a = 0;                             //JANCOK NGENE AE GAAK MARI MARI
    cp[0] = 0;                             //LEK GAK NIAT LOMBAA NGOMONGOOO
    c(a++, 0, hitam, 3,  5, 100,  200, 100, 0b11000000000000, atau, 0,   pid,     0,     0,      0, hitam, 0b11000000000000, atau); //0
  }

}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
