#ifndef LOGGER_C
#define LOGGER_C

#include <stdio.h>
#include <time.h>
#include <stdatomic.h>

#include "logger.h"

_Atomic unsigned char CURRENT_LOG_LEVEL;

void set_log_level(LOG_LEVEL level) {
    atomic_store(&CURRENT_LOG_LEVEL, (_Atomic unsigned char) level);
    log_message("changed log level", LOG_LEVEL_INFO);
}

void log_message(char* message, LOG_LEVEL level) {
    // get current log level
    LOG_LEVEL current_log_level = (LOG_LEVEL) atomic_load(&CURRENT_LOG_LEVEL);

    if(level < current_log_level) {
        return;
    }

    // get time
    time_t rawtime = time(NULL);
    char* time_string = ctime(&rawtime);
    // replace newlines with null terminators
    for(char* c = time_string; *c != '\0'; ++c) {
        if(*c == '\n' || *c == '\r') {
            *c = '\0';
        }
    }

    // get log_level equvilent string
    const char const* log_level_string = log_level_to_string(level);

    // print message
    printf("[%s] %s: %s\n", time_string, log_level_string, message);
}

const char const* log_level_to_string(LOG_LEVEL level) {
    switch (level) {
        case LOG_LEVEL_VERBOSE: return LOG_LEVEL_VERBOSE_STRING;
        case LOG_LEVEL_DEBUG:   return LOG_LEVEL_DEBUG_STRING;
        case LOG_LEVEL_INFO:    return LOG_LEVEL_INFO_STRING;
        case LOG_LEVEL_WARNING: return LOG_LEVEL_WARNING_STRING;
        case LOG_LEVEL_ERROR:   return LOG_LEVEL_ERROR_STRING;
        case LOG_LEVEL_FATAL:   return LOG_LEVEL_FATAL_STRING;
    
        default: return LOG_LEVEL_UNKNOWN_STRING;
    }
}

#endif