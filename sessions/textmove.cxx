// C-space : "set mark" defines one end of the "region"
// you move to wherever: between mark & cursor == the region
// C-w : cut the region (and C-y paste back)
// C-i : indent the region correctly.
// C-x C-x : go to the other end of the region
// C-space C-space : de-activate the mark

bool test_if_prime(int num) {
  bool test_if_prime;
  /* The for loop below is testing for whether or not
     a number is prime. For num>=10 it is really
     only necessary to test up to num/2 */
  for (int i=2; i<=num; i++) {
    /*starting loop at i=2 because a number being divisble by
      does not prove that it is not prime*/
    if (num==2) {
      test_if_prime = true;
      break;
    }
    if (num==i) {
      break;
    }
    if (num%i==0) {
      test_if_prime = false;
      break; // break out of loop once determined number is not prime
    } else {
      test_if_prime = true;
    }
  }
  return test_if_prime;
}
