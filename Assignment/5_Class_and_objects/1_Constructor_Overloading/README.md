# Constructor Overloading

## What is Constructor overloading?

---

In C++, We can have more than one constructor in a class with same name, as long as each has a different list of arguments.This concept is known as Constructor Overloading and is quite similar to function overloading.

---

## Requirements:

- Overloaded constructors essentially have the same name (exact name of the class) and differ by number and type of arguments.
- A constructor is called depending upon the number and type of arguments passed.
- While creating the object, arguments must be passed to let compiler know, which constructor needs to be called.

---

## Examples:

We can create more than one constructor with different arguments.
Here is a example:

```C++
 Room(int a, int b)
    {
        area = a * b;
    }
```

> Here, there are two parameters , so any constructor with two integers arguments are executed here. so the below objects will call this constructor.

```C++
  Room r2(2, 6);

```

---

> Now below constructor has three arguments and according to their arguments values of data member are assigned.

```C++
 Room(double a, double b, double c)
    {
        volume = a * b * c;
    }

```

> Object below has three double type arguments .so this object will call this constructor.

```C++
 Room r3(2.4, 6.4, 3.4);

```

---

## Output

```C++
Area = 12
Volume = 52.224

```

---

## Some refrences related to this topics:

[Stack Overflow](https://stackoverflow.com/questions/7330296/constructor-overloading-in-c)
