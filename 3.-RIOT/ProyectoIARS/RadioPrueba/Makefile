# name of your application
APPLICATION = RadioPrueba

# If no BOARD is found in the environment, use this default:
BOARD ?= native

BOARD_INSUFFICIENT_MEMORY := airfy-beacon arduino-duemilanove arduino-leonardo \
                             arduino-mega2560 arduino-nano arduino-uno \
                             b-l072z-lrwan1 blackpill bluepill calliope-mini \
                             cc2650-launchpad cc2650stk chronos hifive1 \
                             i-nucleo-lrwan1 lsn50 maple-mini \
                             mega-xplained microbit msb-430 msb-430h \
                             nrf51dk nrf51dongle nrf6310 \
                             nucleo-f030r8 nucleo-f070rb nucleo-f072rb \
                             nucleo-f103rb nucleo-f302r8 nucleo-f334r8 \
                             nucleo-l053r8 nucleo-l073rz nucleo-f031k6 \
                             nucleo-f042k6 nucleo-f303k8 nucleo-l031k6 \
                             opencm904 saml10-xpro saml11-xpro spark-core \
                             stm32f0discovery telosb waspmote-pro \
                             wsn430-v1_3b wsn430-v1_4 yunjia-nrf51822 z1

USEMODULE += embunit
USEMODULE += gnrc_netif
USEMODULE += gnrc_pktdump
USEMODULE += gnrc_sixlowpan
USEMODULE += gnrc_sixlowpan_iphc
USEMODULE += gnrc_ipv6
USEMODULE += netdev_eth
USEMODULE += netdev_ieee802154
USEMODULE += netdev_test
USEMODULE += od

# deactivate automatically emitted packets from IPv6 neighbor discovery
CFLAGS += -DGNRC_IPV6_NIB_CONF_ARSM=0
CFLAGS += -DGNRC_IPV6_NIB_CONF_SLAAC=0
CFLAGS += -DGNRC_IPV6_NIB_CONF_NO_RTR_SOL=1
CFLAGS += -DGNRC_NETIF_NUMOF=4
CFLAGS += -DGNRC_NETIF_ADDRS_NUMOF=16
CFLAGS += -DGNRC_NETIF_GROUPS_NUMOF=8
CFLAGS += -DLOG_LEVEL=LOG_NONE
CFLAGS += -DTEST_SUITES

# This has to be the absolute path to the RIOT base directory:
RIOTBASE ?= $(CURDIR)/../..

# Comment this out to disable code in RIOT that does safety checking
# which is not needed in a production environment but helps in the
# development process:
DEVELHELP ?= 1

# Change this to 0 show compiler invocation lines by default:
QUIET ?= 1

include $(RIOTBASE)/Makefile.include
