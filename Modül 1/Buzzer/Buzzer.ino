
#define buzzer 12

int nota = 8;
int C = 262;
int D = 294;
int E = 330;
int F = 349;
int G = 392;
int A = 440;
int B = 494;
int C_ = 523;
int notalar[] = {C, D, E, F, G, A, B, C_};

void setup()
{
  for (int i = 0; i < nota; i++)
  {
    tone(buzzer, notalar[i]);
    delay(500);
    noTone(buzzer);
    delay(20);
  }
  noTone(buzzer);
}

void loop()
{
}
