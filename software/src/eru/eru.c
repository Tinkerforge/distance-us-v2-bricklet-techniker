


#include "eru.h"

void eru_enable(XMC_ERU_t *const eru)
{
//XMC_ERU_Enable(XMC_ERU_t *const eru);
}



void event_request_unit_config()
{
  const XMC_ERU_ETL_CONFIG_t button_event_generator_config =
{
.input = ERU0_ETL1_INPUTA_P2_5,
.source = XMC_ERU_ETL_SOURCE_A,
.edge_detection = XMC_ERU_ETL_EDGE_DETECTION_FALLING,
.status_flag_mode = XMC_ERU_ETL_STATUS_FLAG_MODE_SWCTRL,
.enable_output_trigger = true,
.output_trigger_channel = XMC_ERU_ETL_OUTPUT_TRIGGER_CHANNEL0
};

const XMC_ERU_OGU_CONFIG_t button_event_detection_config =
{
.enable_pattern_detection = false,
.service_request = XMC_ERU_OGU_SERVICE_REQUEST_ON_TRIGGER
};

const	XMC_GPIO_CONFIG_t button_pin_confi = {
			.mode             = XMC_GPIO_MODE_INPUT_SAMPLING,
			.output_level     = XMC_GPIO_OUTPUT_LEVEL_HIGH,
			.input_hysteresis = XMC_GPIO_INPUT_HYSTERESIS_STANDARD
		};

		XMC_GPIO_Init(P2_5, &button_pin_confi);

/*  XMC_ERU_ETL_Init(ERU0_ETL1, &button_event_generator_config);
  XMC_ERU_OGU_Init(ERU0_OGU0, &button_event_detection_config); */
}
