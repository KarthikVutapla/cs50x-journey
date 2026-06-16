# Week 1 - 'C' Comamnds I learnt

> ## 1. Printf

the name is self-explainatory, it is a print function (atleast that's what i understood by f)

and you need `<stdio.h>` library for that no need of any extra things.

example
```C
#include <stdio.h>

init main(void){
    printf("Hello, world!\n");
}
```

>Output : Hello, world!

> ## 2. get_string (cs50 library sting input command)


This just asks the user for a string input and it takes it and if defined in a variable its stored in there.

However i didn't try like what happens if we give an integer (probably will store the integer as a string in there) but yeah. That's what this is in short.

```*This is the code I wrote*```

```C
#include <cs50.h> // This is an external library gotta have it in your env before you use these commands since get_string() is from this
#include <stdio.h>

int main(void){
    // here name is a variable which holds string.
    string name = get_string("What is your name: ");

    // %s here is just a string placeholder
    printf("Hello %s\n", name);
}
```