# Now we see how to run a program 
## steps to be follow
### Step 1:
        - Once written a java program,we have to compile it.
            - ***javac classname.java***

### Step 2:
        - After compilation succeed,we should generate header file from java class.
            - ***javah classname***
        
 > After executing javah,it will give us auto generated file.it is kind of interface like interaction between ***JAVA*** and ***C*** .

### Step 3:
        - Write a C program with help of javah file

### Step 4:
        - Once written a C program,we have to compile that but it will not compile again and again.so what can we do?
        
            ** the thing is there is one way to solve this**
### Step 5:
        - Generate Shared Library File
 >  In order to do that,we need C compiler,I have choosen gcc compiler.
        - ***gcc -shared -shared-libgcc **call.c** -o lib[World].so -I /usr/lib/jvm/jdk-11.0.12/include/ -I /usr/lib/jvm/jdk-11.0.12/include/linux/***
        - Above command there is **call.c** this is your C file what you created.
        - I have mentioned **[World]** in brackets ,its our load library we have written already in our java file. 
        - **/usr/lib/jvm/jdk-11.0.12/include/**-> jdk directory  
        - **/usr/lib/jvm/jdk-11.0.12/include/linux/**->linux directory.

### Step 6:
        -  we are all set,now run java program to get the output as you expected.

>Above step 5 shared memory used for we dont need to compile cfile again and again once executed we directly run java program.
        - ***java classname***   
