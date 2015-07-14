#include <iodata-qt5/validator>
#include "customization.type.h"
iodata::validator * customization_data_validator(){
static bool init_done = false ;
static iodata::validator A ;
static iodata::/*validator::*/record_type record_type1 = { "customization_t", vector<iodata::/*validator::*/node*>(5) } ;
static iodata::/*validator::*/node_bytes node1("format24", 0, 0, "True") ;
static iodata::/*validator::*/node_bytes node2("useNitz", 0, 0, "True") ;
static iodata::/*validator::*/node_bytes node3("autoTime", 0, 0, "True") ;
static iodata::/*validator::*/node_bytes node4("guessTz", 0, 0, "True") ;
static iodata::/*validator::*/node_bytes node5("tz", 0, 0, "Europe/Helsinki") ;
if (not init_done) { init_done = true ;
A.set_static() ;
record_type1.nodes[0] = &node1 ;
record_type1.nodes[1] = &node2 ;
record_type1.nodes[2] = &node3 ;
record_type1.nodes[3] = &node4 ;
record_type1.nodes[4] = &node5 ;
A.types["customization_t"] = &record_type1 ;
}
return &A ;
}

