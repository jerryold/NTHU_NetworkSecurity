Set up on Linux Debian System-Step Description
$ sudo apt-get install m4
$ wget https://gmplib.org/download/gmp/gmp-6.1.2.tar.bz2
$ tar –jvxf gmp-6.1.2.tar.bz2
$ cd gmp-6.1.2
$ ./configure –enable-cxx
$ make
$ make check
$ make install
Compile and Run the Program
$ g++ 109064518_hw1.cpp –o hw1 –lgmp –lgmpxx
$ ./hw1


