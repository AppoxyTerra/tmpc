#pragma once
#include "../placesys.hpp"

namespace /*{$name}*/ {

}

void /*{$name}*/_load();

void /*{$name}*/_update();

void /*{$name}*/_unload();

Place place_/*{$name}*/("/*{$name}*/", /*{$name}*/_load, /*{$name}*/_update, /*{$name}*/_unload);


