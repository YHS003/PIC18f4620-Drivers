#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/Microcontroller.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/Microcontroller.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=Ecu_Layer/DC_MOTOR/ecu_dc_motor.c Ecu_Layer/LED/ecu_led.c Ecu_Layer/PUSH_BUTTON/ecu_push_button.c Ecu_Layer/RELAY/ecu_relay.c Mcal_Layer/GPIO/hal_gpio.c Mcal_Layer/device_config.c Application.c Ecu_Layer/7_SEGMENT/ecu_seven_segment.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/Ecu_Layer/DC_MOTOR/ecu_dc_motor.p1 ${OBJECTDIR}/Ecu_Layer/LED/ecu_led.p1 ${OBJECTDIR}/Ecu_Layer/PUSH_BUTTON/ecu_push_button.p1 ${OBJECTDIR}/Ecu_Layer/RELAY/ecu_relay.p1 ${OBJECTDIR}/Mcal_Layer/GPIO/hal_gpio.p1 ${OBJECTDIR}/Mcal_Layer/device_config.p1 ${OBJECTDIR}/Application.p1 ${OBJECTDIR}/Ecu_Layer/7_SEGMENT/ecu_seven_segment.p1
POSSIBLE_DEPFILES=${OBJECTDIR}/Ecu_Layer/DC_MOTOR/ecu_dc_motor.p1.d ${OBJECTDIR}/Ecu_Layer/LED/ecu_led.p1.d ${OBJECTDIR}/Ecu_Layer/PUSH_BUTTON/ecu_push_button.p1.d ${OBJECTDIR}/Ecu_Layer/RELAY/ecu_relay.p1.d ${OBJECTDIR}/Mcal_Layer/GPIO/hal_gpio.p1.d ${OBJECTDIR}/Mcal_Layer/device_config.p1.d ${OBJECTDIR}/Application.p1.d ${OBJECTDIR}/Ecu_Layer/7_SEGMENT/ecu_seven_segment.p1.d

# Object Files
OBJECTFILES=${OBJECTDIR}/Ecu_Layer/DC_MOTOR/ecu_dc_motor.p1 ${OBJECTDIR}/Ecu_Layer/LED/ecu_led.p1 ${OBJECTDIR}/Ecu_Layer/PUSH_BUTTON/ecu_push_button.p1 ${OBJECTDIR}/Ecu_Layer/RELAY/ecu_relay.p1 ${OBJECTDIR}/Mcal_Layer/GPIO/hal_gpio.p1 ${OBJECTDIR}/Mcal_Layer/device_config.p1 ${OBJECTDIR}/Application.p1 ${OBJECTDIR}/Ecu_Layer/7_SEGMENT/ecu_seven_segment.p1

