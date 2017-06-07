# **README**

### **Description**

**Subject**: C

**Day02** will let you dive into **C**. You will deal with:

+ **C functions**
+ **While loops**
+ **If conditions**

### **Main**

This is an example of **main.c** file:

```c
#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int main(void)
{
  ft_putchar('z');
  return(0);
}
```

**Note**: this program prints the letter z.

### **Resources**

+ **[Combinations](http://rosettacode.org/wiki/Combinations#C)**

### **Bonus**

+ **[Binomial coefficient](https://en.wikipedia.org/wiki/Binomial_coefficient)**
