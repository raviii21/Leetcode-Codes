// Link: https://leetcode.com/problems/integer-to-roman

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: integer-to-roman
 *  RUNTIME: 17 ms
 *  MEMORY: 11 MB
 *  DATE: 12-17-2022, 10:53:34 AM
 *
 */

// Solution:

class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int,string> p;
        p[1]="I";
        p[4]="IV";
        p[5]="V";
        p[9]="IX";
        p[10]="X";
        p[40]="XL";
        p[50]="L";
        p[90]="XC";
        p[100]="C";
        p[400]="CD";
        p[500]="D";
        p[900]="CM";
        p[1000]="M";

        string s;
        while(num!=0){
            if(num>=1 && num<=4){
               if(num==4) {
                 s+=p[4];
                 return s;
               }
               s+=p[1];
               num-=1;
            }
            else if(num>=5 && num<=9){
               if(num==9){
                   s+=p[9];
                   return s;
               }
               s+=p[5];
               num-=5;
            }
            else if(num>=10 && num<=40){
               if(num==40) {
                   s+=p[40];
                   return s;
               }
               s+=p[10];
               num-=10;
            }
            else if(num>=41 && num<=50){
               if(num==50) {
                   s+=p[50];
                   return s;
               }
               s+=p[40];
               num-=40;
            }
            else if(num>=51 && num<=90){
               if(num==90) {
                   s+=p[90];
                   return s;
               }
               s+=p[50];
               num-=50;
            }
            else if(num>=91 && num<=100){
               if(num==100) {
                   s+=p[100];
                   return s;
               }
               s+=p[90];
               num-=90;
            }
            else if(num>=101 && num<=400){
               if(num==400) {
                   s+=p[400];
                   return s;
               }
               s+=p[100];
               num-=100;
            }
           else if(num>=401 && num<=500){
               if(num==500) {
                 s+=p[500];  
                 return s;  
               }
               s+=p[400];
               num-=400;
            } 
            else if(num>=501 && num<=900){
               if(num==900) {
                s+=p[900];  
                 return s;
               }
               s+=p[500];
               num-=500;
            } 
            else if(num>=901 && num<=1000){
               if(num==1000) {
                 s+=p[1000];  
                 return s;
               }
               s+=p[900];
               num-=900;
            } 
            else if(num>1000){
                s+=p[1000];
                num-=1000;
            }
        }

        return s;
       
    }
};
