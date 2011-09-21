/*
 *  snmp_bgp.h
 *
 */
#ifndef _MIBGROUP_SNMP_BGP_H
#define _MIBGROUP_SNMP_BGP_H

config_require(smux/smux)

extern FindVarMethod var_bgp;


#define BGPVERSION			0
#define BGPLOCALAS			1
#define BGPIDENTIFIER			2
#define BGPPEERIDENTIFIER		3
#define BGPPEERSTATE			4
#define BGPPEERADMINSTATUS		5
#define BGPPEERNEGOTIATEDVERSION	6
#define BGPPEERLOCALADDR		7
#define BGPPEERLOCALPORT		8
#define BGPPEERREMOTEADDR		9
#define BGPPEERREMOTEPORT		10
#define BGPPEERREMOTEAS			11
#define BGPPEERINUPDATES		12
#define BGPPEEROUTUPDATES		13
#define BGPPEERINTOTALMESSAGES		14
#define BGPPEEROUTTOTALMESSAGES		15
#define BGPPEERLASTERROR		16
#define BGPPATHATTRPEER			17
#define BGPPATHATTRDESTNETWORK		18
#define BGPPATHATTRORIGIN		19
#define BGPPATHATTRASPATH		20
#define BGPPATHATTRNEXTHOP		21
#define BGPPATHATTRINTERASMETRIC	22

#ifdef IN_SNMP_VARS_C

struct variable13 bgp_variables[] = {
	{BGPVERSION, ASN_OCTET_STR, RONLY, var_bgp, 1, {1}},
	{BGPLOCALAS, ASN_INTEGER, RONLY, var_bgp, 1, {2}},
	{BGPIDENTIFIER, ASN_IPADDRESS, RONLY, var_bgp, 1, {4}},
	{BGPPEERIDENTIFIER, ASN_IPADDRESS, RONLY, var_bgp, 3, {3, 1, 1}},
	{BGPPEERSTATE, ASN_INTEGER, RONLY, var_bgp, 3, {3, 1, 2}},
	{BGPPEERADMINSTATUS, ASN_INTEGER, RONLY, var_bgp, 3, {3, 1, 3}},
	{BGPPEERNEGOTIATEDVERSION, ASN_INTEGER, RONLY, var_bgp, 3, {3, 1, 4}},
	{BGPPEERLOCALADDR, ASN_IPADDRESS, RONLY, var_bgp, 3, {3, 1, 5}},
	{BGPPEERLOCALPORT, ASN_INTEGER, RONLY, var_bgp, 3, {3, 1, 6}},
	{BGPPEERREMOTEADDR, ASN_IPADDRESS, RONLY, var_bgp, 3, {3, 1, 7}},
	{BGPPEERREMOTEPORT, ASN_INTEGER, RONLY, var_bgp, 3, {3, 1, 8}},
	{BGPPEERREMOTEAS, ASN_INTEGER, RONLY, var_bgp, 3, {3, 1, 9}},
	{BGPPEERINUPDATES, ASN_COUNTER, RONLY, var_bgp, 3, {3, 1, 10}},
	{BGPPEEROUTUPDATES, ASN_COUNTER, RONLY, var_bgp, 3, {3, 1, 11}},
	{BGPPEERINTOTALMESSAGES, ASN_COUNTER, RONLY, var_bgp, 3, {3, 1, 12}},
	{BGPPEEROUTTOTALMESSAGES, ASN_COUNTER, RONLY, var_bgp, 3, {3, 1, 13}},
	{BGPPEERLASTERROR, ASN_OCTET_STR, RONLY, var_bgp, 3, {3, 1, 14}},
	{BGPPATHATTRPEER, ASN_IPADDRESS, RONLY, var_bgp, 3, {5, 1, 1 }},
	{BGPPATHATTRDESTNETWORK, ASN_IPADDRESS, RONLY, var_bgp, 3, {5, 1, 2}},
	{BGPPATHATTRORIGIN, ASN_INTEGER, RONLY, var_bgp, 3, {5, 1, 3}},
	{BGPPATHATTRASPATH, ASN_OCTET_STR, RONLY, var_bgp, 3, {5, 1, 4}},
	{BGPPATHATTRNEXTHOP, ASN_INTEGER, RONLY, var_bgp, 3, {5, 1, 5}},
	{BGPPATHATTRINTERASMETRIC, ASN_OCTET_STR, RONLY, var_bgp, 3, {5, 1, 6}}
};

config_load_mib( MIB.15, 7, bgp_variables)

#endif
#endif /* _MIBGROUP_SNMP_BGP_H */