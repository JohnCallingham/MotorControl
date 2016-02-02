class MotorDriver {
public:
  MotorDriver(uint8_t addr, int num);
  void setPWMFreq(float freq);
  void setPWM(uint8_t num, uint16_t on, uint16_t off);

private:
  uint8_t _i2caddr;

  uint8_t read8(uint8_t addr);
  void write8(uint8_t addr, uint8_t d);
};
