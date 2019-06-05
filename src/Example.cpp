#include "JiskefetApiCpp/JiskefetFactory.h"
#include <boost/date_time/posix_time/posix_time.hpp>

int main(int, char**) {
  auto api = jiskefet::getApiInstance("http://myurl/api", "token abc123xyz");
  int64_t runNumber = 1;
  auto now = boost::posix_time::microsec_clock::universal_time();
  api->runStart(0, now, now, "cpp-api", RunType::TECHNICAL, 123, 200, 100);
  api->flpAdd(runNumber, "flp-1", "localhost");
  api->flpUpdateCounters(runNumber, "flp-1", 123, 123408, 5834, 9192);
  api->runEnd(runNumber, now, now, RunQuality::UNKNOWN);
  return 0;
}
