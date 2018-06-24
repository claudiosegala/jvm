# JVM
A simple JVM made in C++11

## Integrantes
+ Claudio Segala Rodrigues Silva Filho - 15/0032552
+ Lincoln Abreu Barbosa - 14/0045023
+ Luís Eduardo Luz Silva - 15/0137885
+ Nícolas Machado Schumacher - 13/0047660
+ Ricardo Arôso Mendes Kury - 14/0161082

## Usage

```
cd jvm
mkdir out
cd out
cmake ..
make
./jvm "../../samples/double_aritmetica.class" > output.txt
```

## Directory Organization

    .
    ├── build                # Stuff
    ├── doc                  # Documentation
    ├── samples              # .class samples for testing
    └── src                  # Code
        ├── include          # Includes (.hpp)
        ├── lib              # Implementation of includes (.cpp)
        └── tests            # Some tests on the libs


## Usefull Links

+ [Documentation of .class](https://docs.oracle.com/javase/specs/jvms/se7/html)
