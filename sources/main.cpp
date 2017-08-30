int main()
{
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
}
