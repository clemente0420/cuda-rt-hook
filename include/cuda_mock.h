#pragma once

#define HOOK_API __attribute__((__visibility__("default")))

#ifdef __cplusplus

extern "C" {

void dh_initialize();

void dh_internal_install_hook(const char* srcLib, const char* targetLib,
                              const char* symbolName,
                              const char* hookerLibPath = nullptr,
                              const char* hookerSymbolName = nullptr);
}

#endif