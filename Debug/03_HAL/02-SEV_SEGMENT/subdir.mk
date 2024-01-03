################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../03_HAL/02-SEV_SEGMENT/SEV_SEGMENT_program.c 

OBJS += \
./03_HAL/02-SEV_SEGMENT/SEV_SEGMENT_program.o 

C_DEPS += \
./03_HAL/02-SEV_SEGMENT/SEV_SEGMENT_program.d 


# Each subdirectory must supply rules for building sources it contributes
03_HAL/02-SEV_SEGMENT/%.o 03_HAL/02-SEV_SEGMENT/%.su 03_HAL/02-SEV_SEGMENT/%.cyclo: ../03_HAL/02-SEV_SEGMENT/%.c 03_HAL/02-SEV_SEGMENT/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/02-GPIO" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/06-STK" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/05-AFIO" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/04-EXIN" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/03-NVIC" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/03_HAL/02-SEV_SEGMENT" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/03_HAL/01-LED" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/03_HAL" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/01-LIB" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/01-RCC" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-03_HAL-2f-02-2d-SEV_SEGMENT

clean-03_HAL-2f-02-2d-SEV_SEGMENT:
	-$(RM) ./03_HAL/02-SEV_SEGMENT/SEV_SEGMENT_program.cyclo ./03_HAL/02-SEV_SEGMENT/SEV_SEGMENT_program.d ./03_HAL/02-SEV_SEGMENT/SEV_SEGMENT_program.o ./03_HAL/02-SEV_SEGMENT/SEV_SEGMENT_program.su

.PHONY: clean-03_HAL-2f-02-2d-SEV_SEGMENT

