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

<br>

---

<br>

> ## 2. get_string (cs50 library string input command)


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

<br>

---

<br>

> ## 3. Conditionals

I wanna mention something here! It's small but I wanna mention it!

I was writing a code and naturally this happened..

```C
printf("Hello %s, Good to see you here!", name)
```
so this works for string right? "%s"

<br>

so I did this for integer and I got it wrong
```C
printf("Your age is %n",age)
```

### Why this is wrong?
beacuse its not a "number" its an "integer" soo

` %n ❌  %i ✅`