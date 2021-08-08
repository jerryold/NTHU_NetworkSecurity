# Miller-Rabin 
###gmp套件安裝

$ sudo apt-get install m4
$ wget https://gmplib.org/download/gmp/gmp-6.1.2.tar.bz2
$ tar –jvxf gmp-6.1.2.tar.bz2
$ cd gmp-6.1.2
$ ./configure –enable-cxx
$ make
$ make check
$ make install



### Structure of Miller-Rabin:
* GenerateRandomPrimeNum

* RabinEncryption
    
* Euclidean algorithm
       
* RabinDecryption 
   


## File Details
- 109064518_hw3.c-主要執行檔案
- gmp-6.12-需要產生bigprime所使用的套件

####自動產生main執行檔
## Makefile
To run the simply do **make**,
Then run **./hw3.out**
####手動產生main執行檔

## Compilation
If using the g++ compiler you can do:
**g++ 109064518.hw3.cpp –o ./hw3.out –lgmp –lgmpxx**
**./hw3.out**




