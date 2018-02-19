


#include "eru.h"

void eru_init(XMC_GPIO_PORT_t *const port, const uint8_t pin)
{
const XMC_GPIO_CONFIG_t sync_pin_config = {
	.mode             = XMC_GPIO_MODE_INPUT_PULL_UP,
	.input_hysteresis = XMC_GPIO_INPUT_HYSTERESIS_STANDARD
};
XMC_GPIO_Init(port, pin, &sync_pin_config);

 XMC_ERU_ETL_CONFIG_t sync_etl_config = {
	.input_a                = (uint32_t)XMC_ERU_ETL_INPUT_A0,
	.input_b                = (uint32_t)XMC_ERU_ETL_INPUT_B0,
	.enable_output_trigger  = (uint32_t)1,
	.edge_detection         = XMC_ERU_ETL_EDGE_DETECTION_FALLING,
	.output_trigger_channel = XMC_ERU_ETL_OUTPUT_TRIGGER_CHANNEL0, // Select the source for event
	.source                 = XMC_ERU_ETL_SOURCE_B
};
	//XMC_GPIO_Init(P0_0, &sync_pin_config);
	// ERU Event Trigger Logic Hardware initialization based on UI
	XMC_ERU_ETL_Init(XMC_ERU0, 3, &sync_etl_config);
	// OGU is configured to generate event on configured trigger edge
	XMC_ERU_OGU_SetServiceRequestMode(XMC_ERU0, 0, XMC_ERU_OGU_SERVICE_REQUEST_ON_TRIGGER);
	// Configure NVIC node and priority
	NVIC_SetPriority(3, 1);

	// Clear pending interrupt before enabling it
	NVIC_ClearPendingIRQ(3);
	// Enable NVIC node
	NVIC_EnableIRQ(3);
}
