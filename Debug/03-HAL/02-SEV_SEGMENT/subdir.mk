################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../03-HAL/02-SEV_SEGMENT/SEV_SEGMENT_program.c 

OBJS += \
./03-HAL/02-SEV_SEGMENT/SEV_SEGMENT_program.o 

C_DEPS += \
./03-HAL/02-SEV_SEGMENT/SEV_SEGMENT_program.d 


# Each subdirectory must supply rules for building sources it contributes
03-HAL/02-SEV_SEGMENT/%.o 03-HAL/02-SEV_SEGMENT/%.su 03-HAL/02-SEV_SEGMENT/%.cyclo: ../03-HAL/02-SEV_SEGMENT/%.c 03-HAL/02-SEV_SEGMENT/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/03-HAL" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/09-UART" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/08-SPI" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/03-HAL/05-STP" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/07-DMA" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/03-HAL/04-IR" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/03-HAL/03-LEDMRX" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/03-HAL/01-LED" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/03-HAL/02-SEV_SEGMENT" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/02-GPIO" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/06-STK" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/05-AFIO" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/04-EXIN" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/03-NVIC" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/01-LIB" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/01-RCC" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-03-2d-HAL-2f-02-2d-SEV_SEGMENT

clean-03-2d-HAL-2f-02-2d-SEV_SEGMENT:
	-$(RM) ./03-HAL/02-SEV_SEGMENT/SEV_SEGMENT_program.cyclo ./03-HAL/02-SEV_SEGMENT/SEV_SEGMENT_program.d ./03-HAL/02-SEV_SEGMENT/SEV_SEGMENT_program.o ./03-HAL/02-SEV_SEGMENT/SEV_SEGMENT_program.su

.PHONY: clean-03-2d-HAL-2f-02-2d-SEV_SEGMENT

