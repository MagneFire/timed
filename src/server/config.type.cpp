#include <iodata-qt5/validator>
#include "config.type.h"
iodata::validator * etc_timed_rc_validator(){
static bool init_done = false ;
static iodata::validator A ;
static iodata::/*validator::*/record_type record_type1 = { "config_t", vector<iodata::/*validator::*/node*>(10) } ;
static iodata::/*validator::*/node_integer node1("queue_threshold_long", 0, 0, 5000) ;
static iodata::/*validator::*/node_integer node2("queue_threshold_short", 0, 0, 1000) ;
static iodata::/*validator::*/node_bytes node3("data_directory", 0, 0, ".timed") ;
static iodata::/*validator::*/node_bytes node4("settings_file", 0, 0, "settings.data") ;
static iodata::/*validator::*/node_bytes node5("events_file", 0, 0, "events.data") ;
static iodata::/*validator::*/node_bytes node6("default_timezone", 0, 0, "Europe/Helsinki") ;
static iodata::/*validator::*/node_integer node7("default_gmt_offset", 0, 0, 7200) ;
static iodata::/*validator::*/node_integer node8("voland_ping_retries", 0, 0, 5) ;
static iodata::/*validator::*/node_integer node9("voland_ping_sleep", 0, 0, 3000) ;
static iodata::/*validator::*/node_integer node10("dialog_discard_threshold", 0, 0, 1440) ;
if (not init_done) { init_done = true ;
A.set_static() ;
record_type1.nodes[0] = &node1 ;
record_type1.nodes[1] = &node2 ;
record_type1.nodes[2] = &node3 ;
record_type1.nodes[3] = &node4 ;
record_type1.nodes[4] = &node5 ;
record_type1.nodes[5] = &node6 ;
record_type1.nodes[6] = &node7 ;
record_type1.nodes[7] = &node8 ;
record_type1.nodes[8] = &node9 ;
record_type1.nodes[9] = &node10 ;
A.types["config_t"] = &record_type1 ;
}
return &A ;
}

