
# Legacy C

- you will have errors if you define variables underneath function calls or even if statments ...
- in old style C variables have to be declared on the top
- how you get around it ? in an old compiler ..
```c
{
	int a = 10;
}
```

- on certain versions of c for loops should be like that
```
int i = 0;
for(i = 0; i < 10; i++)
{
	
}

// instead of
// for(int i=0; i < 30; i++) ...
```

- newest version
```sh
gcc main.c -o a --std=11 
```
