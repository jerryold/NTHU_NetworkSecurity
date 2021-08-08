# EC-ElGamal cryptosystem(根據不同Testcase需要到main.cpp進行Plaintext M ,Pa,nk,na的輸入值修改)




### Structure of Miller-Rabin:

├── BigNumber             ## BigNumber Operation
├── FiniteFieldElement   ## FiniteFieldElement Operation based on BigNumber
├── Point                 ## Point element of Elliptic Curve
└── EllipticCurve        ## Main Cryptography method

   


## File Details
- main.cpp-主要執行檔案，根據其他先前計算做最後ECC加解密動作
- BigNumber.cpp-處理計算Bignumber動作function
- BigNumber.hpp-宣告Bignumber 內所使用變數
- FiniteFieldElement.cpp-設定出一個有限域Fp
- FiniteFieldElement.hpp-宣告FiniteFieldElement.cpp 內所使用變數
- Point.cpp-取得橢圓曲線上的point點
- Point.hpp-宣告Point.cpp 內所使用變數
- EllipticCurve.cpp-橢圓曲線計算
- EllipticCurve.hpp-宣告EllipticCurve.cpp 內所使用函變數



####自動產生main執行檔,使用Makefile檔
## Makefile
To run the simply do **make**,
Then run **./homework4.out**

####手動產生main執行檔

## Compilation
If using the g++ compiler you can do:
**g++ main.cpp BigNumber.cpp FiniteFieldElement.cpp Point.cpp EllipticCurve.cpp -o homework4**
**./homework4.out**




