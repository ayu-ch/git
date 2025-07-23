#ifndef FMT_MERGE_MSG_H
#define FMT_MERGE_MSG_H

#include "strbuf.h"
#include "repository.h"

#define DEFAULT_MERGE_LOG_LEN 20

struct fmt_merge_msg_opts {
	unsigned add_title:1,
		credit_people:1;
	int shortlog_len;
	const char *into_name;
};

int fmt_merge_msg_config(const char *key, const char *value,
			 const struct config_context *ctx, void *cb);
void adjust_shortlog_len(struct repository *r, int *shortlog_len);
int fmt_merge_msg(struct strbuf *in, struct strbuf *out,
		  struct fmt_merge_msg_opts *);


#endif /* FMT_MERGE_MSG_H */
