#pragma once

/// Maps [0, 255] to [0, 255], just like x^4 maps [0, 1] to [0, 1]
inline uint8_t fourth_power(uint8_t x)
{
    auto x32 = static_cast<uint32_t>(x);
    auto x32_sq = x32 * x32; // Temporary value to reduce the number of multiplications. Instead of x * x * x * x we do x_sq = x * x ; x_4th = x_sq * x_sq (2 multiplications instead of 3) 
    return static_cast<uint8_t>((x32_sq * x32_sq) >> 24);
}

/// Remaps i that is in the range [0, max_i-1] to the range [0, 255]
inline uint8_t map_32_to_8(uint32_t i, uint32_t max_i)
{
  uint32_t didx = 0xFFFFFFFFu / max_i;
  return static_cast<uint8_t>((i * didx) >> 24);
}