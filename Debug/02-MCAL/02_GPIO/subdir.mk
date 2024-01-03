################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../02-MCAL/02_GPIO/GPIO_program.c 

OBJS += \
./02-MCAL/02_GPIO/GPIO_program.o 

C_DEPS += \
./02-MCAL/02_GPIO/GPIO_program.d 


# Each subdirectory must supply rules for building sources it contributes
02-MCAL/02_GPIO/%.o 02-MCAL/02_GPIO/%.su 02-MCAL/02_GPIO/%.cyclo: ../02-MCAL/02_GPIO/%.c 02-MCAL/02_GPIO/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/03-NVIC" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/02_GPIO" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/03_HAL/02-SEV_SEGMENT" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/03_HAL/01-LED" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/03_HAL" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/01-LIB" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/01-RCC" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/01-RCC" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-02-2d-MCAL-2f-02_GPIO

clean-02-2d-MCAL-2f-02_GPIO:
	-$(RM) ./02-MCAL/02_GPIO/GPIO_program.cyclo ./02-MCAL/02_GPIO/GPIO_program.d ./02-MCAL/02_GPIO/GPIO_program.o ./02-MCAL/02_GPIO/GPIO_program.su

.PHONY: clean-02-2d-MCAL-2f-02_GPIO

