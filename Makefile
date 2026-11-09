.SUFFIXES:

ifeq ($(strip $(DEVKITPRO)),)
$(error DEVKITPRO is not set)
endif

include $(DEVKITPRO)/libnx/switch_rules

TARGET := RobloxSwitch
BUILD := build
SOURCES := source
DATA :=
INCLUDES :=

APP_TITLE := Roblox Switch Prototype
APP_AUTHOR := Native Development
APP_VERSION := 0.1.0
