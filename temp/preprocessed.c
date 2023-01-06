void main()
{
  int a;
  int b;
  int c;
  int _N = __VERIFIER_nondet_int();
  if (!((c - b) == 2))
    return 0;
  int t = 0;
while (t < _N) {
  {
    if (a == 1)
    {
      b += a;
      c += 1;
      a = -1;
    }
    else
      if (a == (-1))
    {
      b += a;
      c -= 1;
      a = 1;
    }
    else
    {
      a = a;
      b = b;
      c = c;
    }
  }
    t++;
}

  __VERIFIER_assert((c - b) == 2);
}

