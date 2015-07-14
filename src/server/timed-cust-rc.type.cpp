#include <iodata-qt5/validator>
#include "timed-cust-rc.type.h"
iodata::validator * foo(){
static bool init_done = false ;
static iodata::validator A ;
static iodata::/*validator::*/record_type record_type1 = { "const_t", vector<iodata::/*validator::*/node*>(1) } ;
static iodata::/*validator::*/record_type record_type2 = { "timed_cust_rc_t", vector<iodata::/*validator::*/node*>(4) } ;
static iodata::/*validator::*/node_bytes node1("rc_location", 0, 0, "/etc/timed-cust.rc") ;
static iodata::/*validator::*/node_bytes node2("time_nitz", 0, 0, "yes") ;
static iodata::/*validator::*/node_bytes node3("format_24", 0, 0, "r") ;
static iodata::/*validator::*/node_bytes node4("default_tz", 0, 0, "327") ;
static iodata::/*validator::*/node_bytes node5("hash", 0, 0, "") ;
if (not init_done) { init_done = true ;
A.set_static() ;
record_type1.nodes[0] = &node1 ;
A.types["const_t"] = &record_type1 ;
record_type2.nodes[0] = &node2 ;
record_type2.nodes[1] = &node3 ;
record_type2.nodes[2] = &node4 ;
record_type2.nodes[3] = &node5 ;
A.types["timed_cust_rc_t"] = &record_type2 ;
}
return &A ;
}

