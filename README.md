# JVM
A simple JVM made in C++11

## Usage

To build the project:

```
# inside JVM project folder
mkdir out
cd out
cmake ..
make
```

To execute it:

```
# inside JVM project folder
./jvm "./samples/double_aritmetica.class"
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
