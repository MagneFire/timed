#include <iodata-qt5/validator>
#include "tzdata.type.h"
iodata::validator * tzdata_validator(){
static bool init_done = false ;
static iodata::validator A ;
static iodata::/*validator::*/record_type record_type1 = { "country_record_t", vector<iodata::/*validator::*/node*>(3) } ;
static iodata::/*validator::*/record_type record_type2 = { "mcc_country_pair_t", vector<iodata::/*validator::*/node*>(2) } ;
static iodata::/*validator::*/record_type record_type3 = { "mcc_to_xy_t", vector<iodata::/*validator::*/node*>(1) } ;
static iodata::/*validator::*/record_type record_type4 = { "tz_distinct_info_t", vector<iodata::/*validator::*/node*>(2) } ;
static iodata::/*validator::*/record_type record_type5 = { "tz_distinct_t", vector<iodata::/*validator::*/node*>(1) } ;
static iodata::/*validator::*/record_type record_type6 = { "tz_single_info_t", vector<iodata::/*validator::*/node*>(2) } ;
static iodata::/*validator::*/record_type record_type7 = { "tz_single_t", vector<iodata::/*validator::*/node*>(1) } ;
static iodata::/*validator::*/record_type record_type8 = { "zones_by_country_t", vector<iodata::/*validator::*/node*>(1) } ;
static iodata::/*validator::*/node_bytes node1("xy", 0, 1, "") ;
static iodata::/*validator::*/node_bytes node2("major", 1, 1, "") ;
static iodata::/*validator::*/node_bytes node3("minor", 1, 1, "") ;
static iodata::/*validator::*/node_integer node4("mcc", 0, 1, 0) ;
static iodata::/*validator::*/node_bytes node5("country", 0, 1, "") ;
static iodata::/*validator::*/node_record node6("mcc_to_xy", 1, 1, "mcc_country_pair_t", &record_type2) ;
static iodata::/*validator::*/node_integer node7("mcc", 0, 1, 0) ;
static iodata::/*validator::*/node_bytes node8("tz", 1, 1, "") ;
static iodata::/*validator::*/node_record node9("list", 1, 1, "tz_distinct_info_t", &record_type4) ;
static iodata::/*validator::*/node_integer node10("mcc", 0, 1, 0) ;
static iodata::/*validator::*/node_bytes node11("tz", 0, 1, "") ;
static iodata::/*validator::*/node_record node12("list", 1, 1, "tz_single_info_t", &record_type6) ;
static iodata::/*validator::*/node_record node13("xy_to_tz", 1, 1, "country_record_t", &record_type1) ;
if (not init_done) { init_done = true ;
A.set_static() ;
record_type1.nodes[0] = &node1 ;
record_type1.nodes[1] = &node2 ;
record_type1.nodes[2] = &node3 ;
A.types["country_record_t"] = &record_type1 ;
record_type2.nodes[0] = &node4 ;
record_type2.nodes[1] = &node5 ;
A.types["mcc_country_pair_t"] = &record_type2 ;
record_type3.nodes[0] = &node6 ;
A.types["mcc_to_xy_t"] = &record_type3 ;
record_type4.nodes[0] = &node7 ;
record_type4.nodes[1] = &node8 ;
A.types["tz_distinct_info_t"] = &record_type4 ;
record_type5.nodes[0] = &node9 ;
A.types["tz_distinct_t"] = &record_type5 ;
record_type6.nodes[0] = &node10 ;
record_type6.nodes[1] = &node11 ;
A.types["tz_single_info_t"] = &record_type6 ;
record_type7.nodes[0] = &node12 ;
A.types["tz_single_t"] = &record_type7 ;
record_type8.nodes[0] = &node13 ;
A.types["zones_by_country_t"] = &record_type8 ;
}
return &A ;
}