# Source Files
SOURCEFILES=Ecu_Layer/DC_MOTOR/ecu_dc_motor.c Ecu_Layer/LED/ecu_led.c Ecu_Layer/PUSH_BUTTON/ecu_push_button.c Ecu_Layer/RELAY/ecu_relay.c Mcal_Layer/GPIO/hal_gpio.c Mcal_Layer/device_config.c Application.c Ecu_Layer/7_SEGMENT/ecu_seven_segment.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-default.mk ${DISTDIR}/Microcontroller.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=18F4620
# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/Ecu_Layer/DC_MOTOR/ecu_dc_motor.p1: Ecu_Layer/DC_MOTOR/ecu_dc_motor.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/Ecu_Layer/DC_MOTOR" 
	@${RM} ${OBJECTDIR}/Ecu_Layer/DC_MOTOR/ecu_dc_motor.p1.d 
	@${RM} ${OBJECTDIR}/Ecu_Layer/DC_MOTOR/ecu_dc_motor.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/Ecu_Layer/DC_MOTOR/ecu_dc_motor.p1 Ecu_Layer/DC_MOTOR/ecu_dc_motor.c 
	@-${MV} ${OBJECTDIR}/Ecu_Layer/DC_MOTOR/ecu_dc_motor.d ${OBJECTDIR}/Ecu_Layer/DC_MOTOR/ecu_dc_motor.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/Ecu_Layer/DC_MOTOR/ecu_dc_motor.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/Ecu_Layer/LED/ecu_led.p1: Ecu_Layer/LED/ecu_led.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/Ecu_Layer/LED" 
	@${RM} ${OBJECTDIR}/Ecu_Layer/LED/ecu_led.p1.d 
	@${RM} ${OBJECTDIR}/Ecu_Layer/LED/ecu_led.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/Ecu_Layer/LED/ecu_led.p1 Ecu_Layer/LED/ecu_led.c 
	@-${MV} ${OBJECTDIR}/Ecu_Layer/LED/ecu_led.d ${OBJECTDIR}/Ecu_Layer/LED/ecu_led.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/Ecu_Layer/LED/ecu_led.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/Ecu_Layer/PUSH_BUTTON/ecu_push_button.p1: Ecu_Layer/PUSH_BUTTON/ecu_push_button.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/Ecu_Layer/PUSH_BUTTON" 
	@${RM} ${OBJECTDIR}/Ecu_Layer/PUSH_BUTTON/ecu_push_button.p1.d 
	@${RM} ${OBJECTDIR}/Ecu_Layer/PUSH_BUTTON/ecu_push_button.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/Ecu_Layer/PUSH_BUTTON/ecu_push_button.p1 Ecu_Layer/PUSH_BUTTON/ecu_push_button.c 
	@-${MV} ${OBJECTDIR}/Ecu_Layer/PUSH_BUTTON/ecu_push_button.d ${OBJECTDIR}/Ecu_Layer/PUSH_BUTTON/ecu_push_button.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/Ecu_Layer/PUSH_BUTTON/ecu_push_button.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/Ecu_Layer/RELAY/ecu_relay.p1: Ecu_Layer/RELAY/ecu_relay.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/Ecu_Layer/RELAY" 
	@${RM} ${OBJECTDIR}/Ecu_Layer/RELAY/ecu_relay.p1.d 
	@${RM} ${OBJECTDIR}/Ecu_Layer/RELAY/ecu_relay.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/Ecu_Layer/RELAY/ecu_relay.p1 Ecu_Layer/RELAY/ecu_relay.c 
	@-${MV} ${OBJECTDIR}/Ecu_Layer/RELAY/ecu_relay.d ${OBJECTDIR}/Ecu_Layer/RELAY/ecu_relay.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/Ecu_Layer/RELAY/ecu_relay.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/Mcal_Layer/GPIO/hal_gpio.p1: Mcal_Layer/GPIO/hal_gpio.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/Mcal_Layer/GPIO" 
	@${RM} ${OBJECTDIR}/Mcal_Layer/GPIO/hal_gpio.p1.d 
	@${RM} ${OBJECTDIR}/Mcal_Layer/GPIO/hal_gpio.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/Mcal_Layer/GPIO/hal_gpio.p1 Mcal_Layer/GPIO/hal_gpio.c 
	@-${MV} ${OBJECTDIR}/Mcal_Layer/GPIO/hal_gpio.d ${OBJECTDIR}/Mcal_Layer/GPIO/hal_gpio.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/Mcal_Layer/GPIO/hal_gpio.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/Mcal_Layer/device_config.p1: Mcal_Layer/device_config.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/Mcal_Layer" 
	@${RM} ${OBJECTDIR}/Mcal_Layer/device_config.p1.d 
	@${RM} ${OBJECTDIR}/Mcal_Layer/device_config.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/Mcal_Layer/device_config.p1 Mcal_Layer/device_config.c 
	@-${MV} ${OBJECTDIR}/Mcal_Layer/device_config.d ${OBJECTDIR}/Mcal_Layer/device_config.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/Mcal_Layer/device_config.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/Application.p1: Application.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/Application.p1.d 
	@${RM} ${OBJECTDIR}/Application.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/Application.p1 Application.c 
	@-${MV} ${OBJECTDIR}/Application.d ${OBJECTDIR}/Application.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/Application.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/Ecu_Layer/7_SEGMENT/ecu_seven_segment.p1: Ecu_Layer/7_SEGMENT/ecu_seven_segment.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/Ecu_Layer/7_SEGMENT" 
	@${RM} ${OBJECTDIR}/Ecu_Layer/7_SEGMENT/ecu_seven_segment.p1.d 
	@${RM} ${OBJECTDIR}/Ecu_Layer/7_SEGMENT/ecu_seven_segment.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/Ecu_Layer/7_SEGMENT/ecu_seven_segment.p1 Ecu_Layer/7_SEGMENT/ecu_seven_segment.c 
	@-${MV} ${OBJECTDIR}/Ecu_Layer/7_SEGMENT/ecu_seven_segment.d ${OBJECTDIR}/Ecu_Layer/7_SEGMENT/ecu_seven_segment.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/Ecu_Layer/7_SEGMENT/ecu_seven_segment.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
