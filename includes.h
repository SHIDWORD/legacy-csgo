#pragma once
#include <Windows.h>
#include <chrono>
#include <thread>
#include <d3d9.h>
#include <d3dx9.h>
#include <cstdint>
#include <string_view>
#include <array>
#include <map>
#include <deque>
#include <mutex>
#include <unordered_map>
#include <functional>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <shared_mutex>

#include "include/nlohmann/json.hpp"
#include "include/nlohmann/json_fwd.hpp"
#include "fnv1a.h"
#include "util.h"
#include "minhook.h"
#include "xorstr.h"
#include "tinyformat.h"
#include "lazy_importer.h"
#include "pattern.h"
#include "pad.h"
#include "vector.h"
#include "matrix.h"
#include "math.h"
#include "crc32.h"
#include "usercmd.h"
#include "sdk.h"
#include "interfaces.h"
#include "trace.h"
#include "event_handler.h"
#include "notify.h"
#include "netvars.h"
#include "entity.h"
#include "player.h"
#include "weapon.h"
#include "globals.h"
#include "inputpred.h"
#include "prediction_copy.h"
#include "prediction_error_handler.h"
#include "penetration.h"
#include "movement.h"
#include "visitor.h"
#include "visitor.h"
#include "render.h"
#include "config.h"
#include "sesui.h"
#include "draw_list.h"
#include "menu.h"
#include "visuals.h"
#include "hooks.h"