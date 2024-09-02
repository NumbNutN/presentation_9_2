All project can be built using catkin compiling system.
```
mkdir -p myworkspace/src
cd myworkspace/src
git clone https://github.com/NumbNutN/presentation_9_2.git
mv ./presentation_9_2/* .
cd ../
catkin_make
```

## example1

A simple example how the basic parts in a C/C++ compiling system : preprocessing, compilation, linking, loading work. 


View the form of a translation unit after preprocessing:

```
g++ -E ./src/example1/src/main.cpp
```

## example2
A simple ros project show how dynamic linking work and where your program find the dynamic libraries it need.


See reliable dynamic libraires of a executable
```
ldd ./devel/lib/example2/exec2
```

Remove the content in $LD_LIBRARY_PATH and run again
```
export LD_LIBRARY_PATH=""

./devel/lib/example2/exec2
```

## example3
A simple example shows which signal cause your pragram exit when running.

## example4
A simple example shows how to use debugger

```
gdb ./devel/lib/example4/exec4
```


