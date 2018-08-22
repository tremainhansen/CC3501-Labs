################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Generated_Code/ASerialLdd1.c \
../Generated_Code/CI2C1.c \
../Generated_Code/CS1.c \
../Generated_Code/Cpu.c \
../Generated_Code/HIDM1.c \
../Generated_Code/Inhr1.c \
../Generated_Code/IntI2cLdd1.c \
../Generated_Code/PE_LDD.c \
../Generated_Code/Term1.c \
../Generated_Code/Tx2.c \
../Generated_Code/USB0.c \
../Generated_Code/USB1.c \
../Generated_Code/Vectors.c \
../Generated_Code/usb_class.c \
../Generated_Code/usb_dci_kinetis.c \
../Generated_Code/usb_descriptor.c \
../Generated_Code/usb_driver.c \
../Generated_Code/usb_framework.c \
../Generated_Code/usb_hid.c \
../Generated_Code/wdt_kinetis.c 

OBJS += \
./Generated_Code/ASerialLdd1.o \
./Generated_Code/CI2C1.o \
./Generated_Code/CS1.o \
./Generated_Code/Cpu.o \
./Generated_Code/HIDM1.o \
./Generated_Code/Inhr1.o \
./Generated_Code/IntI2cLdd1.o \
./Generated_Code/PE_LDD.o \
./Generated_Code/Term1.o \
./Generated_Code/Tx2.o \
./Generated_Code/USB0.o \
./Generated_Code/USB1.o \
./Generated_Code/Vectors.o \
./Generated_Code/usb_class.o \
./Generated_Code/usb_dci_kinetis.o \
./Generated_Code/usb_descriptor.o \
./Generated_Code/usb_driver.o \
./Generated_Code/usb_framework.o \
./Generated_Code/usb_hid.o \
./Generated_Code/wdt_kinetis.o 

C_DEPS += \
./Generated_Code/ASerialLdd1.d \
./Generated_Code/CI2C1.d \
./Generated_Code/CS1.d \
./Generated_Code/Cpu.d \
./Generated_Code/HIDM1.d \
./Generated_Code/Inhr1.d \
./Generated_Code/IntI2cLdd1.d \
./Generated_Code/PE_LDD.d \
./Generated_Code/Term1.d \
./Generated_Code/Tx2.d \
./Generated_Code/USB0.d \
./Generated_Code/USB1.d \
./Generated_Code/Vectors.d \
./Generated_Code/usb_class.d \
./Generated_Code/usb_dci_kinetis.d \
./Generated_Code/usb_descriptor.d \
./Generated_Code/usb_driver.d \
./Generated_Code/usb_framework.d \
./Generated_Code/usb_hid.d \
./Generated_Code/wdt_kinetis.d 


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/%.o: ../Generated_Code/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:/Users/trema/Documents/UNI/Year 4/Semester 2/CC3501/Practical/Labs/Lab_3/Static_Code/PDD" -I"C:/Users/trema/Documents/UNI/Year 4/Semester 2/CC3501/Practical/Labs/Lab_3/Static_Code/IO_Map" -I"C:/Users/trema/Documents/UNI/Year 4/Semester 2/CC3501/Practical/Labs/Lab_3/Sources" -I"C:/Users/trema/Documents/UNI/Year 4/Semester 2/CC3501/Practical/Labs/Lab_3/Generated_Code" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


