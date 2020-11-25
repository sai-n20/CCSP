#include <iostream>
#include "Graph.h"


int main(int argc, char* argv[]) {
  graph g;
  unsigned int source;
  unsigned int dest;
  unsigned int budget;

  if (argc < 5) {
    std::cout << "Usage: cpath <file> <s> <d> <budget>\n";
    return 0;
  }
  else {
    if (!g.read_file(argv[1])) {
      std::cout << "Could not open file '" << argv[1] << "'\n";
      return 0;
    }
  }

  source = atoi(argv[2]);
  dest = atoi(argv[3]);
  budget = atoi(argv[4]);

  g.createPQ(source, dest, budget);

  return 0;
}

