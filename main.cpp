#include <SFML/Network.hpp>
#include <INPUT_LITE/Input_Lite.h>
#include <thread>

auto main() -> int {
    using namespace std::chrono_literals;
    using namespace SL;
    for (int x = 0; x < 100; x++) {
        Input_Lite::SendInput(Input_Lite::MousePositionOffsetEvent{1, 1});
        std::this_thread::sleep_for(10ms);
    }
}
