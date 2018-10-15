#pragma once

#include "ofMain.h"

#ifdef TARGET_WIN32
#include "dxgiformat.h"

namespace ofxSpout {
	int toGLFormat(const DXGI_FORMAT &);
}
#endif
