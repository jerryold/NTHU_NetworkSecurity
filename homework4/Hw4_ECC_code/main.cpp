#include "BigNumber.hpp"
#include "Point.hpp"
#include "FiniteFieldElement.hpp"
#include "EllipticCurve.hpp"

#ifndef _DEBUG_COLOR_
#define _DEBUG_COLOR_
    #define KRED_L "\x1B[1;31m"
    #define KGRN_L "\x1B[1;32m"
    #define KYEL_L "\x1B[1;33m"
    #define KBLU_L "\x1B[1;34m"
    #define RESET "\x1B[0m"
#endif

int main(int argc, char** argv){

  //demo
  BigNumber p =  BigNumber("FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF7FFFFFFF");
  FiniteFieldElement::mod_prime = p;
  
  FiniteFieldElement a =  FiniteFieldElement("FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF7FFFFFFC");
  FiniteFieldElement b =  FiniteFieldElement("1C97BEFC54BD7A8B65ACF89F81D4D4ADC565FA45");
  FiniteFieldElement Gx = FiniteFieldElement("4A96B5688EF573284664698968C38BB913CBFC82");
  FiniteFieldElement Gy = FiniteFieldElement("23A628553168947D59DCC912042351377AC5FB32");
  BigNumber n =  BigNumber("0100000000000000000001F4C8F927AED3CA752257");
  Point g = Point(Gx,Gy);
  EllipticCurve ec = EllipticCurve(p,a,b,g,n);

  std::cout <<  KYEL_L <<"[109064518 Sheng-Che Kao Assignment#4]" << std::endl;
  std::cout <<  KGRN_L <<"<EC-ElGamal encryption-Testcase2>" << std::endl;
  
  // encrypt input
  std::string m = "8E6F2C1DC3987AFECCC6F7DDFF75EDFC324DF6";
  std::string Pa_encode = "039994C5C16070EE878F89A6143CE865AC2EC7EC5D"; // public key
  BigNumber nk = BigNumber("5487CF3D6F9E4F1C3DAEF5C3CF7D6FC33C675DC6");
  std::cout << KGRN_L <<"Plaintext M: " << m << std::endl;
  std::cout << KGRN_L <<"Pa: " << Pa_encode << std::endl;
  std::cout << KGRN_L <<"nk: " << nk << std::endl;
  
  // encrypt
  Point Pm = ec.data_embedded(m);
  std::cout << KGRN_L  <<"Mx: " << Pm.x << std::endl;
  std::cout << KGRN_L <<"My: " << Pm.y << std::endl;

  
  Point Pa = ec.decode(Pa_encode); // public key
  std::vector<Point> Cm =  ec.elgamel_encrypt(Pm, nk, Pa);
  std::cout << KGRN_L <<"Pk: " << ec.encode(Cm[0]) << std::endl;
  std::cout << KGRN_L <<"Pb: " << ec.encode(Cm[1]) << std::endl;
  
  
  std::cout << KBLU_L"\n<EC-ElGamal decryption-Testcase2>" << std::endl;

  // decrypt input
  BigNumber na = BigNumber("3C870C3E99245E0D1C06B747DEB3124DC843BB8B"); // private key
  std::cout << KBLU_L <<"na: " << na << std::endl;
  
  // decrypt
  Point Pm_after = ec.elgamel_decrypt(Cm, na);
  FiniteFieldElement m_after = ec.data_unembedded(Pm_after);
  std::cout << KBLU_L <<"Plaintext:\n" << m_after << std::endl;
  
  

  
  return 0;
}
