#pragma once

namespace anton {
#if defined(_WIN32) || defined(_WIN64)
    using i8 = signed char;
    using i16 = signed short;
    using i32 = signed int;
    using i64 = signed long long;

    using u8 = unsigned char;
    using u16 = unsigned short;
    using u32 = unsigned int;
    using u64 = unsigned long long;

    using f32 = float;
    using f64 = double;
#else
    using i8 = signed char;
    using i16 = signed short;
    using i32 = signed int;
    using i64 = signed long;

    using u8 = unsigned char;
    using u16 = unsigned short;
    using u32 = unsigned int;
    using u64 = unsigned long;

    using f32 = float;
    using f64 = double;
#endif

    using isize = i64;
    using usize = u64;

    using char8 = char;
    using char16 = char16_t;
    using char32 = char32_t;

    using nullptr_t = decltype(nullptr);

    static_assert(sizeof(u8) == 1, "u8 is not 8 bits wide.");
    static_assert(sizeof(u16) == 2, "u16 is not 16 bits wide.");
    static_assert(sizeof(u32) == 4, "u32 is not 32 bits wide.");
    static_assert(sizeof(u64) == 8, "u64 is not 64 bits wide.");
    static_assert(sizeof(f32) == 4, "f32 is not 32 bits wide.");
    static_assert(sizeof(f64) == 8, "f64 is not 64 bits wide.");

    class Rect_i32 {
    public:
        i32 left;
        i32 top;
        i32 right;
        i32 bottom;
    };

    class Rect_f32 {
    public:
        f32 left;
        f32 top;
        f32 right;
        f32 bottom;
    };
} // namespace anton
