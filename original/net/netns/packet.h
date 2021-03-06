/*
 * Packet network namespace
 */
#ifndef __NETNS_PACKET_H__
#define __NETNS_PACKET_H__

#include <linux/rculist.h>
#include <linux/mutex.h>

struct netns_packet {
	struct mutex		sklist_lock;
#ifdef __KERNELL__	
	struct hlist_head	sklist;
#endif
};

#endif /* __NETNS_PACKET_H__ */
