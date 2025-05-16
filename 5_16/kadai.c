// 長方形の面積を求める関数を作りなさい
//　2つの実数を受け取り、その値を掛け算した値を返す関数
#include <stdio.h>

//関数のプロトタイプ宣言
float chohokei(float y,float x);
//main関数
int main(void){
   float s=chohokei(5.9,3.7);//関数を呼び出すことができる
   printf("%f\n",s);
    return 0;
}
//chohokei関数
float chohokei(float y,float x/*引数*/){
    //長方形の面積を求める内容　→　縦と横の掛け算
    float s;
    s=y*x;
    return s;
}