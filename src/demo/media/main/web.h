#ifndef __WEB_H__
#define __WEB_H__

#define  WEB_STACK_SIZE	8192
#define  WEB_PRIORITY 	5

void init_wifi(void);
void init_web(void);

void web_task(void *pvParameters);

#endif /* __WEB_H__ */
