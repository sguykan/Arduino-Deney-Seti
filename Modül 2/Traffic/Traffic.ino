int Hat1[] = {13,12,11};  // Hat 1 Kırmızı - Sarı - Yeşil
int Hat2[] = {8,9,10};    // Hat 2 Kırmızı - Sarı - Yeşil
int Hat3[] = {5,6,7};     // Hat 3 Kırmızı - Sarı - Yeşil
int Hat4[] = {2,3,4};     // Hat 4 Kırmızı - Sarı - Yeşil

void setup()
{
for (int i = 0; i < 3; i++)
{
pinMode(Hat1[i], OUTPUT);
pinMode(Hat2[i], OUTPUT);
pinMode(Hat3[i], OUTPUT);
pinMode(Hat4[i], OUTPUT);
}
for (int i = 0; i < 3; i++)
{
digitalWrite(Hat1[i], 0);
digitalWrite(Hat2[i], 0);
digitalWrite(Hat3[i], 0);
digitalWrite(Hat4[i], 0);
}
}
void loop()
{
digitalWrite(Hat1[2], 1);
digitalWrite(Hat3[0], 1);
digitalWrite(Hat4[0], 1);
digitalWrite(Hat2[0], 1);
delay(7000);
digitalWrite(Hat1[2], 0);
digitalWrite(Hat3[0], 0);
digitalWrite(Hat1[1], 1);
digitalWrite(Hat3[1], 1);
delay(2000);
digitalWrite(Hat1[1], 0);
digitalWrite(Hat3[1], 0);
digitalWrite(Hat1[0], 1);
digitalWrite(Hat3[2], 1);
delay(7000);
digitalWrite(Hat3[2], 0);
digitalWrite(Hat4[0], 0);
digitalWrite(Hat3[1], 1);
digitalWrite(Hat4[1], 1);
delay(2000);
digitalWrite(Hat3[1], 0);
digitalWrite(Hat4[1], 0);
digitalWrite(Hat3[0], 1);
digitalWrite(Hat4[2], 1);
delay(7000);
digitalWrite(Hat4[2], 0);
digitalWrite(Hat2[0], 0);
digitalWrite(Hat4[1], 1);
digitalWrite(Hat2[1], 1);
delay(2000);
digitalWrite(Hat4[1], 0);
digitalWrite(Hat2[1], 0);
digitalWrite(Hat4[0], 1);
digitalWrite(Hat2[2], 1);
delay(7000);
digitalWrite(Hat1[0], 0);
digitalWrite(Hat2[2], 0);
digitalWrite(Hat1[1], 1);
digitalWrite(Hat2[1], 1);
delay(2000);
digitalWrite(Hat2[1], 0);
digitalWrite(Hat1[1], 0);
}
