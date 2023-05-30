#include <stdio.h>
#include<math.h>

int fact (int);
void sine (long long int, float *);

int
main ()
{
  int num;
  float value;
  scanf ("%d", &num);
  sine (num, &value);
  printf ("%f", value);

  return 0;
}

void
sine (long long int x, float *value)
{
  int i, count = 1;
  *value = 0;

  for (i = 1; i < 20; i++)
    {
      if (i % 2 != 0)
	{
	  if (count % 2 != 0)
	    {
	      *value = *value + (pow (x, i) )/ fact (i);
	      count++;
	    }
	  else
	    {
	      *value = *value - (pow (x, i)) / fact (i);
	      count++;
	    }

	}
    }
}


int
fact (int n)
{
  int facto;
  if (n <= 1)
    return 1;

  else
    {
      facto = n * fact (n - 1);
      return facto;
    }

}

