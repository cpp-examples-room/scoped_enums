# scoped_enums

## task

```cpp
enum class Color {
  Red, Green, White
};

Color clr1 = Red;
Color clr2 = Color::Red;
Color clr3 = 0;
Color clr4(0);
Color clr5 = Color(0);
int n = int(clr5);
Color clr6{ 0 };
Color clr7 = { 0 };
Color clr8 = Color{ 0 };
```

## build

```bash
cmake -H. -B_builds
cmake --build _builds/
./_builds/scoped_enums
```
