#pragma once

#include <cstdint>

constexpr static auto START = std::uint32_t{0U};
constexpr static auto GOAL = std::uint32_t{9U};
constexpr static auto LEN_X = std::uint32_t{10U};
constexpr static auto LEFT = 'a';
constexpr static auto RIGHT = 'd';

void game();
