#ifndef OMNIWRAP_AGENT_SESSION_H
#define OMNIWRAP_AGENT_SESSION_H

#define OMNIWRAP_AGENT_SESSION_SOURCE_SHA256 "c7ca5e5ebb4c092910ec72b371e188303358c5e34d2908c0a88f782a241162cf"
#define OMNIWRAP_AGENT_SESSION_OPERATIONS_COUNT 8

typedef struct {
    int max_steps;
    int max_tool_calls;
    int allow_mutations;
    int steps_completed;
    int tool_calls_completed;
} omniwrap_agent_session_t;

static inline void omniwrap_agent_session_init(omniwrap_agent_session_t *s, int max_steps, int max_tool_calls, int allow_mutations) {
    s->max_steps = max_steps > 0 ? max_steps : 8;
    s->max_tool_calls = max_tool_calls > 0 ? max_tool_calls : 16;
    s->allow_mutations = allow_mutations ? 1 : 0;
    s->steps_completed = 0;
    s->tool_calls_completed = 0;
}

static inline int omniwrap_agent_session_can_invoke(const omniwrap_agent_session_t *s, int is_mutation) {
    if (!s) return 0;
    if (s->steps_completed >= s->max_steps || s->tool_calls_completed >= s->max_tool_calls) return 0;
    if (is_mutation && !s->allow_mutations) return 0;
    return 1;
}

#endif
