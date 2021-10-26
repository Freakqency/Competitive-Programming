#include <iostream>
#include <string>

int main (int argc, char *argv[])
{
  std::string s1 ("world");
  /* std::string s2 ("ello"); */

  /* s1.insert (0,     s2); // insert the contents of s2 at offset 0 in s1 */
  s1.insert (0, 1, 'h'); // insert one (1) 'h'        at offset 0 in s1

  std::cout << s1 << std::endl;
}
