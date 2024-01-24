################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../02-MCAL/01-RCC/RCC_program.c 

OBJS += \
./02-MCAL/01-RCC/RCC_program.o 

C_DEPS += \
./02-MCAL/01-RCC/RCC_program.d 


# Each subdirectory must supply rules for building sources it contributes
02-MCAL/01-RCC/%.o 02-MCAL/01-RCC/%.su 02-MCAL/01-RCC/%.cyclo: ../02-MCAL/01-RCC/%.c 02-MCAL/01-RCC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/03-HAL" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/09-UART" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/08-SPI" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/03-HAL/05-STP" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/07-DMA" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/03-HAL/04-IR" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/03-HAL/03-LEDMRX" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/03-HAL/01-LED" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/03-HAL/02-SEV_SEGMENT" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/02-GPIO" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/06-STK" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/05-AFIO" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/04-EXIN" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/03-NVIC" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/01-LIB" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL/01-RCC" -I"D:/Embedded Systems/AbdelBasit/ARM Cortex-M3 (Assaf)/SYSTEM/STM_DRIVERS/02-MCAL" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-02-2d-MCAL-2f-01-2d-RCC

clean-02-2d-MCAL-2f-01-2d-RCC:
	-$(RM) ./02-MCAL/01-RCC/RCC_program.cyclo ./02-MCAL/01-RCC/RCC_program.d ./02-MCAL/01-RCC/RCC_program.o ./02-MCAL/01-RCC/RCC_program.su

.PHONY: clean-02-2d-MCAL-2f-01-2d-RCC

