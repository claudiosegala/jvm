# JVM
A simple JVM made in C++11

## Members
+ Claudio Segala Rodrigues Silva Filho
+ Lincoln Abreu Barbosa
+ Luís Eduardo Luz Silva
+ Nícolas Machado Schumacher
+ Ricardo Arôso Mendes Kury

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
