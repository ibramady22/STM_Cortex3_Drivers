################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include 03-HAL/05-STP/subdir.mk
-include 03-HAL/04-IR/subdir.mk
-include 03-HAL/03-LEDMRX/subdir.mk
-include 03-HAL/02-SEV_SEGMENT/subdir.mk
-include 03-HAL/01-LED/subdir.mk
-include 02-MCAL/09-UART/subdir.mk
-include 02-MCAL/08-SPI/subdir.mk
-include 02-MCAL/07-DMA/subdir.mk
-include 02-MCAL/06-STK/subdir.mk
-include 02-MCAL/05-AFIO/subdir.mk
-include 02-MCAL/04-EXIN/subdir.mk
-include 02-MCAL/03-NVIC/subdir.mk
-include 02-MCAL/02-GPIO/subdir.mk
-include 02-MCAL/01-RCC/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := STM_DRIVERS
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
STM_DRIVERS.elf \

MAP_FILES += \
STM_DRIVERS.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
STM_DRIVERS.list \

OBJCOPY_HEX += \
STM_DRIVERS.hex \


# All Target
all: main-build

# Main-build Target
main-build: STM_DRIVERS.elf secondary-outputs

# Tool invocations
STM_DRIVERS.elf STM_DRIVERS.map: $(OBJS) $(USER_OBJS) D:\Embedded\ Systems\AbdelBasit\ARM\ Cortex-M3\ (Assaf)\SYSTEM\STM_DRIVERS\STM32F103C8TX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "STM_DRIVERS.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"D:\Embedded Systems\AbdelBasit\ARM Cortex-M3 (Assaf)\SYSTEM\STM_DRIVERS\STM32F103C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="STM_DRIVERS.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

STM_DRIVERS.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "STM_DRIVERS.list"
	@echo 'Finished building: $@'
	@echo ' '

STM_DRIVERS.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "STM_DRIVERS.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) STM_DRIVERS.elf STM_DRIVERS.hex STM_DRIVERS.list STM_DRIVERS.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
