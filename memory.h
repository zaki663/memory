void myplan(int plan) {
  //ambil = pick
  //taruh = drop
  if (plan == 1) {
    int a = 0;
    cp[0] = 0;
    c(a++, 0, hitam, 4,  25, 200,  200, 100, 0b11000000000000, atau, 0, pid,  -100,   150,  100, hitam, 0b11000000000000, atau); //0
    c(a++, 0, hitam, 4,  25, 255, 450, 100, 0b11000000000000, atau, 0,  pid,  -100,   150,  100, hitam, 0b11000000000000, atau); //1
    c(a++, 0, hitam, 4,  3,  100, 450,  30, TM             , atau,  0, pickp,    0,     0,  3000, hitam, 0b01100000000110, atau); //2
    c(a++, 0, hitam, 4,  25,  150,   0,  100, TM             , atau,  0, pid, -100,   100,  300, hitam, 0b11000000000000, atau); //3
    c(a++, 0, hitam, 4,  25, 200, 200,  100, 0b11000000000000, atau, 0, pid,    -100,   150,  200, putih, 0b00001111110000, atau); //4
    c(a++, 0, putih, 4,  25, 200, 350, 100, 0b00000000000011, atau, 0, pid,  150,   -100,  100, putih, 0b00000000000110, atau); //5
    c(a++, 0, putih, 4,  25, 200, 300, 200, 0b11000000000011, atau,  0, free,  100,   100,  0, hitam, 0b11000000000000, atau); //6
    c(a++, 0, hitam, 6,  30, 255, 550, 100, 0b11000000000000, atau, 0, pid,  -100,   150,  100, hitam, 0b11000000000000, atau); //7
    c(a++, 0, hitam, 4,  25, 200, 150,  100, 0b11000000000000, atau,  0, free,    0,     0,  0, hitam, 0b00000000001100, atau); //8
    c(a++, 0, hitam, 4,  5,  100,   70,  50, TM             , atau,  0, drop, 0,   0,  300, hitam, 0b00000011000000, atau); //9
    c(a++, 0, hitam, 4,  25, 100, 0, 100, TM, atau, 0, pid,  100,   -100,  300, hitam, 0b00000000000011, atau); //10
    c(a++, 0, hitam, 4,  25, 200, 200, 100, 0b00000000000011, atau, 0,  pid,  150,   -100,   100, hitam, 0b00000000000011, atau); //11
    c(a++, 0, hitam, 4,  25, 200, 350,  100, 0b11000000000000, atau, 0, pid,  -100,   150,   100, hitam, 0b11000000000000, atau); //12
    c(a++, 0, hitam, 4,  25, 200, 500, 200, 0b11000000000011, atau, 0, free,  150,   -30,  0, hitam, 0b00000000001100, atau); //13
//    c(a++, 0, hitam, 3,  17, 80, 200, 100, 0b11000000000000, atau, 30,  pid,  -80,   150,  100, hitam, 0b00011000000000, atau); //14
//    c(a++, 0, hitam, 3,  17, 100, 260,  30, TM             , atau,  0, pickp,    0,     0,  300, hitam, 0b11000000000000, atau); //15
//    c(a++, 0, hitam, 3,  17,   0,   0,   0, TM             , atau,  0, pid,   50,  -150,  200, hitam, 0b00000000001100, atau); //16
//    c(a++, 0, hitam, 3,  17, 100, 550,  80, 0b00000000000011, atau, 50,  pid,  150,   -80,  100, hitam, 0b00000000001100, atau); //17
//    c(a++, 0, hitam, 3,  17, 150, 600,  80, 0b11000000000011, atau, 30, free,  100,   100,  100, hitam, 0b11000000000000, atau); //18
//    c(a++, 0, putih, 3,  17, 150, 300,  80, 0b11000000000000, atau, 30, pid,  -80,   100,  150, putih, 0b11000000000000, atau); //19
//    c(a++, 0, putih, 3,  17, 100, 200,  80, 0b00000000000011, atau, 30, pid,  160,   -80,  100, putih, 0b00000000001100, atau); //20
//    c(a++, 0, putih, 3,  17, 100, 350,  50, TM             , atau,  0, drop,    0,     0,  200, hitam, 0b11000000000000, atau); //21
//    c(a++, 0, putih, 3,  17, 0, 0, 0,  TM             , atau, 0, free, -150,   150,  240, hitam, 0b11000000000000, atau); //22
//    c(a++, 0, putih, 3,  17, 100, 400, 80,  0b11000000000000, atau, 30, pid, -80,   150,  100, putih, 0b11000000000000, atau); //23
//    c(a++, 0, putih, 3,  17, 150, 450, 100, TM             , atau,  0, free,  150,   150,  100, hitam, 0b11000000000000, atau); //24
//    c(a++, 0, hitam, 3,  17, 100, 200,  80, 0b00000000000011, atau, 50,  pid,  150,   -80,  100, hitam, 0b00000000110000, atau); //25
//    c(a++, 0, hitam, 3,  17, 120, 300, 100, 0b11000000000000, atau, 30,  pid,  -80,   150,   80, hitam, 0b11000000000000, atau); //26
//    c(a++, 0, hitam, 3,  17, 120, 400, 100, TM             , atau,  0, free,  150,   150,  0, hitam, 0b11000000000000, atau); //27
//    c(a++, 0, hitam, 3,  17,  80, 200, 30, TM             , atau,  0, pickp,  0,   0,  300, hitam, 0b10000000000001, atau); //28
//    c(a++, 0, hitam, 3,  17, 0, 0, 0,  TM             , atau, 0, free, -150,   150,  240, hitam, 0b11000000000000, atau); //29
//    c(a++, 0, hitam, 3,  17, 150, 600,  80, 0b00000000000011, atau, 50,  pid,  150,   -80,  100, hitam, 0b00000000001100, atau); //30
//    c(a++, 0, hitam, 3,  17, 120, 500, 100, TM             , atau,  0, free,  150,   150,  0, hitam, 0b11000000000000, atau); //31
//    c(a++, 0, hitam, 3,  17, 80, 400, 30, TM             , atau,  0, drop,  0,   0,  400, hitam, 0b11000000000000, atau); //32
//    c(a++, 0, hitam, 3,  17, 0, 0, 0,  TM             , atau, 0, free, -150,   150,  240, hitam, 0b11000000000000, atau); //33
//    c(a++, 0, hitam, 3,  17, 100, 150, 100, 0b11000000000000, atau,  0, pid,  -80,   150,  100, hitam, 0b11000000000000, atau); //34
//    c(a++, 0, hitam, 3,  17, 80, 220, 80, 0b00000000000011, atau, 30,  pid,  150,   -80,  100, hitam, 0b00000000001100, atau); //35
//    c(a++, 0, hitam, 3,  17, 150, 580,  80, 0b11000000000011, atau, 30, free,  100,   100,  100, hitam, 0b11000000000000, atau); //36
//    c(a++, 0, putih, 3,  17, 150, 220,  100, 0b11000000000000, atau, 50, pid,  -80,   150,  100, hitam, 0b11000000000000, atau); //37
//    c(a++, 0, putih, 3,  17, 120, 400,  80, 0b11000000000000, atau, 0, free,  -80,   150,  0, hitam, 0b11000000000000, atau); //37
  }
  if (plan == 2) {
    int a = 0;                             //JANCOK NGENE AE GAAK MARI MARI
    cp[0] = 0;                             //LEK GAK NIAT LOMBAA NGOMONGOOO
    c(a++, 0, hitam, 3,  5, 100,  200, 100, 0b11000000000000, atau, 0,   pid,     0,     0,      0, hitam, 0b11000000000000, atau); //0

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
