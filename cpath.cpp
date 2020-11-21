#include <iostream>
#include "Graph.h"


int main(int argc, char *argv[]){
  graph g;
  std::vector<graph::vertex_label> ccsp_rpt;
  std::vector<graph::vertex_label> ctsp_rpt;
  unsigned int source;
  unsigned int dest;
  unsigned int budget;

  if(argc < 5) {
    	std::cout << "Usage: cpath <file> <s> <d> <budget>\n";
    	return 0;
  }
  else {
    if(!g.read_file(argv[1])) {
    	std::cout << "Could not open file '" << argv[1] << "'\n";
		return 0;
	}
  }

  source = atoi(argv[2]);
  dest = atoi(argv[3]);
  budget = atoi(argv[4]);

  std::cout << "\nADJACENCY-LIST REPRESENTATION:\n\n";
  g.display();
  g.createPQ();

  // inputGraph = g.returnGraph();
  // std::cout<< inputGraph[0].outgoing;
  
  // int costList[] = {10, 14, 15, 18, 26};
  // int timeList[] = {34, 15, 26, 19, 22};

//   if(g.topo_sort(id_order)) 
//     std::cout << "topo sort succeeded!\n";
//   else 
//     std::cout << "topo sort failed (cycle?)!\n";

//   g.ids2names(id_order, name_order);

//   std::cout << "here is the topological order produced:\n\n";

//   pvec(name_order);


  return 0;
}