else
${OBJECTDIR}/Ecu_Layer/DC_MOTOR/ecu_dc_motor.p1: Ecu_Layer/DC_MOTOR/ecu_dc_motor.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/Ecu_Layer/DC_MOTOR" 
	@${RM} ${OBJECTDIR}/Ecu_Layer/DC_MOTOR/ecu_dc_motor.p1.d 
	@${RM} ${OBJECTDIR}/Ecu_Layer/DC_MOTOR/ecu_dc_motor.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/Ecu_Layer/DC_MOTOR/ecu_dc_motor.p1 Ecu_Layer/DC_MOTOR/ecu_dc_motor.c 
	@-${MV} ${OBJECTDIR}/Ecu_Layer/DC_MOTOR/ecu_dc_motor.d ${OBJECTDIR}/Ecu_Layer/DC_MOTOR/ecu_dc_motor.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/Ecu_Layer/DC_MOTOR/ecu_dc_motor.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/Ecu_Layer/LED/ecu_led.p1: Ecu_Layer/LED/ecu_led.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/Ecu_Layer/LED" 
	@${RM} ${OBJECTDIR}/Ecu_Layer/LED/ecu_led.p1.d 
	@${RM} ${OBJECTDIR}/Ecu_Layer/LED/ecu_led.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/Ecu_Layer/LED/ecu_led.p1 Ecu_Layer/LED/ecu_led.c 
	@-${MV} ${OBJECTDIR}/Ecu_Layer/LED/ecu_led.d ${OBJECTDIR}/Ecu_Layer/LED/ecu_led.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/Ecu_Layer/LED/ecu_led.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/Ecu_Layer/PUSH_BUTTON/ecu_push_button.p1: Ecu_Layer/PUSH_BUTTON/ecu_push_button.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/Ecu_Layer/PUSH_BUTTON" 
	@${RM} ${OBJECTDIR}/Ecu_Layer/PUSH_BUTTON/ecu_push_button.p1.d 
	@${RM} ${OBJECTDIR}/Ecu_Layer/PUSH_BUTTON/ecu_push_button.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/Ecu_Layer/PUSH_BUTTON/ecu_push_button.p1 Ecu_Layer/PUSH_BUTTON/ecu_push_button.c 
	@-${MV} ${OBJECTDIR}/Ecu_Layer/PUSH_BUTTON/ecu_push_button.d ${OBJECTDIR}/Ecu_Layer/PUSH_BUTTON/ecu_push_button.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/Ecu_Layer/PUSH_BUTTON/ecu_push_button.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/Ecu_Layer/RELAY/ecu_relay.p1: Ecu_Layer/RELAY/ecu_relay.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/Ecu_Layer/RELAY" 
	@${RM} ${OBJECTDIR}/Ecu_Layer/RELAY/ecu_relay.p1.d 
	@${RM} ${OBJECTDIR}/Ecu_Layer/RELAY/ecu_relay.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/Ecu_Layer/RELAY/ecu_relay.p1 Ecu_Layer/RELAY/ecu_relay.c 
	@-${MV} ${OBJECTDIR}/Ecu_Layer/RELAY/ecu_relay.d ${OBJECTDIR}/Ecu_Layer/RELAY/ecu_relay.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/Ecu_Layer/RELAY/ecu_relay.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/Mcal_Layer/GPIO/hal_gpio.p1: Mcal_Layer/GPIO/hal_gpio.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/Mcal_Layer/GPIO" 
	@${RM} ${OBJECTDIR}/Mcal_Layer/GPIO/hal_gpio.p1.d 
	@${RM} ${OBJECTDIR}/Mcal_Layer/GPIO/hal_gpio.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/Mcal_Layer/GPIO/hal_gpio.p1 Mcal_Layer/GPIO/hal_gpio.c 
	@-${MV} ${OBJECTDIR}/Mcal_Layer/GPIO/hal_gpio.d ${OBJECTDIR}/Mcal_Layer/GPIO/hal_gpio.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/Mcal_Layer/GPIO/hal_gpio.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/Mcal_Layer/device_config.p1: Mcal_Layer/device_config.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/Mcal_Layer" 
	@${RM} ${OBJECTDIR}/Mcal_Layer/device_config.p1.d 
	@${RM} ${OBJECTDIR}/Mcal_Layer/device_config.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/Mcal_Layer/device_config.p1 Mcal_Layer/device_config.c 
	@-${MV} ${OBJECTDIR}/Mcal_Layer/device_config.d ${OBJECTDIR}/Mcal_Layer/device_config.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/Mcal_Layer/device_config.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/Application.p1: Application.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/Application.p1.d 
	@${RM} ${OBJECTDIR}/Application.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/Application.p1 Application.c 
	@-${MV} ${OBJECTDIR}/Application.d ${OBJECTDIR}/Application.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/Application.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/Ecu_Layer/7_SEGMENT/ecu_seven_segment.p1: Ecu_Layer/7_SEGMENT/ecu_seven_segment.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/Ecu_Layer/7_SEGMENT" 
	@${RM} ${OBJECTDIR}/Ecu_Layer/7_SEGMENT/ecu_seven_segment.p1.d 
	@${RM} ${OBJECTDIR}/Ecu_Layer/7_SEGMENT/ecu_seven_segment.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/Ecu_Layer/7_SEGMENT/ecu_seven_segment.p1 Ecu_Layer/7_SEGMENT/ecu_seven_segment.c 
	@-${MV} ${OBJECTDIR}/Ecu_Layer/7_SEGMENT/ecu_seven_segment.d ${OBJECTDIR}/Ecu_Layer/7_SEGMENT/ecu_seven_segment.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/Ecu_Layer/7_SEGMENT/ecu_seven_segment.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${DISTDIR}/Microcontroller.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=${DISTDIR}/Microcontroller.${IMAGE_TYPE}.map  -D__DEBUG=1  -mdebugger=none  -DXPRJ_default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits -std=c99 -gcoff -mstack=compiled:auto:auto:auto        $(COMPARISON_BUILD) -Wl,--memorysummary,${DISTDIR}/memoryfile.xml -o ${DISTDIR}/Microcontroller.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}     
	@${RM} ${DISTDIR}/Microcontroller.${IMAGE_TYPE}.hex 
	
	
else
${DISTDIR}/Microcontroller.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=${DISTDIR}/Microcontroller.${IMAGE_TYPE}.map  -DXPRJ_default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mno-default-config-bits -std=c99 -gcoff -mstack=compiled:auto:auto:auto     $(COMPARISON_BUILD) -Wl,--memorysummary,${DISTDIR}/memoryfile.xml -o ${DISTDIR}/Microcontroller.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}     
	
	
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${OBJECTDIR}
	${RM} -r ${DISTDIR}

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(wildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
