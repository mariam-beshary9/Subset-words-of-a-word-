/**

Author : Mariam Ahmad Amin Beshary
Date : Completed 1:33 pm 9/11/2018
Purpose :This program is created to get embedded words of a word

**/


#include <iostream>
#include <cmath>
using namespace std;


int main()
{

string word ;
cout<< "Enter the word"<<endl;
cin>>word ;
cout<<"______________"<<endl<<endl ;
/*
  A B C
  1 1 1 = A B C
  1 1 0 = A B
  1 0 1 = A   C
  1 0 0 = A
  0 1 1 =   B C
  0 1 0 =   B
  0 0 1 =     C
  0 0 0 =


*/

int col= word.size ();
/// عدد اعمدة الماتركس
int nrow = pow(2,col) ;
/// عدد صفوف الماتركس
string** str=new string* [nrow];

for(int i=0;i<nrow;i++) str[i]=new string[col];
/// بعمل الماتركس
for (int i=0 ; i<col ; i++){
 int r=pow(2,col-i-1);
 /// التكرار للواحد او الزيرو في كل عمود
 /*
    في العمود الاول هيكون الرقم = 4
    في العمود التاني هيكون الرقم = 2
    في العمود التالت هيكون الرقم = 1
 */
 for (int j =0 ; j<nrow ; j++){

        for (int f=0 ; f<pow(2,i) ; f++ ){
        /// عدد مرات التكرار
                for(int h=0 ; h<r; h++){
                        str[j][i]=word[i];
                        j++;
                 }
        /// تكرار الحرف
                for (int t=0 ;t<r ;t++){
                    str[j][i]=" ";
                    j++;
          /// تكرار المسافة
                }

        }}}
/// طبع المصفوفة
for (int u=0 ; u<nrow ; u++){
for (int a=0 ; a<col ; a++){
if (str[u][a]!=" ")
 cout<<str[u][a];


}cout<<endl;}

for(int i=0;i<nrow;i++) delete[] str[i];
delete []str;


    return 0;
}
