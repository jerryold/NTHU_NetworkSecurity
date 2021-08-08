#include<iostream>
#include<gmpxx.h>
#include <string.h>

using namespace std;
#ifndef _DEBUG_COLOR_
#define _DEBUG_COLOR_
    #define KRED_L "\x1B[1;31m"
    #define KGRN_L "\x1B[1;32m"
    #define KYEL_L "\x1B[1;33m"
    #define KBLU_L "\x1B[1;34m"
    #define RESET "\x1B[0m"
#endif

void Bignumber_add(mpz_t result,mpz_t op1, mpz_t op2)
{   
   
    mpz_add(result,op1,op2);
    cout<<KGRN_L<<"\na+b=";
    mpz_out_str(stdout, 16, result); //Stream, numerical base, var
    cout<<endl;

    mpz_abs(result, result);
    cout<<KGRN_L<<"\nThe absolute value result is:";
    mpz_out_str(stdout, 16, result);
    cout<<endl;

    // cin.get();
    // return;
    

    
}
void Bignumber_sub(mpz_t result,mpz_t op1, mpz_t op2)
{   
   
    mpz_sub(result,op1,op2);
    cout<<KGRN_L<<"\na-b=";
    mpz_out_str(stdout, 16, result); //Stream, numerical base, var
    cout<<endl;

    mpz_abs(result, result);
    cout<<KGRN_L<<"\nThe absolute value result is:";
    mpz_out_str(stdout, 16, result);
    cout<<endl;

   

    
}
void Bignumber_mul(mpz_t result,mpz_t op1, mpz_t op2)
{   
    
    mpz_mul(result,op1,op2);
    cout<<KGRN_L<<"\na*b=";
    mpz_out_str(stdout, 16, result); //Stream, numerical base, var
    cout<<endl;

    mpz_abs(result, result);
    cout<<KGRN_L<<"\nThe absolute value result is:";
    mpz_out_str(stdout, 16, result);
    cout<<endl;

    
    

    
}
void Bignumber_div(mpz_t result,mpz_t op1, mpz_t op2)
{   
    
    mpz_div(result,op1,op2);
    cout<<KGRN_L<<"\na/b=";
    mpz_out_str(stdout, 16, result); //Stream, numerical base, var
    cout<<endl;

    mpz_abs(result, result);
    cout<<KGRN_L<<"\nThe absolute value result is:";
    mpz_out_str(stdout, 16, result);
    cout<<endl;

    
    

    
}
void Bignumber_mod(mpz_t result,mpz_t op1, mpz_t op2)
{   
   
    mpz_mod(result,op1,op2);
    cout<<KGRN_L<<"\na%b=";
    mpz_out_str(stdout, 16, result); //Stream, numerical base, var
    cout<<endl;

    mpz_abs(result, result);
    cout<<KGRN_L<<"\nThe absolute value result is:";
    mpz_out_str(stdout, 16, result);
    cout<<endl;

   
    

    
}
int main () {
    cout << KYEL_L << "[109064518 Sheng-Che Kao Assignment#1]" << endl << endl;
    cout << KRED_L << "<Big-Number arithmetic>" << endl;
    mpz_t a,b,c;
    mpz_inits(a,b,c,NULL);

    mpz_set_str(a, "f1245ab3341ff3461818881767676819ee", 16);
    mpz_set_str(b,"ffa24387539639853800bbecbcb494990", 16); //Decimal base

    cout << KRED_L << "a=f1245ab3341ff3461818881767676819ee\n" << endl;
    cout << KRED_L << "b=ffa24387539639853800bbecbcb494990\n" << endl;
    Bignumber_add(c,a,b);
    Bignumber_sub(c,a,b);
    Bignumber_mul(c,a,b);
    Bignumber_div(c,a,b);
    Bignumber_mod(c,a,b);
    return 0;

    
}




// +加法：void mpz_add(mpz_t rop, mpz_t op1, mpz_t op2);  //rop = op1 + op2

// -减法：void mpz_sub(mpz_t rop, mpz_t op1, mpz_t op2);  //rop = op1 - op2

// *乘法：void mpz_mul(mpz_t rop, mpz_t op1, mpz_t op2); //rop = op1 * op2

// /除法 mpz_div_qr(q, t, divider)  商數 q, 被除數 t, 除數 divider
 
// % 餘數 mpz_mod(r, t, divider) 餘數 r, 被除數 t, 除數 divider, r = t %  divider
