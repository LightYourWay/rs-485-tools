/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __UART_API_H__
#define __UART_API_H__

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>

    struct uart_api
    {
        virtual void start() = 0;

        virtual void stop() = 0;

        virtual void sendByte(uint8_t byte) = 0;

        virtual uint8_t receiveByte() = 0;
    };

#ifdef __cplusplus
}
#endif

#endif /* __UART_API_H__ */