#include <iostream>
#include <fstream>

void rep(std::string *line, std::string s1, std::string s2)
{
  if (line->empty())
    return ;
  size_t pos = 0;
  while ((pos = line->find(s1, pos)) != std::string::npos)
  {
    line->erase(pos, s1.length());
    line->insert(pos, s2);
    pos += s2.length();
  }
}

int main(int ac, char **av)
{
  if (ac != 4)
    return (1);
  std::string filename = av[1];
  std::string s1 = av[2];
  std::string s2 = av[3];
  std::string line;
  std::ifstream ifile(filename.c_str());
  std::ofstream ofile((filename + ".replace").c_str());

  while (getline(ifile, line))
  {
    rep(&line, s1, s2);
    ofile << line << std::endl;
  }
}
