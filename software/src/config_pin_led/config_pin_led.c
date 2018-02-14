void pin_in_init(XMC_GPIO_PORT_t *const port, const uint8_t pin);
{
const XMC_GPIO_CONFIG_t pin_in_config	= {
  .mode             = XMC_GPIO_MODE_INPUT_TRISTATE,
  .output_level     = XMC_GPIO_OUTPUT_LEVEL_HIGH
	};

  XMC_GPIO_Init(port, pin, &pin_in_config);


}

void pin_out_init(XMC_GPIO_PORT_t *const port, const uint8_t pin);
{
const XMC_GPIO_CONFIG_t pin_out_config	= {
		.mode                = XMC_GPIO_MODE_OUTPUT_PUSH_PULL,
		.output_level        = XMC_GPIO_OUTPUT_LEVEL_LOW,
	};

  XMC_GPIO_Init(port, pin, &pin_out_config);

}
