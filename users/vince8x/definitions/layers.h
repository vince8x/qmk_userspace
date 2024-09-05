#pragma once

typedef enum {
#ifdef QWERTY
    _QWERTY,
    _BASE,
#else
    _BASE,
    _QWERTY,
#endif
    _SYM,
    _NUM,
    _FUN,
    _NAV,
    _MOUSE,
    _TMUX,
    _NVIM,
    _SHORTCUTS,
    _CODING,
    _SYMBOLS,
    _MEDIA,
    _FIXED_NAV,
    _LOCK,
    _SYSTEM
} layers_t;
