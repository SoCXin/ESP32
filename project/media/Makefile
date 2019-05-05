#
# This is a project Makefile. It is assumed the directory this Makefile resides in is a
# project subdirectory.
#

PROJECT_NAME := weboot

CFLAGS+=-DCONFIG_AUDIO_MAD

EXTRA_COMPONENT_DIRS:=$(b)components
	
export EXTRA_COMPONENT_DIRS

include $(IDF_PATH)/make/project.mk
